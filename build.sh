nuitka3 dishclient.py --follow-imports --standalone

echo $1;
if [ $1 = "--install" ]
then
	cp dishclient.dist/ ~/.DiSH/. -r
	sudo ln -s ~/.DiSH/dishclient.dist/dishclient /bin/dishclient
fi
