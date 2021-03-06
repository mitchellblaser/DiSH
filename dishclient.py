import requests
import time
import curses
import json
import os

# TODO: Add New Line Support for Sent Messages
# TODO: Text Wrapping in MessageList.
# TODO: Server Selection Endless Scrolling
# TODO: Notifications and Notification Menu
# TODO: Image Links in MessageList.
# TODO: User @mentions in MessageList.
# TODO: Periodic update of Channel List inside Server
# TODO: Direct Message Support
# TODO: Settings Menu
# TODO: Scrollable Lists for Channels/Servers/etc
# TODO: Refresh Server List on Leaving Server

settings_location = os.path.expanduser("~") + "/.DiSH/"

if not os.path.exists(settings_location):
    os.mkdir(settings_location)

if os.path.exists(settings_location + "Settings.json") == False:
    with open(settings_location + "Settings.json", "w") as outfile:
        temp = {'token': ''}
        json.dump(temp, outfile)

with open(settings_location + "Settings.json", "r") as infile:
    settings_data = json.load(infile)
    if settings_data['token'] == '':
        print("Please add your user token to " + settings_location + "Settings.json.")
        exit()
token = settings_data['token']
motd = ''' ______     _   ______   ____  ____  
|_   _ `.  (_).' ____ \ |_   ||   _| 
  | | `. \ __ | (___ \_|  | |__| |   
  | |  | |[  | _.____`.   |  __  |   
 _| |_.' / | || \____) | _| |  | |_  
|______.' [___]\______.'|____||____| 
     The Discord SHell Client\n\n'''
userdata = {}

def discordGet(url, use_additional_headers=False, additional_headers={}):
    if use_additional_headers == True:
        return requests.get("https://discordapp.com/api" + str(url), headers=additional_headers).json()
    else: 
        return requests.get("https://discordapp.com/api" + str(url), headers={"Authorization": token}).json()

def SendMessage(channel_id, message_contents):
    requests.post("https://discordapp.com/api/v8/channels/" + channel_id + "/messages", data={"content": message_contents}, headers={"Authorization": token})

def fillText(text, fill_len):
    return str(text) + str(" "*int(fill_len-len(text)))

def listServers(lI):
    load.clear()
    load.addstr(fillText("Server List", 38), curses.color_pair(2))
    i = 0
    if i == lI:
        load.addstr("Direct Messages\n", curses.color_pair(3) | curses.A_BOLD)
    else:
        load.addstr("Direct Messages\n", curses.color_pair(6))
    i = i + 1
    for guild in userdata['guilds']:
        if i == lI:
            load.addstr(guild['name'] + "\n", curses.color_pair(3) | curses.A_BOLD)
        else:
            load.addstr(guild['name'] + "\n", curses.color_pair(1))
        i = i + 1

def listChannels(lI):
    global activeChannel
    channels = discordGet("/v8/guilds/" + activeServer['id'] + "/channels")
    line = 1
    activeChannel = None
    for channel in channels:
        if channel['type'] == 0:
            if line == lI:
                ChannelList.addstr(line, 2, channel['name'][:17], curses.color_pair(1) | curses.A_BOLD)
                activeChannel = channel
            else:
                ChannelList.addstr(line, 2, channel['name'][:17])
            line = line + 1

def showMessages(channel_id):
    channel_messages = discordGet("/v8/channels/" + str(channel_id) + "/messages")
    for message in channel_messages:
        load.addstr(message['author']['username'] + ": " + message['content'] + "\n")

def DrawMessageBox(clear=True):
    if clear:
        MessageBox.clear()
        MessageBox.bkgd(' ', curses.color_pair(3) | curses.A_NORMAL)
    MessageBox.border()
    MessageBox.addstr(0, 2, "[ SEND MESSAGE ]", curses.color_pair(4))
    MessageBox.refresh()

def kill():
    curses.nocbreak()
    stdscr.keypad(False)
    curses.echo()
    curses.endwin()

def UpdateWindowSize():
    global rows
    global cols
    rows, cols = stdscr.getmaxyx()

