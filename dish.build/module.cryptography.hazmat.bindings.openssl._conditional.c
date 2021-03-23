/* Generated code for Python module 'cryptography.hazmat.bindings.openssl._conditional'
 * created by Nuitka version 0.6.13
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_cryptography$hazmat$bindings$openssl$_conditional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[145];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cryptography.hazmat.bindings.openssl._conditional");

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cryptography.hazmat.bindings.openssl._conditional");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a0702f2d411572b07031273aa91d2672;
static PyCodeObject *codeobj_e24de820b3638ab35a26a35d53b13beb;
static PyCodeObject *codeobj_75cff942d4388ba1ca7946ce6f7a0181;
static PyCodeObject *codeobj_e9cefccc3e62bcf1188e1267d753b1aa;
static PyCodeObject *codeobj_61236f5883309e25b88b84e0213b55f8;
static PyCodeObject *codeobj_81c25b59bcf673bec0250965d68fe0f7;
static PyCodeObject *codeobj_5d744d1c39fb188d7f0c5f8e067e54ea;
static PyCodeObject *codeobj_76086f8a96a5b5fc21f58f9b16243b9f;
static PyCodeObject *codeobj_d117247afbf2eaaf0f67684d6664c824;
static PyCodeObject *codeobj_e97daef88164a1f6f20f443f6b471ce7;
static PyCodeObject *codeobj_d09dfad1eb8f56d1bc5611a60694b92c;
static PyCodeObject *codeobj_881552f759ec279838f8c38799eb4ef8;
static PyCodeObject *codeobj_a7e5de317a14b4e30b6be70453eae736;
static PyCodeObject *codeobj_049c66af82c88743db25d111870de8ba;
static PyCodeObject *codeobj_d0f1e453986845ccd466b587355b04a4;
static PyCodeObject *codeobj_46910c258ec28c4b39018ac48cb57e59;
static PyCodeObject *codeobj_93fbc147e1e7833f9b5a97247f4487d3;
static PyCodeObject *codeobj_5104db01da3b77053d5b7bf9e3cf9c06;
static PyCodeObject *codeobj_a4a75dfff0ce678c8cd19d9e59895f44;
static PyCodeObject *codeobj_38cc8db0b92b269d85e6aab673f69b85;
static PyCodeObject *codeobj_0d6c28151c94be7c9ec05b3711db412c;
static PyCodeObject *codeobj_d2b66716237216b1037ff6b469553a0b;
static PyCodeObject *codeobj_50c8d5c7566030d4115f54744d0828e7;
static PyCodeObject *codeobj_e6eaf36280e6c3dc4917c1f94252240b;
static PyCodeObject *codeobj_5ef281d059a022e5439763150ead757a;
static PyCodeObject *codeobj_b1b071f053a2ed1500ffd7180636ac3e;
static PyCodeObject *codeobj_321696fa3a81ec0527ce21280a03d0a9;
static PyCodeObject *codeobj_d10dd8deaae3a546879de6e757c35528;
static PyCodeObject *codeobj_95038aa7672a5b63b43a67275311eb26;
static PyCodeObject *codeobj_82dae5868ea106d80f16a56f8ad7e9f3;
static PyCodeObject *codeobj_97041fc06ac89a94a78740494ce9abe9;
static PyCodeObject *codeobj_4b8fb4038df8f4b764496937c0cd8a15;
static PyCodeObject *codeobj_f7a13b5f1a41825388cf96072bdbe967;
static PyCodeObject *codeobj_7fbdcf2542ebb83b1446ccb78d96327a;
static PyCodeObject *codeobj_d0f401269cee0af73474fb0602980735;
static PyCodeObject *codeobj_908db4ec2b4085f81933b71fdf105ef9;
static PyCodeObject *codeobj_28f5dbdec763b4be4b94ae8d0f1c187a;
static PyCodeObject *codeobj_345879fc95df4c05113416ae2a5aecce;
static PyCodeObject *codeobj_de4d25e0d87226f85b2ca24e8d07f196;
static PyCodeObject *codeobj_7ea87d26f56a8a447b15738f8984d137;
static PyCodeObject *codeobj_56b054d15d2da52c3d2e1f3b59abea43;
static PyCodeObject *codeobj_7576805248ad1431331ae8936ba8fbe5;
static PyCodeObject *codeobj_a0702c6671bb2e5133a0eacd7eab763f;
static PyCodeObject *codeobj_e324a30dfc21d52d2d9e201cfc5c7c8b;
static PyCodeObject *codeobj_897e3fde843b901b5ae3a3e0a2bbd45c;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[45]; CHECK_OBJECT(module_filename_obj);
    codeobj_a0702f2d411572b07031273aa91d2672 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_e24de820b3638ab35a26a35d53b13beb = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], NULL, NULL, 0, 0, 0);
    codeobj_75cff942d4388ba1ca7946ce6f7a0181 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], NULL, NULL, 0, 0, 0);
    codeobj_e9cefccc3e62bcf1188e1267d753b1aa = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], NULL, NULL, 0, 0, 0);
    codeobj_61236f5883309e25b88b84e0213b55f8 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], NULL, NULL, 0, 0, 0);
    codeobj_81c25b59bcf673bec0250965d68fe0f7 = MAKE_CODEOBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], NULL, NULL, 0, 0, 0);
    codeobj_5d744d1c39fb188d7f0c5f8e067e54ea = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_76086f8a96a5b5fc21f58f9b16243b9f = MAKE_CODEOBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_d117247afbf2eaaf0f67684d6664c824 = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], NULL, NULL, 0, 0, 0);
    codeobj_e97daef88164a1f6f20f443f6b471ce7 = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], NULL, NULL, 0, 0, 0);
    codeobj_d09dfad1eb8f56d1bc5611a60694b92c = MAKE_CODEOBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], NULL, NULL, 0, 0, 0);
    codeobj_881552f759ec279838f8c38799eb4ef8 = MAKE_CODEOBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], NULL, NULL, 0, 0, 0);
    codeobj_a7e5de317a14b4e30b6be70453eae736 = MAKE_CODEOBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_049c66af82c88743db25d111870de8ba = MAKE_CODEOBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], NULL, NULL, 0, 0, 0);
    codeobj_d0f1e453986845ccd466b587355b04a4 = MAKE_CODEOBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_46910c258ec28c4b39018ac48cb57e59 = MAKE_CODEOBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], NULL, NULL, 0, 0, 0);
    codeobj_93fbc147e1e7833f9b5a97247f4487d3 = MAKE_CODEOBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], NULL, NULL, 0, 0, 0);
    codeobj_5104db01da3b77053d5b7bf9e3cf9c06 = MAKE_CODEOBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], NULL, NULL, 0, 0, 0);
    codeobj_a4a75dfff0ce678c8cd19d9e59895f44 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], NULL, NULL, 0, 0, 0);
    codeobj_38cc8db0b92b269d85e6aab673f69b85 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], NULL, NULL, 0, 0, 0);
    codeobj_0d6c28151c94be7c9ec05b3711db412c = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], NULL, NULL, 0, 0, 0);
    codeobj_d2b66716237216b1037ff6b469553a0b = MAKE_CODEOBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], NULL, NULL, 0, 0, 0);
    codeobj_50c8d5c7566030d4115f54744d0828e7 = MAKE_CODEOBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], NULL, NULL, 0, 0, 0);
    codeobj_e6eaf36280e6c3dc4917c1f94252240b = MAKE_CODEOBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], NULL, NULL, 0, 0, 0);
    codeobj_5ef281d059a022e5439763150ead757a = MAKE_CODEOBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], NULL, NULL, 0, 0, 0);
    codeobj_b1b071f053a2ed1500ffd7180636ac3e = MAKE_CODEOBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], NULL, NULL, 0, 0, 0);
    codeobj_321696fa3a81ec0527ce21280a03d0a9 = MAKE_CODEOBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], NULL, NULL, 0, 0, 0);
    codeobj_d10dd8deaae3a546879de6e757c35528 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], NULL, NULL, 0, 0, 0);
    codeobj_95038aa7672a5b63b43a67275311eb26 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], NULL, NULL, 0, 0, 0);
    codeobj_82dae5868ea106d80f16a56f8ad7e9f3 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], NULL, NULL, 0, 0, 0);
    codeobj_97041fc06ac89a94a78740494ce9abe9 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], NULL, NULL, 0, 0, 0);
    codeobj_4b8fb4038df8f4b764496937c0cd8a15 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_f7a13b5f1a41825388cf96072bdbe967 = MAKE_CODEOBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], NULL, NULL, 0, 0, 0);
    codeobj_7fbdcf2542ebb83b1446ccb78d96327a = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], NULL, NULL, 0, 0, 0);
    codeobj_d0f401269cee0af73474fb0602980735 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], NULL, NULL, 0, 0, 0);
    codeobj_908db4ec2b4085f81933b71fdf105ef9 = MAKE_CODEOBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_28f5dbdec763b4be4b94ae8d0f1c187a = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], NULL, NULL, 0, 0, 0);
    codeobj_345879fc95df4c05113416ae2a5aecce = MAKE_CODEOBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], NULL, NULL, 0, 0, 0);
    codeobj_de4d25e0d87226f85b2ca24e8d07f196 = MAKE_CODEOBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], NULL, NULL, 0, 0, 0);
    codeobj_7ea87d26f56a8a447b15738f8984d137 = MAKE_CODEOBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_56b054d15d2da52c3d2e1f3b59abea43 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], NULL, NULL, 0, 0, 0);
    codeobj_7576805248ad1431331ae8936ba8fbe5 = MAKE_CODEOBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], NULL, NULL, 0, 0, 0);
    codeobj_a0702c6671bb2e5133a0eacd7eab763f = MAKE_CODEOBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], NULL, NULL, 0, 0, 0);
    codeobj_e324a30dfc21d52d2d9e201cfc5c7c8b = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], NULL, NULL, 0, 0, 0);
    codeobj_897e3fde843b901b5ae3a3e0a2bbd45c = MAKE_CODEOBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[0]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[3]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[6]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[7]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[11]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[13]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[15]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[18]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[21]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[22]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[25]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[26]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[32]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[33]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[34]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[35]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[36]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[37]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[38]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[39]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[40]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[41]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[42]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[43]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38cc8db0b92b269d85e6aab673f69b85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e24de820b3638ab35a26a35d53b13beb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_75cff942d4388ba1ca7946ce6f7a0181,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9cefccc3e62bcf1188e1267d753b1aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_897e3fde843b901b5ae3a3e0a2bbd45c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e324a30dfc21d52d2d9e201cfc5c7c8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7a13b5f1a41825388cf96072bdbe967,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28f5dbdec763b4be4b94ae8d0f1c187a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_345879fc95df4c05113416ae2a5aecce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0d6c28151c94be7c9ec05b3711db412c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d117247afbf2eaaf0f67684d6664c824,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97041fc06ac89a94a78740494ce9abe9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4a75dfff0ce678c8cd19d9e59895f44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0f1e453986845ccd466b587355b04a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2b66716237216b1037ff6b469553a0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4b8fb4038df8f4b764496937c0cd8a15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a0702c6671bb2e5133a0eacd7eab763f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_56b054d15d2da52c3d2e1f3b59abea43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7576805248ad1431331ae8936ba8fbe5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_881552f759ec279838f8c38799eb4ef8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d09dfad1eb8f56d1bc5611a60694b92c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e97daef88164a1f6f20f443f6b471ce7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ef281d059a022e5439763150ead757a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50c8d5c7566030d4115f54744d0828e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_049c66af82c88743db25d111870de8ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46910c258ec28c4b39018ac48cb57e59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5104db01da3b77053d5b7bf9e3cf9c06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_908db4ec2b4085f81933b71fdf105ef9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1b071f053a2ed1500ffd7180636ac3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76086f8a96a5b5fc21f58f9b16243b9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6eaf36280e6c3dc4917c1f94252240b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81c25b59bcf673bec0250965d68fe0f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7fbdcf2542ebb83b1446ccb78d96327a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_de4d25e0d87226f85b2ca24e8d07f196,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_321696fa3a81ec0527ce21280a03d0a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93fbc147e1e7833f9b5a97247f4487d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7e5de317a14b4e30b6be70453eae736,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ea87d26f56a8a447b15738f8984d137,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_82dae5868ea106d80f16a56f8ad7e9f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_95038aa7672a5b63b43a67275311eb26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d10dd8deaae3a546879de6e757c35528,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0f401269cee0af73474fb0602980735,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61236f5883309e25b88b84e0213b55f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d744d1c39fb188d7f0c5f8e067e54ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_cryptography$hazmat$bindings$openssl$_conditional[] = {
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_cryptography$hazmat$bindings$openssl$_conditional;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_cryptography$hazmat$bindings$openssl$_conditional) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_cryptography$hazmat$bindings$openssl$_conditional[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cryptography.hazmat.bindings.openssl._conditional";

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cryptography$hazmat$bindings$openssl$_conditional = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Skipping module init, already done.\n");
#endif

        return module_cryptography$hazmat$bindings$openssl$_conditional;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$bindings$openssl$_conditional\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT(module_cryptography$hazmat$bindings$openssl$_conditional);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$bindings$openssl$_conditional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$bindings$openssl$_conditional);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$bindings$openssl$_conditional);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a0702f2d411572b07031273aa91d2672;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_a0702f2d411572b07031273aa91d2672 = MAKE_MODULE_FRAME(codeobj_a0702f2d411572b07031273aa91d2672, module_cryptography$hazmat$bindings$openssl$_conditional);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_a0702f2d411572b07031273aa91d2672);
    assert(Py_REFCNT(frame_a0702f2d411572b07031273aa91d2672) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[45];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[49], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_a0702f2d411572b07031273aa91d2672->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                mod_consts[51],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[51]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                mod_consts[53],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[53]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                mod_consts[54],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[54]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0702f2d411572b07031273aa91d2672);
#endif
    popFrameStack();

    assertFrameObject(frame_a0702f2d411572b07031273aa91d2672);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0702f2d411572b07031273aa91d2672);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0702f2d411572b07031273aa91d2672, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0702f2d411572b07031273aa91d2672->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0702f2d411572b07031273aa91d2672, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[99];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_52 = _PyDict_NewPresized( 44 );
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[100];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[101];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[102];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[103];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[104];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[105];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[106];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[107];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[108];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[109];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[110];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[111];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[112];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[113];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[114];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[115];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[116];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[117];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[118];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[119];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[120];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[121];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[122];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[123];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[124];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[125];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[126];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[127];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[128];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[129];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[130];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[131];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[132];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[133];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[134];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[135];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[136];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[137];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[138];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[139];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[140];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[141];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[142];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_52);
    }

    return module_cryptography$hazmat$bindings$openssl$_conditional;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

