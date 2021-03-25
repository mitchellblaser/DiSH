
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 584 > 0
static unsigned char *bytecode_data[584];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langcyrillicmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_der(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$cmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$decode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$encode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$poly1305(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$constant_time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf$scrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$ssh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$certificate_transparency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$general_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_google(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$encoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$ordered_dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$raw_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$scanner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, },
    {"_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_cffi_backend", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_contextvars", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_crypt", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_curses", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_curses_panel", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_dbm", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_gdbm", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_json", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_opcode", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_posixshmem", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_uuid", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"abc", NULL, 0, 5299, NUITKA_BYTECODE_FLAG},
    {"audioop", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"base64", NULL, 1, 17036, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 2, 2319, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 3, 27029, NUITKA_BYTECODE_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, },
    {"chardet", modulecode_chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, },
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, },
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, },
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, },
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, },
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, },
    {"chardet.compat", modulecode_chardet$compat, 0, 0, },
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, },
    {"chardet.enums", modulecode_chardet$enums, 0, 0, },
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, },
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, },
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, },
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, },
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, },
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, },
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, },
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, },
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, },
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, },
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, },
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, },
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, },
    {"chardet.langcyrillicmodel", modulecode_chardet$langcyrillicmodel, 0, 0, },
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, },
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, },
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, },
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, },
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, },
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, },
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, },
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, },
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, },
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, },
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, },
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, },
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, },
    {"chardet.version", modulecode_chardet$version, 0, 0, },
    {"codecs", NULL, 4, 33921, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 5, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"contextlib", NULL, 6, 20194, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 7, 6952, NUITKA_BYTECODE_FLAG},
    {"cryptography", modulecode_cryptography, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.__about__", modulecode_cryptography$__about__, 0, 0, },
    {"cryptography.exceptions", modulecode_cryptography$exceptions, 0, 0, },
    {"cryptography.hazmat", modulecode_cryptography$hazmat, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat._der", modulecode_cryptography$hazmat$_der, 0, 0, },
    {"cryptography.hazmat._oid", modulecode_cryptography$hazmat$_oid, 0, 0, },
    {"cryptography.hazmat.backends", modulecode_cryptography$hazmat$backends, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.interfaces", modulecode_cryptography$hazmat$backends$interfaces, 0, 0, },
    {"cryptography.hazmat.backends.openssl", modulecode_cryptography$hazmat$backends$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.openssl.aead", modulecode_cryptography$hazmat$backends$openssl$aead, 0, 0, },
    {"cryptography.hazmat.backends.openssl.backend", modulecode_cryptography$hazmat$backends$openssl$backend, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ciphers", modulecode_cryptography$hazmat$backends$openssl$ciphers, 0, 0, },
    {"cryptography.hazmat.backends.openssl.cmac", modulecode_cryptography$hazmat$backends$openssl$cmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.decode_asn1", modulecode_cryptography$hazmat$backends$openssl$decode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dh", modulecode_cryptography$hazmat$backends$openssl$dh, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dsa", modulecode_cryptography$hazmat$backends$openssl$dsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ec", modulecode_cryptography$hazmat$backends$openssl$ec, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed25519", modulecode_cryptography$hazmat$backends$openssl$ed25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed448", modulecode_cryptography$hazmat$backends$openssl$ed448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.encode_asn1", modulecode_cryptography$hazmat$backends$openssl$encode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hashes", modulecode_cryptography$hazmat$backends$openssl$hashes, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hmac", modulecode_cryptography$hazmat$backends$openssl$hmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ocsp", modulecode_cryptography$hazmat$backends$openssl$ocsp, 0, 0, },
    {"cryptography.hazmat.backends.openssl.poly1305", modulecode_cryptography$hazmat$backends$openssl$poly1305, 0, 0, },
    {"cryptography.hazmat.backends.openssl.rsa", modulecode_cryptography$hazmat$backends$openssl$rsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.utils", modulecode_cryptography$hazmat$backends$openssl$utils, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x25519", modulecode_cryptography$hazmat$backends$openssl$x25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x448", modulecode_cryptography$hazmat$backends$openssl$x448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x509", modulecode_cryptography$hazmat$backends$openssl$x509, 0, 0, },
    {"cryptography.hazmat.bindings", modulecode_cryptography$hazmat$bindings, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings._constant_time", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings._openssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings.openssl", modulecode_cryptography$hazmat$bindings$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings.openssl._conditional", modulecode_cryptography$hazmat$bindings$openssl$_conditional, 0, 0, },
    {"cryptography.hazmat.bindings.openssl.binding", modulecode_cryptography$hazmat$bindings$openssl$binding, 0, 0, },
    {"cryptography.hazmat.primitives", modulecode_cryptography$hazmat$primitives, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric", modulecode_cryptography$hazmat$primitives$asymmetric, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dh", modulecode_cryptography$hazmat$primitives$asymmetric$dh, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.dsa", modulecode_cryptography$hazmat$primitives$asymmetric$dsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ec", modulecode_cryptography$hazmat$primitives$asymmetric$ec, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed25519", modulecode_cryptography$hazmat$primitives$asymmetric$ed25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed448", modulecode_cryptography$hazmat$primitives$asymmetric$ed448, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.padding", modulecode_cryptography$hazmat$primitives$asymmetric$padding, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.rsa", modulecode_cryptography$hazmat$primitives$asymmetric$rsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.utils", modulecode_cryptography$hazmat$primitives$asymmetric$utils, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x25519", modulecode_cryptography$hazmat$primitives$asymmetric$x25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x448", modulecode_cryptography$hazmat$primitives$asymmetric$x448, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers", modulecode_cryptography$hazmat$primitives$ciphers, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.ciphers.aead", modulecode_cryptography$hazmat$primitives$ciphers$aead, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.algorithms", modulecode_cryptography$hazmat$primitives$ciphers$algorithms, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.base", modulecode_cryptography$hazmat$primitives$ciphers$base, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.modes", modulecode_cryptography$hazmat$primitives$ciphers$modes, 0, 0, },
    {"cryptography.hazmat.primitives.constant_time", modulecode_cryptography$hazmat$primitives$constant_time, 0, 0, },
    {"cryptography.hazmat.primitives.hashes", modulecode_cryptography$hazmat$primitives$hashes, 0, 0, },
    {"cryptography.hazmat.primitives.kdf", modulecode_cryptography$hazmat$primitives$kdf, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.kdf.scrypt", modulecode_cryptography$hazmat$primitives$kdf$scrypt, 0, 0, },
    {"cryptography.hazmat.primitives.serialization", modulecode_cryptography$hazmat$primitives$serialization, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.serialization.base", modulecode_cryptography$hazmat$primitives$serialization$base, 0, 0, },
    {"cryptography.hazmat.primitives.serialization.ssh", modulecode_cryptography$hazmat$primitives$serialization$ssh, 0, 0, },
    {"cryptography.utils", modulecode_cryptography$utils, 0, 0, },
    {"cryptography.x509", modulecode_cryptography$x509, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.x509.base", modulecode_cryptography$x509$base, 0, 0, },
    {"cryptography.x509.certificate_transparency", modulecode_cryptography$x509$certificate_transparency, 0, 0, },
    {"cryptography.x509.extensions", modulecode_cryptography$x509$extensions, 0, 0, },
    {"cryptography.x509.general_name", modulecode_cryptography$x509$general_name, 0, 0, },
    {"cryptography.x509.name", modulecode_cryptography$x509$name, 0, 0, },
    {"cryptography.x509.ocsp", modulecode_cryptography$x509$ocsp, 0, 0, },
    {"cryptography.x509.oid", modulecode_cryptography$x509$oid, 0, 0, },
    {"curses", NULL, 8, 2096, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"datetime", NULL, 9, 56943, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 10, 1075, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 11, 1647, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.utils", NULL, 12, 9507, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 13, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.idna", NULL, 14, 5582, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 15, 24471, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 16, 27866, NUITKA_BYTECODE_FLAG},
    {"google", modulecode_google, 0, 0, NUITKA_PACKAGE_FLAG},
    {"hashlib", NULL, 17, 6692, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 18, 6353, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 19, 6020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.cookies", NULL, 20, 15233, NUITKA_BYTECODE_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, },
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, },
    {"idna.intranges", modulecode_idna$intranges, 0, 0, },
    {"idna.package_data", modulecode_idna$package_data, 0, 0, },
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, },
    {"imp", NULL, 21, 9774, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 22, 80348, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 23, 3419, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 24, 59533, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 25, 12564, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging", NULL, 26, 64827, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"mimetypes", NULL, 27, 15996, NUITKA_BYTECODE_FLAG},
    {"mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"netrc", NULL, 28, 3742, NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 29, 13656, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 30, 10393, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 31, 14387, NUITKA_BYTECODE_FLAG},
    {"readline", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, },
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, },
    {"requests.adapters", modulecode_requests$adapters, 0, 0, },
    {"requests.api", modulecode_requests$api, 0, 0, },
    {"requests.auth", modulecode_requests$auth, 0, 0, },
    {"requests.certs", modulecode_requests$certs, 0, 0, },
    {"requests.compat", modulecode_requests$compat, 0, 0, },
    {"requests.cookies", modulecode_requests$cookies, 0, 0, },
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, },
    {"requests.hooks", modulecode_requests$hooks, 0, 0, },
    {"requests.models", modulecode_requests$models, 0, 0, },
    {"requests.packages", modulecode_requests$packages, 0, 0, },
    {"requests.sessions", modulecode_requests$sessions, 0, 0, },
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, },
    {"requests.structures", modulecode_requests$structures, 0, 0, },
    {"requests.utils", modulecode_requests$utils, 0, 0, },
    {"simplejson", modulecode_simplejson, 0, 0, NUITKA_PACKAGE_FLAG},
    {"simplejson._speedups", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"simplejson.compat", modulecode_simplejson$compat, 0, 0, },
    {"simplejson.decoder", modulecode_simplejson$decoder, 0, 0, },
    {"simplejson.encoder", modulecode_simplejson$encoder, 0, 0, },
    {"simplejson.errors", modulecode_simplejson$errors, 0, 0, },
    {"simplejson.ordered_dict", modulecode_simplejson$ordered_dict, 0, 0, },
    {"simplejson.raw_json", modulecode_simplejson$raw_json, 0, 0, },
    {"simplejson.scanner", modulecode_simplejson$scanner, 0, 0, },
    {"six", modulecode_six, 0, 0, },
    {"socket", NULL, 32, 27752, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 33, 44561, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 34, 295, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 35, 26475, NUITKA_BYTECODE_FLAG},
    {"termios", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"threading", NULL, 36, 39941, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 37, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.parse", NULL, 38, 33897, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 39, 72496, NUITKA_BYTECODE_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, },
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, },
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, },
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, },
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, },
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, },
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, },
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, },
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, },
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, },
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, },
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, },
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, },
    {"urllib3.request", modulecode_urllib3$request, 0, 0, },
    {"urllib3.response", modulecode_urllib3$response, 0, 0, },
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, },
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, },
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, },
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, },
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, },
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, },
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, },
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, },
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, },
    {"warnings", NULL, 40, 13617, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 41, 58433, NUITKA_BYTECODE_FLAG},
    {"__future__", NULL, 42, 4096, NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 43, 1208, NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 44, 28706, NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 45, 5466, NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 46, 4111, NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 47, 6002, NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 48, 7755, NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 49, 10277, NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 50, 4635, NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 51, 74044, NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 52, 3446, NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 53, 16009, NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__linux_x86_64-linux-gnu", NULL, 54, 21013, NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__x86_64-linux-gnu", NULL, 55, 21007, NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 56, 6411, NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 57, 7565, NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 0, 5299, NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 58, 25439, NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 59, 62556, NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 60, 16646, NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 61, 6816, NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 62, 706, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 63, 50985, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 64, 1688, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 65, 9381, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 66, 1909, NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 67, 546, NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 68, 6619, NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 69, 28022, NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 70, 2463, NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 71, 2297, NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 72, 11158, NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 73, 16333, NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 74, 191, NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 75, 24059, NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 76, 8579, NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 77, 8346, NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 78, 1903, NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 79, 29644, NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 80, 21583, NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 81, 4083, NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 82, 20605, NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 83, 7323, NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 84, 24092, NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 85, 12224, NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 86, 8448, NUITKA_BYTECODE_FLAG},
    {"asyncio.unix_events", NULL, 87, 39289, NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 88, 15993, NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 1, 17036, NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 89, 24886, NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 90, 12100, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 2, 2319, NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 91, 11410, NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 92, 5299, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 3, 27029, NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 93, 26272, NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 94, 10115, NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 95, 4804, NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 96, 12591, NUITKA_BYTECODE_FLAG},
    {"code", NULL, 97, 9878, NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 4, 33921, NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 98, 6383, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 5, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 99, 28705, NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 100, 3205, NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 101, 9375, NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 102, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 103, 1064, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 104, 21865, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 105, 20265, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 106, 5783, NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 107, 45683, NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 6, 20194, NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 108, 208, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 7, 6952, NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 109, 4283, NUITKA_BYTECODE_FLAG},
    {"crypt", NULL, 110, 3352, NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 111, 11875, NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 112, 16328, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 113, 9809, NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 114, 1894, NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 115, 7796, NUITKA_BYTECODE_FLAG},
    {"curses", NULL, 8, 2096, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"curses.ascii", NULL, 116, 3922, NUITKA_BYTECODE_FLAG},
    {"curses.has_key", NULL, 117, 4520, NUITKA_BYTECODE_FLAG},
    {"curses.panel", NULL, 118, 188, NUITKA_BYTECODE_FLAG},
    {"curses.textpad", NULL, 119, 5872, NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 120, 23592, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 9, 56943, NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 121, 4148, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 122, 7738, NUITKA_BYTECODE_FLAG},
    {"dbm.gnu", NULL, 123, 296, NUITKA_BYTECODE_FLAG},
    {"dbm.ndbm", NULL, 124, 167, NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 125, 160697, NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 126, 59403, NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 127, 15767, NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 128, 340, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.archive_util", NULL, 129, 6504, NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 130, 6488, NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 131, 33262, NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 132, 13913, NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 133, 499, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 134, 3631, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 135, 3557, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 136, 12393, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 137, 8614, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 138, 3846, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 139, 4779, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 140, 16113, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 141, 10445, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 142, 4289, NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 143, 4850, NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 144, 2065, NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 145, 10192, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 146, 14597, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 147, 2254, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 148, 3375, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 149, 1673, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 150, 5205, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 151, 2106, NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 152, 8420, NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 153, 14481, NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 154, 4904, NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 155, 3474, NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 156, 6579, NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 157, 8577, NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 158, 159, NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 159, 2679, NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 160, 6144, NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 161, 34457, NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 162, 5215, NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 163, 6888, NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 164, 10621, NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 165, 5898, NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 166, 9832, NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 167, 2280, NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 168, 14688, NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 169, 5071, NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 170, 12772, NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 171, 8404, NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 172, 7049, NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 173, 15511, NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 174, 7276, NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 175, 5100, NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 176, 75939, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 10, 1075, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 11, 1647, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 177, 5651, NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 178, 79898, NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 179, 12419, NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 180, 14775, NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 181, 3200, NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 182, 11424, NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 183, 7326, NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 184, 1577, NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 185, 5870, NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 186, 10607, NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 187, 12447, NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 188, 16404, NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 189, 22009, NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 190, 1885, NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 191, 37843, NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 192, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 193, 1424, NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 194, 2589, NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 195, 1006, NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 196, 1869, NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 197, 1247, NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 198, 1467, NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 199, 729, NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 200, 1276, NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 201, 5687, NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 202, 9623, NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 203, 7643, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 12, 9507, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 13, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 204, 6295, NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 205, 1846, NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 206, 2364, NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 207, 1374, NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 208, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 209, 3255, NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 210, 2856, NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 211, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 212, 2463, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 213, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 214, 8094, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 215, 2377, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 216, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 217, 2411, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 218, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 219, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 220, 2416, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 221, 2435, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 222, 2413, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 223, 2421, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 224, 2419, NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 225, 2373, NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 226, 2417, NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 227, 7811, NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 228, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 229, 2484, NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 230, 8133, NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 231, 7841, NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 232, 7472, NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 233, 7849, NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 234, 8102, NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 235, 2449, NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 236, 7452, NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 237, 7442, NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 238, 7790, NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 239, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 240, 7994, NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 241, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 242, 7949, NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 243, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 244, 8138, NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 245, 7829, NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 246, 2515, NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 247, 2384, NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 248, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 249, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 250, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 251, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 252, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 253, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 254, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 255, 1380, NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 256, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 257, 1372, NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 258, 2351, NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 259, 2588, NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 260, 1370, NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 14, 5582, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 261, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 262, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 263, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 264, 1401, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 265, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 266, 1399, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 267, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 268, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 269, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 270, 2485, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 271, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 272, 2412, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 273, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 274, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 275, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 276, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 277, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 278, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 279, 2431, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 280, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 281, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 282, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 283, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 284, 2438, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 285, 2349, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 286, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 287, 2401, NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 288, 1858, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 289, 7705, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 290, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 291, 2433, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 292, 2423, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 293, 2367, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 294, 2407, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 295, 2426, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 296, 2567, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 297, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 298, 2434, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 299, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 300, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 301, 2508, NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 302, 6280, NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 303, 2380, NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 304, 1727, NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 305, 2966, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 306, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 307, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 308, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 309, 2476, NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 310, 2060, NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 311, 1707, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 312, 4837, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 313, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 314, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 315, 4730, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 316, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 317, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 318, 1536, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 319, 1595, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 320, 4511, NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 321, 3214, NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 322, 3074, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 15, 24471, NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 323, 8392, NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 324, 13338, NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 325, 3297, NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 326, 17510, NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 327, 18704, NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 328, 27814, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 16, 27866, NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 329, 3966, NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 330, 6236, NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 331, 4143, NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 332, 17965, NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 333, 4308, NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 334, 18156, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 17, 6692, NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 335, 14035, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 18, 6353, NUITKA_BYTECODE_FLAG},
    {"html", NULL, 336, 3574, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 337, 50494, NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 338, 11163, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 19, 6020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 339, 34651, NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 340, 53607, NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 20, 15233, NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 341, 34357, NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 342, 41307, NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 343, 4083, NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 21, 9774, NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 344, 3714, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 345, 28570, NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 346, 43675, NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 347, 13538, NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 348, 927, NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 349, 20805, NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 350, 6445, NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 351, 9257, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 22, 80348, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 23, 3419, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 24, 59533, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 25, 12564, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 352, 9809, NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 353, 11136, NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 354, 1916, NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 355, 1861, NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 356, 963, NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 357, 85, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 358, 4842, NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 359, 6115, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 360, 6218, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 361, 12163, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 362, 91, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 363, 1638, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 364, 1237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 365, 621, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 366, 766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 367, 3293, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 368, 2776, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 369, 1107, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 370, 1655, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 371, 2264, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 372, 2402, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 373, 934, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 374, 742, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 375, 746, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 376, 2897, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 377, 3879, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 378, 2745, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 379, 4353, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 380, 504, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 381, 908, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 382, 1092, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 383, 1509, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 384, 1508, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 385, 1536, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 386, 663, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 387, 3055, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 388, 5305, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 389, 896, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 390, 769, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 391, 3041, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 392, 881, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 393, 981, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 394, 4178, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 395, 1348, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 396, 2301, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 397, 2211, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 398, 753, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 399, 1086, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 400, 1104, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 401, 1965, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 402, 803, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 403, 1641, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 404, 678, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 405, 1369, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 406, 1766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 407, 4549, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 408, 1795, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 409, 1507, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 410, 5957, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 411, 1077, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 412, 2487, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 413, 1081, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 414, 1541, NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 415, 8573, NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 416, 5604, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 417, 121, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 418, 4959, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 419, 5630, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 420, 1519, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 421, 6463, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 422, 9741, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 423, 1852, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 424, 15237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 425, 1225, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 426, 24307, NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 427, 20405, NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 428, 3832, NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 429, 34639, NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 26, 64827, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 430, 23189, NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 431, 43121, NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 432, 11983, NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 433, 60229, NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 434, 6441, NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 27, 15996, NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 435, 16080, NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 436, 618, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 437, 25199, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 438, 12983, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 439, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 440, 2513, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 441, 8324, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 442, 7602, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 443, 41511, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 444, 24990, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_fork", NULL, 445, 2609, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_forkserver", NULL, 446, 2382, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_posix", NULL, 447, 2173, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 448, 10966, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 449, 9519, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 450, 8168, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 451, 5221, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 452, 5150, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 453, 14281, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 454, 7014, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 455, 6661, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 456, 11255, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 457, 11451, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 28, 3742, NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 458, 33939, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 459, 14622, NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 460, 1566, NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 461, 12167, NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 462, 5385, NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 29, 13656, NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 463, 48022, NUITKA_BYTECODE_FLAG},
    {"os", NULL, 464, 31362, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 465, 43517, NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 466, 47157, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 467, 46844, NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 468, 67169, NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 469, 7760, NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 470, 16274, NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 471, 24205, NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 472, 26618, NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 473, 13424, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 30, 10393, NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 474, 16246, NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 475, 14579, NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 476, 22018, NUITKA_BYTECODE_FLAG},
    {"pty", NULL, 477, 3920, NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 478, 7359, NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 479, 10416, NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 480, 84327, NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 481, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 482, 420472, NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 483, 10591, NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 484, 5713, NUITKA_BYTECODE_FLAG},
    {"random", NULL, 485, 20073, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 31, 14387, NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 486, 5268, NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 487, 5720, NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 488, 8146, NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 489, 6497, NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 490, 2155, NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 491, 16900, NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 492, 9455, NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 493, 7501, NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 494, 36534, NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 495, 2808, NUITKA_BYTECODE_FLAG},
    {"site", NULL, 496, 13451, NUITKA_BYTECODE_FLAG},
    {"sitecustomize", NULL, 497, 185, NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 498, 26428, NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 499, 35278, NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 500, 6954, NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 32, 27752, NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 501, 23972, NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 502, 116, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 503, 2469, NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 504, 1894, NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 505, 15107, NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 506, 6324, NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 507, 21612, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 33, 44561, NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 508, 4337, NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 509, 33618, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 510, 7265, NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 511, 10982, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 34, 295, NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 512, 41905, NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 513, 17045, NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 514, 2369, NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 515, 11041, NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 516, 15643, NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 517, 6995, NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 518, 62545, NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 519, 18202, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 35, 26475, NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 520, 13484, NUITKA_BYTECODE_FLAG},
    {"this", NULL, 521, 1226, NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 36, 39941, NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 522, 11742, NUITKA_BYTECODE_FLAG},
    {"token", NULL, 523, 2450, NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 524, 17125, NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 525, 19991, NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 526, 19854, NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 527, 17328, NUITKA_BYTECODE_FLAG},
    {"tty", NULL, 528, 1041, NUITKA_BYTECODE_FLAG},
    {"types", NULL, 529, 9142, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 530, 62385, NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 531, 3082, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.async_case", NULL, 532, 4105, NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 533, 50449, NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 534, 14501, NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 535, 7499, NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 536, 77331, NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 537, 7256, NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 538, 6981, NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 539, 2185, NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 540, 9900, NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 541, 4396, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 37, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 542, 2774, NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 38, 33897, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 39, 72496, NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 543, 3254, NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 544, 7292, NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 545, 3570, NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 546, 23631, NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 547, 14906, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 40, 13617, NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 548, 18114, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 549, 19483, NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 550, 17063, NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 551, 680, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 552, 16411, NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 553, 7721, NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 554, 5226, NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 555, 5377, NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 556, 14720, NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 557, 8186, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 558, 648, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 559, 5486, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 560, 932, NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 561, 2815, NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 562, 27306, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 563, 2707, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 564, 55339, NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 565, 10656, NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 566, 12459, NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 567, 87, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 568, 1544, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 569, 8399, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 570, 55577, NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 571, 138, NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 572, 261, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 573, 299, NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 574, 3175, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 575, 5409, NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 576, 12460, NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 577, 12387, NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 578, 12884, NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 579, 16809, NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 580, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 581, 34504, NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 582, 29373, NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 583, 5819, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 41, 58433, NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 44, 28706},
    {"_compression", 46, 4111},
    {"_weakrefset", 57, 7565},
    {"abc", 0, 5299},
    {"base64", 1, 17036},
    {"bz2", 91, 11410},
    {"codecs", 4, 33921},
    {"collections", 5, -46391},
    {"collections.abc", 99, 28705},
    {"copyreg", 109, 4283},
    {"dis", 127, 15767},
    {"encodings", 13, -3859},
    {"encodings.aliases", 204, 6295},
    {"encodings.ascii", 205, 1846},
    {"encodings.base64_codec", 206, 2364},
    {"encodings.big5", 207, 1374},
    {"encodings.big5hkscs", 208, 1384},
    {"encodings.bz2_codec", 209, 3255},
    {"encodings.charmap", 210, 2856},
    {"encodings.cp037", 211, 2387},
    {"encodings.cp1006", 212, 2463},
    {"encodings.cp1026", 213, 2391},
    {"encodings.cp1125", 214, 8094},
    {"encodings.cp1140", 215, 2377},
    {"encodings.cp1250", 216, 2414},
    {"encodings.cp1251", 217, 2411},
    {"encodings.cp1252", 218, 2414},
    {"encodings.cp1253", 219, 2427},
    {"encodings.cp1254", 220, 2416},
    {"encodings.cp1255", 221, 2435},
    {"encodings.cp1256", 222, 2413},
    {"encodings.cp1257", 223, 2421},
    {"encodings.cp1258", 224, 2419},
    {"encodings.cp273", 225, 2373},
    {"encodings.cp424", 226, 2417},
    {"encodings.cp437", 227, 7811},
    {"encodings.cp500", 228, 2387},
    {"encodings.cp720", 229, 2484},
    {"encodings.cp737", 230, 8133},
    {"encodings.cp775", 231, 7841},
    {"encodings.cp850", 232, 7472},
    {"encodings.cp852", 233, 7849},
    {"encodings.cp855", 234, 8102},
    {"encodings.cp856", 235, 2449},
    {"encodings.cp857", 236, 7452},
    {"encodings.cp858", 237, 7442},
    {"encodings.cp860", 238, 7790},
    {"encodings.cp861", 239, 7805},
    {"encodings.cp862", 240, 7994},
    {"encodings.cp863", 241, 7805},
    {"encodings.cp864", 242, 7949},
    {"encodings.cp865", 243, 7805},
    {"encodings.cp866", 244, 8138},
    {"encodings.cp869", 245, 7829},
    {"encodings.cp874", 246, 2515},
    {"encodings.cp875", 247, 2384},
    {"encodings.cp932", 248, 1376},
    {"encodings.cp949", 249, 1376},
    {"encodings.cp950", 250, 1376},
    {"encodings.euc_jis_2004", 251, 1390},
    {"encodings.euc_jisx0213", 252, 1390},
    {"encodings.euc_jp", 253, 1378},
    {"encodings.euc_kr", 254, 1378},
    {"encodings.gb18030", 255, 1380},
    {"encodings.gb2312", 256, 1378},
    {"encodings.gbk", 257, 1372},
    {"encodings.hex_codec", 258, 2351},
    {"encodings.hp_roman8", 259, 2588},
    {"encodings.hz", 260, 1370},
    {"encodings.idna", 14, 5582},
    {"encodings.iso2022_jp", 261, 1391},
    {"encodings.iso2022_jp_1", 262, 1395},
    {"encodings.iso2022_jp_2", 263, 1395},
    {"encodings.iso2022_jp_2004", 264, 1401},
    {"encodings.iso2022_jp_3", 265, 1395},
    {"encodings.iso2022_jp_ext", 266, 1399},
    {"encodings.iso2022_kr", 267, 1391},
    {"encodings.iso8859_1", 268, 2386},
    {"encodings.iso8859_10", 269, 2391},
    {"encodings.iso8859_11", 270, 2485},
    {"encodings.iso8859_13", 271, 2394},
    {"encodings.iso8859_14", 272, 2412},
    {"encodings.iso8859_15", 273, 2391},
    {"encodings.iso8859_16", 274, 2393},
    {"encodings.iso8859_2", 275, 2386},
    {"encodings.iso8859_3", 276, 2393},
    {"encodings.iso8859_4", 277, 2386},
    {"encodings.iso8859_5", 278, 2387},
    {"encodings.iso8859_6", 279, 2431},
    {"encodings.iso8859_7", 280, 2394},
    {"encodings.iso8859_8", 281, 2425},
    {"encodings.iso8859_9", 282, 2386},
    {"encodings.johab", 283, 1376},
    {"encodings.koi8_r", 284, 2438},
    {"encodings.koi8_t", 285, 2349},
    {"encodings.koi8_u", 286, 2424},
    {"encodings.kz1048", 287, 2401},
    {"encodings.latin_1", 288, 1858},
    {"encodings.mac_arabic", 289, 7705},
    {"encodings.mac_centeuro", 290, 2425},
    {"encodings.mac_croatian", 291, 2433},
    {"encodings.mac_cyrillic", 292, 2423},
    {"encodings.mac_farsi", 293, 2367},
    {"encodings.mac_greek", 294, 2407},
    {"encodings.mac_iceland", 295, 2426},
    {"encodings.mac_latin2", 296, 2567},
    {"encodings.mac_roman", 297, 2424},
    {"encodings.mac_romanian", 298, 2434},
    {"encodings.mac_turkish", 299, 2427},
    {"encodings.palmos", 300, 2414},
    {"encodings.ptcp154", 301, 2508},
    {"encodings.punycode", 302, 6280},
    {"encodings.quopri_codec", 303, 2380},
    {"encodings.raw_unicode_escape", 304, 1727},
    {"encodings.rot_13", 305, 2966},
    {"encodings.shift_jis", 306, 1384},
    {"encodings.shift_jis_2004", 307, 1394},
    {"encodings.shift_jisx0213", 308, 1394},
    {"encodings.tis_620", 309, 2476},
    {"encodings.undefined", 310, 2060},
    {"encodings.unicode_escape", 311, 1707},
    {"encodings.utf_16", 312, 4837},
    {"encodings.utf_16_be", 313, 1615},
    {"encodings.utf_16_le", 314, 1615},
    {"encodings.utf_32", 315, 4730},
    {"encodings.utf_32_be", 316, 1508},
    {"encodings.utf_32_le", 317, 1508},
    {"encodings.utf_7", 318, 1536},
    {"encodings.utf_8", 319, 1595},
    {"encodings.utf_8_sig", 320, 4511},
    {"encodings.uu_codec", 321, 3214},
    {"encodings.zlib_codec", 322, 3074},
    {"enum", 15, 24471},
    {"functools", 16, 27866},
    {"genericpath", 329, 3966},
    {"heapq", 335, 14035},
    {"importlib", 344, -3714},
    {"importlib._bootstrap", 345, 28570},
    {"importlib._bootstrap_external", 346, 43675},
    {"importlib.machinery", 348, 927},
    {"inspect", 22, 80348},
    {"io", 23, 3419},
    {"keyword", 356, 963},
    {"linecache", 428, 3832},
    {"locale", 429, 34639},
    {"opcode", 462, 5385},
    {"operator", 29, 13656},
    {"os", 464, 31362},
    {"posixpath", 30, 10393},
    {"quopri", 484, 5713},
    {"re", 31, 14387},
    {"reprlib", 486, 5268},
    {"sre_compile", 505, 15107},
    {"sre_constants", 506, 6324},
    {"sre_parse", 507, 21612},
    {"stat", 508, 4337},
    {"stringprep", 511, 10982},
    {"struct", 34, 295},
    {"threading", 36, 39941},
    {"token", 523, 2450},
    {"tokenize", 524, 17125},
    {"types", 529, 9142},
    {"warnings", 40, 13617},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