def DrawServerWindow():
    global stdscr
    global ChannelList
    global UserList
    global messageSize
    global MessageList
    global MessageBox
    global InputCounter
    global InputCounterY
    global Input
    global ChannelSelector
    global LastUpdate

    stdscr.clear()
    stdscr.addstr("DiSH: Connected as User " + userdata['user']['username'] + "#" + userdata['user']['discriminator'] + ".\n")
    stdscr.addstr("PG UP/DOWN: Change Channel" + ".\n")
    stdscr.refresh()

    ChannelList = curses.newwin(rows-2, 20, 2, 0)
    ChannelList.bkgd(' ', curses.color_pair(3) | curses.A_NORMAL)
    ChannelList.border()
    ChannelList.addstr(0, 2, "[ CHANNELS ]", curses.color_pair(4))
    # print(activeServer['id'])
    listChannels(0)
    ChannelList.refresh()

    UserList = curses.newwin(rows-2, 20, 2, cols-20)
    UserList.bkgd(' ', curses.color_pair(3) | curses.A_NORMAL)
    UserList.border()
    UserList.addstr(0, 2, "[ STATUS ]", curses.color_pair(5))
    UserList.addstr(1, 2, "Connection:", curses.color_pair(3) | curses.A_BOLD)
    UserList.addstr(2, 3, "Connected.", curses.color_pair(5))
    UserList.addstr(3, 3, userdata['user']['username'] + "#" + userdata['user']['discriminator'], curses.color_pair(5))
    UserList.addstr(5, 2, "Notifications:", curses.color_pair(3) | curses.A_BOLD)
    UserList.addstr(6, 3, "[00]", curses.color_pair(5))# | curses.A_BLINK)
    UserList.addstr(6, 7, " DM's.", curses.color_pair(5))
    UserList.addstr(7, 3, "[00]", curses.color_pair(5))# | curses.A_BLINK)
    UserList.addstr(7, 7, " Mentions.", curses.color_pair(5))
    UserList.refresh()

    messageSize = 3

    MessageList = curses.newwin(rows-messageSize-2, cols-40, 2, 20)
    MessageList.bkgd(' ', curses.color_pair(3) | curses.A_NORMAL)
    MessageList.border()
    MessageList.addstr(0, 2, "[ " + activeServer['name'] + " ]", curses.color_pair(4))
    MessageList.refresh()

    MessageBox = curses.newwin(messageSize, cols-40, rows-messageSize, 20)
    DrawMessageBox()

    InputCounter = 1
    InputCounterY = 1
    Input = ""
    ChannelSelector = 0
    LastUpdate = 0
    return

def DrawListWindow():
    global load
    global userdata
    global stdscr
    global listIndex
    stdscr.clear()
    load = curses.newwin(28, 38, int(abs(rows/2))-14, int(abs(cols/2))-19)
    load.bkgd(' ', curses.color_pair(1) | curses.A_BOLD)
    return

print("The Discord SHell Client.")
print("github.com/mitchellblaser")

stdscr = curses.initscr()
curses.noecho()
curses.cbreak()
stdscr.keypad(True)

stdscr.timeout(100)
curses.curs_set(0)
stdscr.refresh()
listIndex = 0
#92x32 min
UpdateWindowSize()
while cols < 92 or rows < 32:
    UpdateWindowSize()
    stdscr.clear()
    s = "Please resize window."
    stdscr.addstr(abs(int(rows/2)), abs(int(cols/2))-abs(int(len(s)/2)), s)
    stdscr.refresh()
    time.sleep(0.2)

curses.start_color()
curses.init_pair(1, curses.COLOR_BLACK, curses.COLOR_WHITE)
curses.init_pair(2, curses.COLOR_BLACK, curses.COLOR_BLUE)
curses.init_pair(3, curses.COLOR_WHITE, curses.COLOR_BLACK)
curses.init_pair(4, curses.COLOR_MAGENTA, curses.COLOR_BLACK)
curses.init_pair(5, curses.COLOR_CYAN, curses.COLOR_BLACK)
curses.init_pair(6, curses.COLOR_RED, curses.COLOR_WHITE)

DrawListWindow()
load.addstr(motd)
load.addstr("Connecting to Discord Servers...\n")
load.refresh()
userdata['user'] = discordGet("/v8/users/@me")
load.addstr("Connected as " + userdata['user']['username'] + "#" + userdata['user']['discriminator'] + ".\n")
load.refresh()
userdata['guilds'] = discordGet("/v8/users/@me/guilds")
time.sleep(0.5)
NeedsRedraw = False
while True:
    if NeedsRedraw:
        UpdateWindowSize()
        DrawListWindow()
        NeedsRedraw = False
    curses.curs_set(0)
    stdscr.clear()
    stdscr.addstr("DiSH: Connected as User " + userdata['user']['username'] + "#" + userdata['user']['discriminator'] + ".\n")
    stdscr.addstr("Q: Quit, ESC: Back, UP/DOWN: Select, ENTER: Accept" + ".\n")
    stdscr.refresh()
    listServers(listIndex)
    load.refresh()
    try:
        key = stdscr.getch()
        if key == ord('q'):
            break
        elif key == curses.KEY_UP:
            listIndex = listIndex - 1
        elif key == curses.KEY_DOWN:
            listIndex = listIndex + 1
        elif key == curses.KEY_RESIZE:
            UpdateWindowSize()
            DrawListWindow()
        elif key == curses.KEY_ENTER or key == 10 or key == 13:
            i = 1
            for guild in userdata['guilds']:
                if i == listIndex:
                    activeServer = guild
                i = i + 1
            DrawServerWindow()
            while True:
                curses.curs_set(0)
                if (time.time() - LastUpdate) > 3:
                    LastUpdate = time.time()
                    if activeChannel is not None:
                        MessageList.clear()
                        MessageList.border()
                        MessageList.addstr(0, 2, "[ " + activeServer['name'] + " ]", curses.color_pair(4))
                        local_messages = discordGet("/channels/" + activeChannel['id'] + "/messages")
                        for i in range(1, rows-messageSize-3):
                            try:
                                userString = local_messages[(rows-messageSize-3)-i-1]['author']['username'] + ": "
                                MessageList.addstr(i, 1, userString, curses.color_pair(5) | curses.A_ITALIC)
                                MessageList.addstr(i, 1+len(userString), local_messages[(rows-messageSize-3)-i-1]['content'])
                            except:
                                None
                        MessageList.refresh()
                try:
                    key = stdscr.getch()
                    if key == 27: #ESC Key
                        NeedsRedraw = True
                        break
                    elif key == curses.KEY_ENTER or key == 10 or key == 13:
                        SendMessage(activeChannel['id'], Input)
                        curses.curs_set(0)
                        messageSize = 3
                        MessageBox.resize(messageSize, cols-40)
                        MessageBox.mvwin(rows-messageSize, 20)
                        DrawMessageBox()
                        MessageBox.refresh()
                        MessageList.addstr(1, 1, Input)
                        MessageBox.resize(messageSize, cols-40)
                        MessageList.resize(rows-messageSize-2, cols-40)
                        MessageList.clear()
                        MessageList.border()
                        MessageList.addstr(0, 2, "[ " + activeServer['name'] + " ]", curses.color_pair(4))
                        LastUpdate = 0
                        MessageList.refresh()
                        DrawMessageBox()
                        InputCounter = 1
                        InputCounterY = 1
                        Input = ""
                    elif key == curses.KEY_BACKSPACE:
                        curses.curs_set(1)
                        if InputCounter > 1:
                            InputCounter = InputCounter - 1
                            Input = Input[:-1]
                        DrawMessageBox()
                        MessageBox.addstr(1, 1, Input)
                        MessageBox.refresh()
                    elif key == curses.KEY_PPAGE:
                        if ChannelSelector > 0:
                            ChannelSelector = ChannelSelector - 1
                            listChannels(ChannelSelector)
                            ChannelList.refresh()
                            MessageList.clear()
                            MessageList.border()
                            MessageList.addstr(0, 2, "[ " + activeServer['name'] + " ]", curses.color_pair(4))
                            MessageList.refresh()
                    elif key == curses.KEY_NPAGE:
                        ChannelSelector = ChannelSelector + 1
                        listChannels(ChannelSelector)
                        ChannelList.refresh()
                        MessageList.clear()
                        MessageList.border()
                        MessageList.addstr(0, 2, "[ " + activeServer['name'] + " ]", curses.color_pair(4))
                        MessageList.refresh()
                    elif key == curses.KEY_F10: #FIXME: Remove this.
                        messageSize = messageSize + 1
                        MessageBox.mvwin(rows-messageSize,20)
                        MessageBox.resize(messageSize, cols-40)
                        MessageList.resize(rows-messageSize-2, cols-40)
                        MessageList.border()
                        MessageList.addstr(0, 2, "[ " + activeServer['name'] + " ]", curses.color_pair(4))
                        MessageList.refresh()
                        DrawMessageBox()
                        MessageBox.refresh()
                    elif key == curses.KEY_RESIZE:
                        UpdateWindowSize()
                        DrawServerWindow()
                    else:
                        if InputCounter != cols-40-2:
                            MessageBox.addch(InputCounterY, InputCounter, key)
                        else:
                            InputCounter = 0
                            InputCounterY = InputCounterY + 1
                            MessageBox.addstr(InputCounterY, InputCounter, " "*int(cols-41))
                            MessageBox.addch(InputCounterY, InputCounter, key)
                            messageSize = messageSize + 1
                            MessageBox.mvwin(rows-messageSize,20)
                            MessageBox.resize(messageSize, cols-40)
                            MessageList.resize(rows-messageSize-2, cols-40)
                            MessageList.clear()
                            MessageList.border()
                            MessageList.addstr(0, 2, "[ " + activeServer['name'] + " ]", curses.color_pair(4))
                            MessageList.refresh()
                            LastUpdate = 0
                            DrawMessageBox(clear=False)
                            MessageBox.refresh()
                        curses.curs_set(1)
                        MessageBox.refresh()
                        InputCounter = InputCounter + 1
                        Input = Input + chr(key)
                except Exception as e:
                    None
    except Exception as e:
        print(e)

kill()
