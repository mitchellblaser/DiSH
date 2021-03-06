/* Generated code for Python module '__main__'
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

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[230];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "__main__");

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 1
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "__main__");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6a4dbdadaf881348a44f3c2308feb9d6;
static PyCodeObject *codeobj_ff3f68dd84247dda63b4f5b71beacc4b;
static PyCodeObject *codeobj_1298e3f5f7d219fbe4a216b999f83092;
static PyCodeObject *codeobj_ed13bd86e56a8e8e8a4e81a6221f6bd8;
static PyCodeObject *codeobj_2c7ab8571aa8461211c1c21473895ebb;
static PyCodeObject *codeobj_1fba8baf89a8178edd8a8b2f1673967c;
static PyCodeObject *codeobj_b7d3514cc9de902208dda97252f34fdd;
static PyCodeObject *codeobj_703f804de47832601eb96d65657b1480;
static PyCodeObject *codeobj_33aca8c0279e3fc37affe1e632bb8bc2;
static PyCodeObject *codeobj_da2f9074e9c0cf3c4277fde291d11008;
static PyCodeObject *codeobj_8f5e4db9774ce80fbbb9ce2568235603;
static PyCodeObject *codeobj_61de883c3983d8da2b56205e0b12ede2;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[221]); CHECK_OBJECT(module_filename_obj);
    codeobj_6a4dbdadaf881348a44f3c2308feb9d6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[222], NULL, NULL, 0, 0, 0);
    codeobj_ff3f68dd84247dda63b4f5b71beacc4b = MAKE_CODEOBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_1298e3f5f7d219fbe4a216b999f83092 = MAKE_CODEOBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[223], NULL, 1, 0, 0);
    codeobj_ed13bd86e56a8e8e8a4e81a6221f6bd8 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], NULL, NULL, 0, 0, 0);
    codeobj_2c7ab8571aa8461211c1c21473895ebb = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[224], NULL, 2, 0, 0);
    codeobj_1fba8baf89a8178edd8a8b2f1673967c = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_b7d3514cc9de902208dda97252f34fdd = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[225], NULL, 3, 0, 0);
    codeobj_703f804de47832601eb96d65657b1480 = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[226], NULL, 2, 0, 0);
    codeobj_33aca8c0279e3fc37affe1e632bb8bc2 = MAKE_CODEOBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_da2f9074e9c0cf3c4277fde291d11008 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[227], NULL, 1, 0, 0);
    codeobj_8f5e4db9774ce80fbbb9ce2568235603 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[228], NULL, 1, 0, 0);
    codeobj_61de883c3983d8da2b56205e0b12ede2 = MAKE_CODEOBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[229], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$function__2_get_callable_name_desc(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION___main__$$$function__10_DrawServerWindow();


static PyObject *MAKE_FUNCTION___main__$$$function__11_DrawListWindow();


static PyObject *MAKE_FUNCTION___main__$$$function__1_discordGet(PyObject *defaults);


static PyObject *MAKE_FUNCTION___main__$$$function__2_SendMessage();


static PyObject *MAKE_FUNCTION___main__$$$function__3_fillText();


static PyObject *MAKE_FUNCTION___main__$$$function__4_listServers();


static PyObject *MAKE_FUNCTION___main__$$$function__5_listChannels();


static PyObject *MAKE_FUNCTION___main__$$$function__6_showMessages();


static PyObject *MAKE_FUNCTION___main__$$$function__7_DrawMessageBox(PyObject *defaults);


static PyObject *MAKE_FUNCTION___main__$$$function__8_kill();


static PyObject *MAKE_FUNCTION___main__$$$function__9_UpdateWindowSize();


// The module function definitions.
static PyObject *impl___main__$$$function__1_discordGet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_use_additional_headers = python_pars[1];
    PyObject *par_additional_headers = python_pars[2];
    struct Nuitka_FrameObject *frame_b7d3514cc9de902208dda97252f34fdd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b7d3514cc9de902208dda97252f34fdd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b7d3514cc9de902208dda97252f34fdd)) {
        Py_XDECREF(cache_frame_b7d3514cc9de902208dda97252f34fdd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7d3514cc9de902208dda97252f34fdd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7d3514cc9de902208dda97252f34fdd = MAKE_FUNCTION_FRAME(codeobj_b7d3514cc9de902208dda97252f34fdd, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b7d3514cc9de902208dda97252f34fdd->m_type_description == NULL);
    frame_b7d3514cc9de902208dda97252f34fdd = cache_frame_b7d3514cc9de902208dda97252f34fdd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b7d3514cc9de902208dda97252f34fdd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b7d3514cc9de902208dda97252f34fdd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_use_additional_headers);
        tmp_compexpr_left_1 = par_use_additional_headers;
        tmp_compexpr_right_1 = Py_True;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = mod_consts[2];
        CHECK_OBJECT(par_url);
        tmp_unicode_arg_1 = par_url;
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_additional_headers);
        tmp_dict_value_1 = par_additional_headers;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_b7d3514cc9de902208dda97252f34fdd->m_frame.f_lineno = 45;
        tmp_called_instance_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b7d3514cc9de902208dda97252f34fdd->m_frame.f_lineno = 45;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[2];
        CHECK_OBJECT(par_url);
        tmp_unicode_arg_2 = par_url;
        tmp_right_name_2 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[3];
        tmp_dict_key_3 = mod_consts[5];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_2);

            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_b7d3514cc9de902208dda97252f34fdd->m_frame.f_lineno = 47;
        tmp_called_instance_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b7d3514cc9de902208dda97252f34fdd->m_frame.f_lineno = 47;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[4]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7d3514cc9de902208dda97252f34fdd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7d3514cc9de902208dda97252f34fdd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7d3514cc9de902208dda97252f34fdd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7d3514cc9de902208dda97252f34fdd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7d3514cc9de902208dda97252f34fdd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7d3514cc9de902208dda97252f34fdd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7d3514cc9de902208dda97252f34fdd,
        type_description_1,
        par_url,
        par_use_additional_headers,
        par_additional_headers
    );


    // Release cached frame if used for exception.
    if (frame_b7d3514cc9de902208dda97252f34fdd == cache_frame_b7d3514cc9de902208dda97252f34fdd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b7d3514cc9de902208dda97252f34fdd);
        cache_frame_b7d3514cc9de902208dda97252f34fdd = NULL;
    }

    assertFrameObject(frame_b7d3514cc9de902208dda97252f34fdd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    par_url = NULL;
    CHECK_OBJECT(par_use_additional_headers);
    Py_DECREF(par_use_additional_headers);
    par_use_additional_headers = NULL;
    Py_XDECREF(par_additional_headers);
    par_additional_headers = NULL;
    goto function_return_exit;
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

    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    par_url = NULL;
    CHECK_OBJECT(par_use_additional_headers);
    Py_DECREF(par_use_additional_headers);
    par_use_additional_headers = NULL;
    Py_XDECREF(par_additional_headers);
    par_additional_headers = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__2_SendMessage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_channel_id = python_pars[0];
    PyObject *par_message_contents = python_pars[1];
    struct Nuitka_FrameObject *frame_2c7ab8571aa8461211c1c21473895ebb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2c7ab8571aa8461211c1c21473895ebb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2c7ab8571aa8461211c1c21473895ebb)) {
        Py_XDECREF(cache_frame_2c7ab8571aa8461211c1c21473895ebb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c7ab8571aa8461211c1c21473895ebb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c7ab8571aa8461211c1c21473895ebb = MAKE_FUNCTION_FRAME(codeobj_2c7ab8571aa8461211c1c21473895ebb, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2c7ab8571aa8461211c1c21473895ebb->m_type_description == NULL);
    frame_2c7ab8571aa8461211c1c21473895ebb = cache_frame_2c7ab8571aa8461211c1c21473895ebb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2c7ab8571aa8461211c1c21473895ebb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2c7ab8571aa8461211c1c21473895ebb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[7]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[8];
        CHECK_OBJECT(par_channel_id);
        tmp_right_name_1 = par_channel_id;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[9];
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[10];
        tmp_dict_key_2 = mod_consts[11];
        CHECK_OBJECT(par_message_contents);
        tmp_dict_value_2 = par_message_contents;
        tmp_dict_value_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[3];
            tmp_dict_key_3 = mod_consts[5];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_2c7ab8571aa8461211c1c21473895ebb->m_frame.f_lineno = 50;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c7ab8571aa8461211c1c21473895ebb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c7ab8571aa8461211c1c21473895ebb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c7ab8571aa8461211c1c21473895ebb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c7ab8571aa8461211c1c21473895ebb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c7ab8571aa8461211c1c21473895ebb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c7ab8571aa8461211c1c21473895ebb,
        type_description_1,
        par_channel_id,
        par_message_contents
    );


    // Release cached frame if used for exception.
    if (frame_2c7ab8571aa8461211c1c21473895ebb == cache_frame_2c7ab8571aa8461211c1c21473895ebb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2c7ab8571aa8461211c1c21473895ebb);
        cache_frame_2c7ab8571aa8461211c1c21473895ebb = NULL;
    }

    assertFrameObject(frame_2c7ab8571aa8461211c1c21473895ebb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_channel_id);
    par_channel_id = NULL;
    Py_XDECREF(par_message_contents);
    par_message_contents = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_channel_id);
    par_channel_id = NULL;
    Py_XDECREF(par_message_contents);
    par_message_contents = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__3_fillText(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_fill_len = python_pars[1];
    struct Nuitka_FrameObject *frame_703f804de47832601eb96d65657b1480;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_703f804de47832601eb96d65657b1480 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_703f804de47832601eb96d65657b1480)) {
        Py_XDECREF(cache_frame_703f804de47832601eb96d65657b1480);

#if _DEBUG_REFCOUNTS
        if (cache_frame_703f804de47832601eb96d65657b1480 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_703f804de47832601eb96d65657b1480 = MAKE_FUNCTION_FRAME(codeobj_703f804de47832601eb96d65657b1480, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_703f804de47832601eb96d65657b1480->m_type_description == NULL);
    frame_703f804de47832601eb96d65657b1480 = cache_frame_703f804de47832601eb96d65657b1480;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_703f804de47832601eb96d65657b1480);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_703f804de47832601eb96d65657b1480) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_text);
        tmp_unicode_arg_1 = par_text;
        tmp_left_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[12];
        CHECK_OBJECT(par_fill_len);
        tmp_left_name_3 = par_fill_len;
        CHECK_OBJECT(par_text);
        tmp_len_arg_1 = par_text;
        tmp_right_name_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_2 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_703f804de47832601eb96d65657b1480);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_703f804de47832601eb96d65657b1480);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_703f804de47832601eb96d65657b1480);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_703f804de47832601eb96d65657b1480, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_703f804de47832601eb96d65657b1480->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_703f804de47832601eb96d65657b1480, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_703f804de47832601eb96d65657b1480,
        type_description_1,
        par_text,
        par_fill_len
    );


    // Release cached frame if used for exception.
    if (frame_703f804de47832601eb96d65657b1480 == cache_frame_703f804de47832601eb96d65657b1480) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_703f804de47832601eb96d65657b1480);
        cache_frame_703f804de47832601eb96d65657b1480 = NULL;
    }

    assertFrameObject(frame_703f804de47832601eb96d65657b1480);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_fill_len);
    par_fill_len = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_fill_len);
    par_fill_len = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__4_listServers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lI = python_pars[0];
    PyObject *var_i = NULL;
    PyObject *var_guild = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8f5e4db9774ce80fbbb9ce2568235603;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_8f5e4db9774ce80fbbb9ce2568235603 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8f5e4db9774ce80fbbb9ce2568235603)) {
        Py_XDECREF(cache_frame_8f5e4db9774ce80fbbb9ce2568235603);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f5e4db9774ce80fbbb9ce2568235603 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f5e4db9774ce80fbbb9ce2568235603 = MAKE_FUNCTION_FRAME(codeobj_8f5e4db9774ce80fbbb9ce2568235603, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8f5e4db9774ce80fbbb9ce2568235603->m_type_description == NULL);
    frame_8f5e4db9774ce80fbbb9ce2568235603 = cache_frame_8f5e4db9774ce80fbbb9ce2568235603;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8f5e4db9774ce80fbbb9ce2568235603);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8f5e4db9774ce80fbbb9ce2568235603) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 57;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, &PyTuple_GET_ITEM(mod_consts[17], 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 57;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[21];
        assert(var_i == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_i = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_i);
        tmp_compexpr_left_1 = var_i;
        CHECK_OBJECT(par_lI);
        tmp_compexpr_right_1 = par_lI;
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[15]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[22];
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 60;
        tmp_left_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[24]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[15]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = mod_consts[22];
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 62;
        tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_i);
        tmp_left_name_2 = var_i;
        tmp_right_name_2 = mod_consts[26];
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_name_2, tmp_right_name_2);
        assert(!(tmp_assign_source_2 == NULL));
        {
            PyObject *old = var_i;
            assert(old != NULL);
            var_i = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[28];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 64;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_guild;
            var_guild = tmp_assign_source_5;
            Py_INCREF(var_guild);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_2 = var_i;
        if (par_lI == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_2 = par_lI;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_expression_name_8;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[15]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_guild);
        tmp_expression_name_7 = var_guild;
        tmp_subscript_name_2 = mod_consts[31];
        tmp_left_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_2);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = mod_consts[32];
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 66;
        tmp_left_name_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[24]);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_instance_6;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[15]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_guild);
        tmp_expression_name_10 = var_guild;
        tmp_subscript_name_3 = mod_consts[31];
        tmp_left_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_3);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_right_name_5 = mod_consts[32];
        tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_9);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 68;
        tmp_args_element_name_10 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_6,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_9);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_left_name_6 = var_i;
        tmp_right_name_6 = mod_consts[26];
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_name_6, tmp_right_name_6);
        assert(!(tmp_assign_source_6 == NULL));
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 64;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f5e4db9774ce80fbbb9ce2568235603);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f5e4db9774ce80fbbb9ce2568235603);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f5e4db9774ce80fbbb9ce2568235603, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f5e4db9774ce80fbbb9ce2568235603->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f5e4db9774ce80fbbb9ce2568235603, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f5e4db9774ce80fbbb9ce2568235603,
        type_description_1,
        par_lI,
        var_i,
        var_guild
    );


    // Release cached frame if used for exception.
    if (frame_8f5e4db9774ce80fbbb9ce2568235603 == cache_frame_8f5e4db9774ce80fbbb9ce2568235603) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8f5e4db9774ce80fbbb9ce2568235603);
        cache_frame_8f5e4db9774ce80fbbb9ce2568235603 = NULL;
    }

    assertFrameObject(frame_8f5e4db9774ce80fbbb9ce2568235603);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_lI);
    par_lI = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_guild);
    var_guild = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_lI);
    par_lI = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_guild);
    var_guild = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__5_listChannels(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lI = python_pars[0];
    PyObject *var_channels = NULL;
    PyObject *var_line = NULL;
    PyObject *var_channel = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_da2f9074e9c0cf3c4277fde291d11008;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_da2f9074e9c0cf3c4277fde291d11008 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_da2f9074e9c0cf3c4277fde291d11008)) {
        Py_XDECREF(cache_frame_da2f9074e9c0cf3c4277fde291d11008);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da2f9074e9c0cf3c4277fde291d11008 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da2f9074e9c0cf3c4277fde291d11008 = MAKE_FUNCTION_FRAME(codeobj_da2f9074e9c0cf3c4277fde291d11008, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_da2f9074e9c0cf3c4277fde291d11008->m_type_description == NULL);
    frame_da2f9074e9c0cf3c4277fde291d11008 = cache_frame_da2f9074e9c0cf3c4277fde291d11008;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_da2f9074e9c0cf3c4277fde291d11008);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_da2f9074e9c0cf3c4277fde291d11008) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[35];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[37];
        tmp_right_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[38];
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_da2f9074e9c0cf3c4277fde291d11008->m_frame.f_lineno = 73;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_channels == NULL);
        var_channels = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[26];
        assert(var_line == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_line = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_channels);
        tmp_iter_arg_1 = var_channels;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 76;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_channel;
            var_channel = tmp_assign_source_6;
            Py_INCREF(var_channel);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_channel);
        tmp_expression_name_2 = var_channel;
        tmp_subscript_name_2 = mod_consts[40];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = mod_consts[21];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_2 = var_line;
        if (par_lI == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_2 = par_lI;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_3;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[15]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_line == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = var_line;
        tmp_args_element_name_3 = mod_consts[43];
        CHECK_OBJECT(var_channel);
        tmp_expression_name_5 = var_channel;
        tmp_subscript_name_3 = mod_consts[31];
        tmp_expression_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_3);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_4 = mod_consts[44];
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_da2f9074e9c0cf3c4277fde291d11008->m_frame.f_lineno = 79;
        tmp_left_name_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[24]);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_5 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_da2f9074e9c0cf3c4277fde291d11008->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(var_channel);
        tmp_assign_source_7 = var_channel;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_7);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[15]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_line == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_6 = var_line;
        tmp_args_element_name_7 = mod_consts[43];
        CHECK_OBJECT(var_channel);
        tmp_expression_name_9 = var_channel;
        tmp_subscript_name_5 = mod_consts[31];
        tmp_expression_name_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_5);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 82;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_6 = mod_consts[44];
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_6);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 82;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_da2f9074e9c0cf3c4277fde291d11008->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_left_name_4 = var_line;
        tmp_right_name_4 = mod_consts[26];
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_4, tmp_right_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da2f9074e9c0cf3c4277fde291d11008);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da2f9074e9c0cf3c4277fde291d11008);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da2f9074e9c0cf3c4277fde291d11008, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da2f9074e9c0cf3c4277fde291d11008->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da2f9074e9c0cf3c4277fde291d11008, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da2f9074e9c0cf3c4277fde291d11008,
        type_description_1,
        par_lI,
        var_channels,
        var_line,
        var_channel
    );


    // Release cached frame if used for exception.
    if (frame_da2f9074e9c0cf3c4277fde291d11008 == cache_frame_da2f9074e9c0cf3c4277fde291d11008) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_da2f9074e9c0cf3c4277fde291d11008);
        cache_frame_da2f9074e9c0cf3c4277fde291d11008 = NULL;
    }

    assertFrameObject(frame_da2f9074e9c0cf3c4277fde291d11008);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_lI);
    par_lI = NULL;
    Py_XDECREF(var_channels);
    var_channels = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_channel);
    var_channel = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_lI);
    par_lI = NULL;
    Py_XDECREF(var_channels);
    var_channels = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_channel);
    var_channel = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__6_showMessages(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_channel_id = python_pars[0];
    PyObject *var_channel_messages = NULL;
    PyObject *var_message = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_61de883c3983d8da2b56205e0b12ede2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_61de883c3983d8da2b56205e0b12ede2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_61de883c3983d8da2b56205e0b12ede2)) {
        Py_XDECREF(cache_frame_61de883c3983d8da2b56205e0b12ede2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61de883c3983d8da2b56205e0b12ede2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61de883c3983d8da2b56205e0b12ede2 = MAKE_FUNCTION_FRAME(codeobj_61de883c3983d8da2b56205e0b12ede2, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_61de883c3983d8da2b56205e0b12ede2->m_type_description == NULL);
    frame_61de883c3983d8da2b56205e0b12ede2 = cache_frame_61de883c3983d8da2b56205e0b12ede2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_61de883c3983d8da2b56205e0b12ede2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_61de883c3983d8da2b56205e0b12ede2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_right_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[45];
        CHECK_OBJECT(par_channel_id);
        tmp_unicode_arg_1 = par_channel_id;
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[9];
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_61de883c3983d8da2b56205e0b12ede2->m_frame.f_lineno = 86;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_channel_messages == NULL);
        var_channel_messages = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_channel_messages);
        tmp_iter_arg_1 = var_channel_messages;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 87;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_4;
            Py_INCREF(var_message);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_5;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_message);
        tmp_expression_name_3 = var_message;
        tmp_subscript_name_1 = mod_consts[46];
        tmp_expression_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_2 = mod_consts[47];
        tmp_left_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = mod_consts[48];
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_3);
        Py_DECREF(tmp_left_name_5);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_message);
        tmp_expression_name_4 = var_message;
        tmp_subscript_name_3 = mod_consts[11];
        tmp_right_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_right_name_5 = mod_consts[32];
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_5);
        Py_DECREF(tmp_left_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_61de883c3983d8da2b56205e0b12ede2->m_frame.f_lineno = 88;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_61de883c3983d8da2b56205e0b12ede2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_61de883c3983d8da2b56205e0b12ede2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61de883c3983d8da2b56205e0b12ede2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61de883c3983d8da2b56205e0b12ede2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61de883c3983d8da2b56205e0b12ede2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61de883c3983d8da2b56205e0b12ede2,
        type_description_1,
        par_channel_id,
        var_channel_messages,
        var_message
    );


    // Release cached frame if used for exception.
    if (frame_61de883c3983d8da2b56205e0b12ede2 == cache_frame_61de883c3983d8da2b56205e0b12ede2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_61de883c3983d8da2b56205e0b12ede2);
        cache_frame_61de883c3983d8da2b56205e0b12ede2 = NULL;
    }

    assertFrameObject(frame_61de883c3983d8da2b56205e0b12ede2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_channel_id);
    Py_DECREF(par_channel_id);
    par_channel_id = NULL;
    Py_XDECREF(var_channel_messages);
    var_channel_messages = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_channel_id);
    Py_DECREF(par_channel_id);
    par_channel_id = NULL;
    Py_XDECREF(var_channel_messages);
    var_channel_messages = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__7_DrawMessageBox(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_clear = python_pars[0];
    struct Nuitka_FrameObject *frame_1298e3f5f7d219fbe4a216b999f83092;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1298e3f5f7d219fbe4a216b999f83092 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1298e3f5f7d219fbe4a216b999f83092)) {
        Py_XDECREF(cache_frame_1298e3f5f7d219fbe4a216b999f83092);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1298e3f5f7d219fbe4a216b999f83092 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1298e3f5f7d219fbe4a216b999f83092 = MAKE_FUNCTION_FRAME(codeobj_1298e3f5f7d219fbe4a216b999f83092, module___main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1298e3f5f7d219fbe4a216b999f83092->m_type_description == NULL);
    frame_1298e3f5f7d219fbe4a216b999f83092 = cache_frame_1298e3f5f7d219fbe4a216b999f83092;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1298e3f5f7d219fbe4a216b999f83092);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1298e3f5f7d219fbe4a216b999f83092) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_clear);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_clear);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1298e3f5f7d219fbe4a216b999f83092->m_frame.f_lineno = 92;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[50]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[12];
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1298e3f5f7d219fbe4a216b999f83092->m_frame.f_lineno = 93;
        tmp_left_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[51]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1298e3f5f7d219fbe4a216b999f83092->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1298e3f5f7d219fbe4a216b999f83092->m_frame.f_lineno = 94;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[52]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_4;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[15]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[21];
        tmp_args_element_name_4 = mod_consts[43];
        tmp_args_element_name_5 = mod_consts[53];
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1298e3f5f7d219fbe4a216b999f83092->m_frame.f_lineno = 95;
        tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1298e3f5f7d219fbe4a216b999f83092->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1298e3f5f7d219fbe4a216b999f83092->m_frame.f_lineno = 96;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[55]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1298e3f5f7d219fbe4a216b999f83092);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1298e3f5f7d219fbe4a216b999f83092);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1298e3f5f7d219fbe4a216b999f83092, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1298e3f5f7d219fbe4a216b999f83092->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1298e3f5f7d219fbe4a216b999f83092, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1298e3f5f7d219fbe4a216b999f83092,
        type_description_1,
        par_clear
    );


    // Release cached frame if used for exception.
    if (frame_1298e3f5f7d219fbe4a216b999f83092 == cache_frame_1298e3f5f7d219fbe4a216b999f83092) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1298e3f5f7d219fbe4a216b999f83092);
        cache_frame_1298e3f5f7d219fbe4a216b999f83092 = NULL;
    }

    assertFrameObject(frame_1298e3f5f7d219fbe4a216b999f83092);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_clear);
    Py_DECREF(par_clear);
    par_clear = NULL;
    goto function_return_exit;
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

    CHECK_OBJECT(par_clear);
    Py_DECREF(par_clear);
    par_clear = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__8_kill(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_33aca8c0279e3fc37affe1e632bb8bc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_33aca8c0279e3fc37affe1e632bb8bc2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_33aca8c0279e3fc37affe1e632bb8bc2)) {
        Py_XDECREF(cache_frame_33aca8c0279e3fc37affe1e632bb8bc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_33aca8c0279e3fc37affe1e632bb8bc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_33aca8c0279e3fc37affe1e632bb8bc2 = MAKE_FUNCTION_FRAME(codeobj_33aca8c0279e3fc37affe1e632bb8bc2, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_33aca8c0279e3fc37affe1e632bb8bc2->m_type_description == NULL);
    frame_33aca8c0279e3fc37affe1e632bb8bc2 = cache_frame_33aca8c0279e3fc37affe1e632bb8bc2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_33aca8c0279e3fc37affe1e632bb8bc2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_33aca8c0279e3fc37affe1e632bb8bc2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_33aca8c0279e3fc37affe1e632bb8bc2->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[56]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_33aca8c0279e3fc37affe1e632bb8bc2->m_frame.f_lineno = 100;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[58],
            &PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_33aca8c0279e3fc37affe1e632bb8bc2->m_frame.f_lineno = 101;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[60]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_33aca8c0279e3fc37affe1e632bb8bc2->m_frame.f_lineno = 102;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[61]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_33aca8c0279e3fc37affe1e632bb8bc2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_33aca8c0279e3fc37affe1e632bb8bc2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_33aca8c0279e3fc37affe1e632bb8bc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33aca8c0279e3fc37affe1e632bb8bc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33aca8c0279e3fc37affe1e632bb8bc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_33aca8c0279e3fc37affe1e632bb8bc2,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_33aca8c0279e3fc37affe1e632bb8bc2 == cache_frame_33aca8c0279e3fc37affe1e632bb8bc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_33aca8c0279e3fc37affe1e632bb8bc2);
        cache_frame_33aca8c0279e3fc37affe1e632bb8bc2 = NULL;
    }

    assertFrameObject(frame_33aca8c0279e3fc37affe1e632bb8bc2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__9_UpdateWindowSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1fba8baf89a8178edd8a8b2f1673967c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1fba8baf89a8178edd8a8b2f1673967c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1fba8baf89a8178edd8a8b2f1673967c)) {
        Py_XDECREF(cache_frame_1fba8baf89a8178edd8a8b2f1673967c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fba8baf89a8178edd8a8b2f1673967c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fba8baf89a8178edd8a8b2f1673967c = MAKE_FUNCTION_FRAME(codeobj_1fba8baf89a8178edd8a8b2f1673967c, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1fba8baf89a8178edd8a8b2f1673967c->m_type_description == NULL);
    frame_1fba8baf89a8178edd8a8b2f1673967c = cache_frame_1fba8baf89a8178edd8a8b2f1673967c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1fba8baf89a8178edd8a8b2f1673967c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1fba8baf89a8178edd8a8b2f1673967c) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_1;
        }
        frame_1fba8baf89a8178edd8a8b2f1673967c->m_frame.f_lineno = 107;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[62]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_1;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 107;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 107;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[63];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 107;
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fba8baf89a8178edd8a8b2f1673967c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fba8baf89a8178edd8a8b2f1673967c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1fba8baf89a8178edd8a8b2f1673967c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fba8baf89a8178edd8a8b2f1673967c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fba8baf89a8178edd8a8b2f1673967c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fba8baf89a8178edd8a8b2f1673967c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1fba8baf89a8178edd8a8b2f1673967c == cache_frame_1fba8baf89a8178edd8a8b2f1673967c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1fba8baf89a8178edd8a8b2f1673967c);
        cache_frame_1fba8baf89a8178edd8a8b2f1673967c = NULL;
    }

    assertFrameObject(frame_1fba8baf89a8178edd8a8b2f1673967c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_4);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_5);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__10_DrawServerWindow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ed13bd86e56a8e8e8a4e81a6221f6bd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8)) {
        Py_XDECREF(cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8 = MAKE_FUNCTION_FRAME(codeobj_ed13bd86e56a8e8e8a4e81a6221f6bd8, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_type_description == NULL);
    frame_ed13bd86e56a8e8e8a4e81a6221f6bd8 = cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed13bd86e56a8e8e8a4e81a6221f6bd8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed13bd86e56a8e8e8a4e81a6221f6bd8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 122;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_4;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = mod_consts[66];
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[67];
        tmp_expression_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[47];
        tmp_right_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[68];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[67];
        tmp_expression_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_3);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = mod_consts[69];
        tmp_right_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = mod_consts[70];
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_4);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 123;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 124;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 125;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[55]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[72]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_5 == NULL)) {
            tmp_left_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = mod_consts[43];
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_5, tmp_right_name_5);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[73];
        tmp_args_element_name_4 = mod_consts[43];
        tmp_args_element_name_5 = mod_consts[21];
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_1);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_right_name_6;
        PyObject *tmp_expression_name_8;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_expression_name_7 == NULL));
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[50]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = mod_consts[12];
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 128;
        tmp_left_name_6 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[51]);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 129;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[52]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_6;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[15]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = mod_consts[21];
        tmp_args_element_name_9 = mod_consts[43];
        tmp_args_element_name_10 = mod_consts[74];
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 130;
        tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_6,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_8;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 132;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[21]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_9;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 133;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[55]);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[72]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_7 == NULL)) {
            tmp_left_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = mod_consts[43];
        tmp_args_element_name_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_7);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = mod_consts[73];
        tmp_args_element_name_14 = mod_consts[43];
        tmp_left_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_8 == NULL)) {
            tmp_left_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_12);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = mod_consts[73];
        tmp_args_element_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_8, tmp_right_name_8);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_12);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_2);
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_9;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_expression_name_12;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_expression_name_11 == NULL));
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[50]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = mod_consts[12];
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 136;
        tmp_left_name_9 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_8,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_left_name_9);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[51]);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_left_name_9);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_17 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_left_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_11;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 137;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[52]);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_instance_10;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[15]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = mod_consts[21];
        tmp_args_element_name_19 = mod_consts[43];
        tmp_args_element_name_20 = mod_consts[77];
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 138;
        tmp_args_element_name_21 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_10,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_left_name_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_expression_name_15;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[15]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_22 = mod_consts[26];
        tmp_args_element_name_23 = mod_consts[43];
        tmp_args_element_name_24 = mod_consts[79];
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 139;
        tmp_left_name_10 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_11,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[24]);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_25 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_left_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_called_instance_12;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[15]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = mod_consts[43];
        tmp_args_element_name_27 = mod_consts[80];
        tmp_args_element_name_28 = mod_consts[81];
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 140;
        tmp_args_element_name_29 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_12,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_instance_13;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[15]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_30 = mod_consts[80];
        tmp_args_element_name_31 = mod_consts[80];
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = mod_consts[67];
        tmp_expression_name_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_5);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = mod_consts[47];
        tmp_left_name_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_6);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_right_name_11 = mod_consts[68];
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_12, tmp_right_name_11);
        Py_DECREF(tmp_left_name_12);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_7 = mod_consts[67];
        tmp_expression_name_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_7);
        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_8 = mod_consts[69];
        tmp_right_name_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_8);
        Py_DECREF(tmp_expression_name_20);
        if (tmp_right_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_11, tmp_right_name_12);
        Py_DECREF(tmp_left_name_11);
        Py_DECREF(tmp_right_name_12);
        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_32);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 141;
        tmp_args_element_name_33 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_13,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_32);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_32);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_left_name_13;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_expression_name_23;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[15]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_34 = mod_consts[82];
        tmp_args_element_name_35 = mod_consts[43];
        tmp_args_element_name_36 = mod_consts[83];
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 142;
        tmp_left_name_13 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_14,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[24]);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_37 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_left_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_called_instance_15;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[15]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_38 = mod_consts[84];
        tmp_args_element_name_39 = mod_consts[80];
        tmp_args_element_name_40 = mod_consts[85];
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 143;
        tmp_args_element_name_41 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_15,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_13, call_args);
        }

        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_41);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_called_instance_16;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[15]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_42 = mod_consts[84];
        tmp_args_element_name_43 = mod_consts[86];
        tmp_args_element_name_44 = mod_consts[87];
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 144;
        tmp_args_element_name_45 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_16,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_14, call_args);
        }

        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_45);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_called_instance_17;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[15]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_46 = mod_consts[86];
        tmp_args_element_name_47 = mod_consts[80];
        tmp_args_element_name_48 = mod_consts[85];
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 145;
        tmp_args_element_name_49 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_17,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_49);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_called_instance_18;
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[15]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_50 = mod_consts[86];
        tmp_args_element_name_51 = mod_consts[86];
        tmp_args_element_name_52 = mod_consts[88];
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 146;
        tmp_args_element_name_53 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_18,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_16, call_args);
        }

        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_53);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_21;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 147;
        tmp_call_result_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[55]);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[72]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_15 == NULL)) {
            tmp_left_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_14 == NULL)) {
            tmp_right_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_left_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_15, tmp_right_name_14);
        if (tmp_left_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_right_name_15 = mod_consts[43];
        tmp_args_element_name_54 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_14, tmp_right_name_15);
        Py_DECREF(tmp_left_name_14);
        if (tmp_args_element_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_16 == NULL)) {
            tmp_left_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_54);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_right_name_16 = mod_consts[90];
        tmp_args_element_name_55 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_16, tmp_right_name_16);
        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_54);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_56 = mod_consts[43];
        tmp_args_element_name_57 = mod_consts[73];
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_17, call_args);
        }

        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_54);
        Py_DECREF(tmp_args_element_name_55);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_4);
    }
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_left_name_17;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_right_name_17;
        PyObject *tmp_expression_name_30;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_expression_name_29 == NULL));
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[50]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_58 = mod_consts[12];
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 152;
        tmp_left_name_17 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_20,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_left_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_30 == NULL)) {
            tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_right_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[51]);
        if (tmp_right_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_59 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_17, tmp_right_name_17);
        Py_DECREF(tmp_left_name_17);
        Py_DECREF(tmp_right_name_17);
        if (tmp_args_element_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_name_58, tmp_args_element_name_59};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_18, call_args);
        }

        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_59);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_23;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 153;
        tmp_call_result_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[52]);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_18;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_19;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_called_instance_22;
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[15]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_60 = mod_consts[21];
        tmp_args_element_name_61 = mod_consts[43];
        tmp_left_name_19 = mod_consts[92];
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_9 = mod_consts[31];
        tmp_right_name_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_32, tmp_subscript_name_9);
        if (tmp_right_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_left_name_18 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_19, tmp_right_name_18);
        Py_DECREF(tmp_right_name_18);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_right_name_19 = mod_consts[93];
        tmp_args_element_name_62 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_18, tmp_right_name_19);
        Py_DECREF(tmp_left_name_18);
        if (tmp_args_element_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_args_element_name_62);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 154;
        tmp_args_element_name_63 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_22,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_args_element_name_62);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_name_60, tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_19, call_args);
        }

        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_62);
        Py_DECREF(tmp_args_element_name_63);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_25;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 155;
        tmp_call_result_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[55]);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        PyObject *tmp_args_element_name_67;
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[72]);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_64 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_name_64 == NULL)) {
            tmp_args_element_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_args_element_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_left_name_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_20 == NULL)) {
            tmp_left_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_right_name_20 = mod_consts[90];
        tmp_args_element_name_65 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_20, tmp_right_name_20);
        if (tmp_args_element_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_left_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_21 == NULL)) {
            tmp_left_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_65);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_right_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_21 == NULL)) {
            tmp_right_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_65);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_66 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_21, tmp_right_name_21);
        if (tmp_args_element_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_65);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_67 = mod_consts[73];
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66, tmp_args_element_name_67};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_20, call_args);
        }

        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_65);
        Py_DECREF(tmp_args_element_name_66);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_call_result_26;
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame.f_lineno = 158;
        tmp_call_result_26 = CALL_FUNCTION_NO_ARGS(tmp_called_name_21);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed13bd86e56a8e8e8a4e81a6221f6bd8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed13bd86e56a8e8e8a4e81a6221f6bd8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed13bd86e56a8e8e8a4e81a6221f6bd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed13bd86e56a8e8e8a4e81a6221f6bd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed13bd86e56a8e8e8a4e81a6221f6bd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed13bd86e56a8e8e8a4e81a6221f6bd8,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ed13bd86e56a8e8e8a4e81a6221f6bd8 == cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8);
        cache_frame_ed13bd86e56a8e8e8a4e81a6221f6bd8 = NULL;
    }

    assertFrameObject(frame_ed13bd86e56a8e8e8a4e81a6221f6bd8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_10);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__11_DrawListWindow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ff3f68dd84247dda63b4f5b71beacc4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff3f68dd84247dda63b4f5b71beacc4b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff3f68dd84247dda63b4f5b71beacc4b)) {
        Py_XDECREF(cache_frame_ff3f68dd84247dda63b4f5b71beacc4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff3f68dd84247dda63b4f5b71beacc4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff3f68dd84247dda63b4f5b71beacc4b = MAKE_FUNCTION_FRAME(codeobj_ff3f68dd84247dda63b4f5b71beacc4b, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ff3f68dd84247dda63b4f5b71beacc4b->m_type_description == NULL);
    frame_ff3f68dd84247dda63b4f5b71beacc4b = cache_frame_ff3f68dd84247dda63b4f5b71beacc4b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ff3f68dd84247dda63b4f5b71beacc4b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ff3f68dd84247dda63b4f5b71beacc4b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_ff3f68dd84247dda63b4f5b71beacc4b->m_frame.f_lineno = 172;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_abs_arg_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[72]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[101];
        tmp_args_element_name_2 = mod_consts[102];
        tmp_left_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_2 == NULL)) {
            tmp_left_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[43];
        tmp_abs_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_1);
        if (tmp_abs_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_int_arg_1 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[103];
        tmp_args_element_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_4 == NULL)) {
            tmp_left_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[43];
        tmp_abs_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_4, tmp_right_name_3);
        if (tmp_abs_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_int_arg_2 = BUILTIN_ABS(tmp_abs_arg_2);
        Py_DECREF(tmp_abs_arg_2);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = mod_consts[104];
        tmp_args_element_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_ff3f68dd84247dda63b4f5b71beacc4b->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_right_name_5;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_name_2 == NULL));
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[50]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = mod_consts[12];
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_ff3f68dd84247dda63b4f5b71beacc4b->m_frame.f_lineno = 174;
        tmp_left_name_5 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[24]);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_ff3f68dd84247dda63b4f5b71beacc4b->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ff3f68dd84247dda63b4f5b71beacc4b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ff3f68dd84247dda63b4f5b71beacc4b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff3f68dd84247dda63b4f5b71beacc4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff3f68dd84247dda63b4f5b71beacc4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff3f68dd84247dda63b4f5b71beacc4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff3f68dd84247dda63b4f5b71beacc4b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ff3f68dd84247dda63b4f5b71beacc4b == cache_frame_ff3f68dd84247dda63b4f5b71beacc4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ff3f68dd84247dda63b4f5b71beacc4b);
        cache_frame_ff3f68dd84247dda63b4f5b71beacc4b = NULL;
    }

    assertFrameObject(frame_ff3f68dd84247dda63b4f5b71beacc4b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_bases = python_pars[0];
    PyObject *tmp_base = NULL;
    PyObject *tmp_iter = NULL;
    PyObject *tmp_list = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_bases);
        tmp_iter_arg_1 = par_bases;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_iter == NULL);
        tmp_iter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_list == NULL);
        tmp_list = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_iter);
        tmp_next_source_1 = tmp_iter;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_base;
            tmp_base = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_issubclass_cls_1;
        CHECK_OBJECT(tmp_base);
        tmp_issubclass_cls_1 = tmp_base;
        tmp_res = PyType_Check(tmp_issubclass_cls_1);
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_list);
        tmp_append_list_1 = tmp_list;
        CHECK_OBJECT(tmp_base);
        tmp_append_value_1 = tmp_base;
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_base);
        tmp_expression_name_1 = tmp_base;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[105]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_name_1;
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_list_extend_result_1;
        CHECK_OBJECT(tmp_list);
        tmp_list_arg_name_1 = tmp_list;
        CHECK_OBJECT(tmp_base);
        tmp_expression_name_2 = tmp_base;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[105]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_bases == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_args_element_name_1 = par_bases;
        tmp_value_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(PyList_Check(tmp_list_arg_name_1));
        tmp_result = LIST_EXTEND(tmp_list_arg_name_1, tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_list_extend_result_1 = Py_None;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_append_list_2;
        PyObject *tmp_append_value_2;
        CHECK_OBJECT(tmp_list);
        tmp_append_list_2 = tmp_list;
        CHECK_OBJECT(tmp_base);
        tmp_append_value_2 = tmp_base;
        assert(PyList_Check(tmp_append_list_2));
        tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(tmp_list);
        tmp_tuple_arg_1 = tmp_list;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(tmp_list);
    Py_DECREF(tmp_list);
    tmp_list = NULL;
    Py_XDECREF(tmp_iter);
    tmp_iter = NULL;
    Py_XDECREF(tmp_base);
    tmp_base = NULL;
    goto function_return_exit;
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

    Py_XDECREF(tmp_list);
    tmp_list = NULL;
    Py_XDECREF(tmp_iter);
    tmp_iter = NULL;
    Py_XDECREF(tmp_base);
    tmp_base = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bases);
    Py_DECREF(par_bases);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bases);
    Py_DECREF(par_bases);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_dict = python_pars[2];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[109];
        if (par_called == NULL) {

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[111]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_3 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_2 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_5 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_5;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_args;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kwargs_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$function__2_get_callable_name_desc(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_called);
        tmp_isinstance_inst_1 = par_called;
        tmp_isinstance_cls_1 = mod_consts[115];
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_called);
        tmp_expression_name_1 = par_called;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[111]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = mod_consts[116];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_called);
        tmp_type_arg_1 = par_called;
        tmp_expression_name_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_name_2 == NULL));
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[111]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_2 = mod_consts[117];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }
    branch_end_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_keywords_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *par_star_arg_dict = python_pars[2];
    PyObject *tmp_dict_1__dict = NULL;
    PyObject *tmp_dict_1__iter = NULL;
    PyObject *tmp_dict_1__key_xxx = NULL;
    PyObject *tmp_dict_1__keys = NULL;
    PyObject *tmp_dict_2__item = NULL;
    PyObject *tmp_dict_2__iter = NULL;
    PyObject *tmp_dict_2__key = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_dict_1__keys == NULL);
        tmp_dict_1__keys = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[109];
        if (par_called == NULL) {

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[111]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_dict_1__keys);
        tmp_iter_arg_1 = tmp_dict_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_1__iter == NULL);
        tmp_dict_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_dict_1__dict == NULL);
        tmp_dict_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_dict_1__iter);
        tmp_next_source_1 = tmp_dict_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_1__key_xxx;
            tmp_dict_1__key_xxx = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_compexpr_left_3 = tmp_dict_1__key_xxx;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_tuple_element_2 = tmp_dict_1__key_xxx;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_subscript_name_1 = tmp_dict_1__key_xxx;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_1 = par_kw;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_seq_1;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dict_seq_1 = par_kw;
        tmp_assign_source_5 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = par_kw;
            par_kw = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_called_instance_2 = par_star_arg_dict;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[119]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_2__iter == NULL);
        tmp_dict_2__iter = tmp_assign_source_6;
    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dict_2__iter);
        tmp_next_source_2 = tmp_dict_2__iter;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_2__item;
            tmp_dict_2__item = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_3 = tmp_dict_2__item;
        tmp_subscript_name_2 = mod_consts[21];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 0);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = tmp_dict_2__key;
            tmp_dict_2__key = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_compexpr_left_4 = tmp_dict_2__key;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_tuple_element_3 = tmp_dict_2__key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_4 = tmp_dict_2__item;
        tmp_subscript_name_3 = mod_consts[26];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_3, 1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_2 = par_kw;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_ass_subscript_2 = tmp_dict_2__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_no_4:;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_kwargs_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kwargs_name_1 = par_kw;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *par_star_arg_dict = python_pars[3];
    PyObject *tmp_dict_1__dict = NULL;
    PyObject *tmp_dict_1__iter = NULL;
    PyObject *tmp_dict_1__key_xxx = NULL;
    PyObject *tmp_dict_1__keys = NULL;
    PyObject *tmp_dict_2__item = NULL;
    PyObject *tmp_dict_2__iter = NULL;
    PyObject *tmp_dict_2__key = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_dict_1__keys == NULL);
        tmp_dict_1__keys = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[109];
        if (par_called == NULL) {

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[111]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_dict_1__keys);
        tmp_iter_arg_1 = tmp_dict_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_1__iter == NULL);
        tmp_dict_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_dict_1__dict == NULL);
        tmp_dict_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_dict_1__iter);
        tmp_next_source_1 = tmp_dict_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_1__key_xxx;
            tmp_dict_1__key_xxx = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_compexpr_left_3 = tmp_dict_1__key_xxx;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_tuple_element_2 = tmp_dict_1__key_xxx;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_subscript_name_1 = tmp_dict_1__key_xxx;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_1 = par_kw;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_seq_1;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dict_seq_1 = par_kw;
        tmp_assign_source_5 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = par_kw;
            par_kw = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_called_instance_2 = par_star_arg_dict;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[119]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_2__iter == NULL);
        tmp_dict_2__iter = tmp_assign_source_6;
    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dict_2__iter);
        tmp_next_source_2 = tmp_dict_2__iter;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_2__item;
            tmp_dict_2__item = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_3 = tmp_dict_2__item;
        tmp_subscript_name_2 = mod_consts[21];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 0);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = tmp_dict_2__key;
            tmp_dict_2__key = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_compexpr_left_4 = tmp_dict_2__key;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_tuple_element_3 = tmp_dict_2__key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_4 = tmp_dict_2__item;
        tmp_subscript_name_3 = mod_consts[26];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_3, 1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_2 = par_kw;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_ass_subscript_2 = tmp_dict_2__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_no_4:;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_args;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kwargs_name_1 = par_kw;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_list = python_pars[1];
    PyObject *par_star_arg_dict = python_pars[2];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[109];
        if (par_called == NULL) {

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[111]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_3 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_2 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_5 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_5;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_type_arg_3;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_type_arg_3 = par_star_arg_list;
        tmp_compexpr_left_4 = BUILTIN_TYPE1(tmp_type_arg_3);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_compexpr_right_4 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_4 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? true : false;
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_3 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[121]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_4 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[122]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_arg_1;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_6 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            par_star_arg_list = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[123];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
            if (par_star_arg_list == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);



                goto tuple_build_exception_2;
            }

            tmp_type_arg_4 = par_star_arg_list;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_4);
            if (tmp_expression_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[111]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_3);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_5:;
    branch_no_4:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_star_arg_list;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kwargs_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_dict = python_pars[1];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[109];
        if (par_called == NULL) {

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[111]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_3 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_2 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_5 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_5;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_kwargs_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kwargs_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_list = python_pars[1];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[121]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[122]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            par_star_arg_list = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[123];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_list == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[111]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_star_arg_list;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_1, tmp_args_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_list = python_pars[2];
    PyObject *par_star_arg_dict = python_pars[3];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[121]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[122]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            par_star_arg_list = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[123];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_list == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[111]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_3;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_type_arg_3 = par_star_arg_dict;
        tmp_compexpr_left_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_compexpr_right_2 = (PyObject *)&PyDict_Type;
        tmp_condition_result_3 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = exception_keeper_type_1;
        tmp_compexpr_right_3 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[109];
        if (par_called == NULL) {

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_2;
            }

            tmp_type_arg_4 = par_star_arg_dict;
            tmp_expression_name_4 = BUILTIN_TYPE1(tmp_type_arg_4);
            if (tmp_expression_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[111]);
            Py_DECREF(tmp_expression_name_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_4;
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_4:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_4 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[113];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_3 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_5 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_6 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_6;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_kwargs_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_left_name_4 = par_args;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_right_name_4 = par_star_arg_list;
        tmp_args_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_args_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (par_star_arg_dict == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kwargs_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_pos_star_list(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_list = python_pars[2];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[121]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[122]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            par_star_arg_list = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[123];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function__2_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_list == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[111]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_left_name_2 = par_args;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_right_name_2 = par_star_arg_list;
        tmp_args_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_1, tmp_args_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function__10_DrawServerWindow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__10_DrawServerWindow,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed13bd86e56a8e8e8a4e81a6221f6bd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__11_DrawListWindow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__11_DrawListWindow,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff3f68dd84247dda63b4f5b71beacc4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__1_discordGet(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__1_discordGet,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b7d3514cc9de902208dda97252f34fdd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__2_SendMessage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__2_SendMessage,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c7ab8571aa8461211c1c21473895ebb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__3_fillText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__3_fillText,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_703f804de47832601eb96d65657b1480,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__4_listServers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__4_listServers,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f5e4db9774ce80fbbb9ce2568235603,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__5_listChannels() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__5_listChannels,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da2f9074e9c0cf3c4277fde291d11008,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__6_showMessages() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__6_showMessages,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61de883c3983d8da2b56205e0b12ede2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__7_DrawMessageBox(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__7_DrawMessageBox,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1298e3f5f7d219fbe4a216b999f83092,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__8_kill() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__8_kill,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_33aca8c0279e3fc37affe1e632bb8bc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__9_UpdateWindowSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__9_UpdateWindowSize,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1fba8baf89a8178edd8a8b2f1673967c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
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

function_impl_code functable___main__[] = {
    impl___main__$$$function__1_discordGet,
    impl___main__$$$function__2_SendMessage,
    impl___main__$$$function__3_fillText,
    impl___main__$$$function__4_listServers,
    impl___main__$$$function__5_listChannels,
    impl___main__$$$function__6_showMessages,
    impl___main__$$$function__7_DrawMessageBox,
    impl___main__$$$function__8_kill,
    impl___main__$$$function__9_UpdateWindowSize,
    impl___main__$$$function__10_DrawServerWindow,
    impl___main__$$$function__11_DrawListWindow,
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

    function_impl_code *current = functable___main__;
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

    if (offset > sizeof(functable___main__) || offset < 0) {
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
        functable___main__[offset],
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
        module___main__,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "__main__";

// Internal entry point for module code.
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module___main__ = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Skipping module init, already done.\n");
#endif

        return module___main__;
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
    PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in init__main__\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict___main__ = MODULE_DICT(module___main__);

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
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_6a4dbdadaf881348a44f3c2308feb9d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module code.
    // Frame without reuse.
    frame_6a4dbdadaf881348a44f3c2308feb9d6 = MAKE_MODULE_FRAME(codeobj_6a4dbdadaf881348a44f3c2308feb9d6, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6a4dbdadaf881348a44f3c2308feb9d6);
    assert(Py_REFCNT(frame_6a4dbdadaf881348a44f3c2308feb9d6) == 2);

    // Framed code:
    {
        PyObject *tmp_imported_value_1;
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_HARD_SITE();
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[0];
        tmp_globals_arg_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[21];
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[128];
        tmp_globals_arg_name_2 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[21];
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[18];
        tmp_globals_arg_name_3 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[21];
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[4];
        tmp_globals_arg_name_4 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[21];
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_right_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        assert(!(tmp_expression_name_1 == NULL));
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[130]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 18;
        tmp_left_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[131],
            &PyTuple_GET_ITEM(mod_consts[132], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[133];
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_10);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[130]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[135]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 20;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[136]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 21;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[130]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[135]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_left_name_2 == NULL)) {
            tmp_left_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[137];
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 23;
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_False;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_open_mode_1;
        tmp_left_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_left_name_3 == NULL)) {
            tmp_left_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        tmp_right_name_3 = mod_consts[137];
        tmp_open_filename_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_3);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        tmp_open_mode_1 = mod_consts[138];
        tmp_assign_source_11 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_7 = tmp_with_1__source;
        tmp_called_name_4 = LOOKUP_SPECIAL(tmp_expression_name_7, mod_consts[139]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 24;
        tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_8 = tmp_with_1__source;
        tmp_assign_source_13 = LOOKUP_SPECIAL(tmp_expression_name_8, mod_consts[140]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_assign_source_14;
        tmp_assign_source_14 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_15 = tmp_with_1__enter;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_Copy(mod_consts[142]);
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_16);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[144]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_args_element_name_4 == NULL)) {
            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_args_element_name_5 == NULL)) {
            tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 26;

            goto try_except_handler_3;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_6 = tmp_with_1__exit;
        tmp_args_element_name_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_8 = EXC_TRACEBACK(PyThreadState_GET());
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 26;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame) frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 24;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame) frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_7 = tmp_with_1__exit;
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 26;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, &PyTuple_GET_ITEM(mod_consts[145], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 26;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_8 = tmp_with_1__exit;
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 26;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, &PyTuple_GET_ITEM(mod_consts[145], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_open_mode_2;
        tmp_left_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_left_name_4 == NULL)) {
            tmp_left_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_right_name_4 = mod_consts[137];
        tmp_open_filename_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_4);
        if (tmp_open_filename_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_open_mode_2 = mod_consts[146];
        tmp_assign_source_18 = BUILTIN_OPEN(tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_10 = tmp_with_2__source;
        tmp_called_name_9 = LOOKUP_SPECIAL(tmp_expression_name_10, mod_consts[139]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 28;
        tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        Py_DECREF(tmp_called_name_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_11 = tmp_with_2__source;
        tmp_assign_source_20 = LOOKUP_SPECIAL(tmp_expression_name_11, mod_consts[140]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_assign_source_21;
        tmp_assign_source_21 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_22 = tmp_with_2__enter;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_22);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_element_name_9;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[13]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_args_element_name_9 == NULL)) {
            tmp_args_element_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 29;

            goto try_except_handler_7;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 29;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_10);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_23);
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_1;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        assert(!(tmp_expression_name_13 == NULL));
        tmp_subscript_name_1 = mod_consts[6];
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_1);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_compexpr_right_5 = mod_consts[97];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_called_name_11 = LOOKUP_BUILTIN(mod_consts[149]);
        assert(tmp_called_name_11 != NULL);
        tmp_left_name_6 = mod_consts[150];
        tmp_right_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_right_name_5 == NULL)) {
            tmp_right_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_7;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_6, tmp_right_name_5);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_7;
        }
        tmp_right_name_6 = mod_consts[151];
        tmp_args_element_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_6);
        Py_DECREF(tmp_left_name_5);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_7;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 31;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_10);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_6;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 32;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_7:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_13 = tmp_with_2__exit;
        tmp_args_element_name_11 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_12 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_13 = EXC_TRACEBACK(PyThreadState_GET());
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, call_args);
        }

        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 32;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame) frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_8;
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 28;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame) frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_8;
    branch_end_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = tmp_with_2__indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_14 = tmp_with_2__exit;
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 32;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_14, &PyTuple_GET_ITEM(mod_consts[145], 0));

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);

            exception_lineno = 32;

            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_5;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_compexpr_left_8;
        nuitka_bool tmp_compexpr_right_8;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_8 = tmp_with_2__indicator;
        tmp_compexpr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_compexpr_left_8 == tmp_compexpr_right_8) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_15 = tmp_with_2__exit;
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 32;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_15, &PyTuple_GET_ITEM(mod_consts[145], 0));

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_11:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_2;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[6];
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_False;
        tmp_defaults_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = PyDict_New();
        PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_1);


        tmp_assign_source_28 = MAKE_FUNCTION___main__$$$function__1_discordGet(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION___main__$$$function__2_SendMessage();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION___main__$$$function__3_fillText();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION___main__$$$function__4_listServers();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION___main__$$$function__5_listChannels();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION___main__$$$function__6_showMessages();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[158];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_34 = MAKE_FUNCTION___main__$$$function__7_DrawMessageBox(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION___main__$$$function__8_kill();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION___main__$$$function__9_UpdateWindowSize();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION___main__$$$function__10_DrawServerWindow();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION___main__$$$function__11_DrawListWindow();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_38);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_call_result_9;
        tmp_called_name_16 = LOOKUP_BUILTIN(mod_consts[149]);
        assert(tmp_called_name_16 != NULL);
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 177;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, mod_consts[163]);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_call_result_10;
        tmp_called_name_17 = LOOKUP_BUILTIN(mod_consts[149]);
        assert(tmp_called_name_17 != NULL);
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 178;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, mod_consts[164]);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 180;
        tmp_assign_source_39 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[165]);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_39);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 181;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[166]);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_12;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 182;
        tmp_call_result_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[167]);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_13;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 183;
        tmp_call_result_13 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[58],
            &PyTuple_GET_ITEM(mod_consts[158], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_14;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 185;
        tmp_call_result_14 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_6,
            mod_consts[168],
            &PyTuple_GET_ITEM(mod_consts[169], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_15;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 186;
        tmp_call_result_15 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_7,
            mod_consts[170],
            &PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_16;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 187;
        tmp_call_result_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[55]);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_40);
    }
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_call_result_17;
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 190;
        tmp_call_result_17 = CALL_FUNCTION_NO_ARGS(tmp_called_name_18);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_operand_name_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        tmp_compexpr_left_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_compexpr_left_9 == NULL)) {
            tmp_compexpr_left_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = mod_consts[173];
        tmp_or_left_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_compexpr_left_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_compexpr_left_10 == NULL)) {
            tmp_compexpr_left_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = mod_consts[174];
        tmp_or_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_operand_name_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_4 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        Py_DECREF(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    goto loop_end_1;
    branch_no_12:;
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_call_result_18;
        tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_name_19 == NULL)) {
            tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 192;
        tmp_call_result_18 = CALL_FUNCTION_NO_ARGS(tmp_called_name_19);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_19;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 193;
        tmp_call_result_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[14]);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_41);
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_8;
        PyObject *tmp_abs_arg_2;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_abs_arg_3;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_left_name_10;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_10;
        PyObject *tmp_args_element_name_16;
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[15]);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_7 == NULL)) {
            tmp_left_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = mod_consts[43];
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_7);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_abs_arg_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_abs_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_9 == NULL)) {
            tmp_left_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = mod_consts[43];
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_9, tmp_right_name_8);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_abs_arg_2 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_abs_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BUILTIN_ABS(tmp_abs_arg_2);
        Py_DECREF(tmp_abs_arg_2);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_len_arg_1 == NULL)) {
            tmp_len_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = mod_consts[43];
        tmp_int_arg_3 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_LONG(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_left_name_10);
        if (tmp_int_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_abs_arg_3 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_abs_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = BUILTIN_ABS(tmp_abs_arg_3);
        Py_DECREF(tmp_abs_arg_3);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_9);
        Py_DECREF(tmp_left_name_8);
        Py_DECREF(tmp_right_name_9);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_args_element_name_16 == NULL)) {
            tmp_args_element_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_14);
            Py_DECREF(tmp_args_element_name_15);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_20, call_args);
        }

        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_14);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_21;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 196;
        tmp_call_result_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[55]);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_22;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 197;
        tmp_call_result_22 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_11,
            mod_consts[177],
            &PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 191;

        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_23;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 199;
        tmp_call_result_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[179]);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_expression_name_18;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[180]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_17 = mod_consts[26];
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[181]);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_18);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[182]);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_18);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_21, call_args);
        }

        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_18);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_expression_name_21;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[180]);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_20 = mod_consts[43];
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[181]);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[183]);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22};
            tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_22, call_args);
        }

        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_element_name_21);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_expression_name_24;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[180]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_23 = mod_consts[80];
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[182]);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_args_element_name_24);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[181]);
        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_args_element_name_24);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_23, call_args);
        }

        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_24);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_expression_name_27;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[180]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = mod_consts[184];
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[185]);
        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_args_element_name_27);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[181]);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_args_element_name_27);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_24, call_args);
        }

        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_27);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_expression_name_30;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[180]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_29 = mod_consts[82];
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[186]);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_30 == NULL)) {
            tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);
            Py_DECREF(tmp_args_element_name_30);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[181]);
        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);
            Py_DECREF(tmp_args_element_name_30);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_25, call_args);
        }

        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_30);
        Py_DECREF(tmp_args_element_name_31);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_expression_name_33;
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[180]);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_32 = mod_consts[84];
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[187]);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_33);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[182]);
        if (tmp_args_element_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_33);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_26, call_args);
        }

        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_33);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_call_result_30;
        tmp_called_name_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_name_27 == NULL)) {
            tmp_called_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 207;
        tmp_call_result_30 = CALL_FUNCTION_NO_ARGS(tmp_called_name_27);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_name_35;
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[15]);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_args_element_name_35 == NULL)) {
            tmp_args_element_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 208;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_35);
        Py_DECREF(tmp_called_name_28);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_32;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 209;
        tmp_call_result_32 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_13,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[188], 0)
        );

        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_33;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 210;
        tmp_call_result_33 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[55]);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_29;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_called_name_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_29 == NULL)) {
            tmp_called_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 211;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, mod_consts[189]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[67];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_11;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_14;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[15]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_left_name_14 = mod_consts[190];
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[67];
        tmp_expression_name_36 = LOOKUP_SUBSCRIPT(tmp_expression_name_37, tmp_subscript_name_3);
        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = mod_consts[47];
        tmp_right_name_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_36, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_36);
        if (tmp_right_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_14, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = mod_consts[68];
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_13, tmp_right_name_12);
        Py_DECREF(tmp_left_name_13);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_left_name_12);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = mod_consts[67];
        tmp_expression_name_38 = LOOKUP_SUBSCRIPT(tmp_expression_name_39, tmp_subscript_name_5);
        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_left_name_12);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = mod_consts[69];
        tmp_right_name_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_38, tmp_subscript_name_6);
        Py_DECREF(tmp_expression_name_38);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_left_name_12);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_13);
        Py_DECREF(tmp_left_name_12);
        Py_DECREF(tmp_right_name_13);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = mod_consts[70];
        tmp_args_element_name_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_11, tmp_right_name_14);
        Py_DECREF(tmp_left_name_11);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 212;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_35;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 213;
        tmp_call_result_35 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[55]);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_name_31;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_called_name_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_31 == NULL)) {
            tmp_called_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 214;
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, mod_consts[191]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[28];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_36;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 215;
        tmp_call_result_36 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_16,
            mod_consts[177],
            &PyTuple_GET_ITEM(mod_consts[192], 0)
        );

        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = Py_False;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_42);
    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_name_32;
        PyObject *tmp_call_result_37;
        tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_name_32 == NULL)) {
            tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 219;
        tmp_call_result_37 = CALL_FUNCTION_NO_ARGS(tmp_called_name_32);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_call_result_38;
        tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_name_33 == NULL)) {
            tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 220;
        tmp_call_result_38 = CALL_FUNCTION_NO_ARGS(tmp_called_name_33);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = Py_False;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_43);
    }
    branch_no_13:;
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_39;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 222;
        tmp_call_result_39 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_17,
            mod_consts[170],
            &PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_40;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 223;
        tmp_call_result_40 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[14]);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_15;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_right_name_18;
        tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_name_40 == NULL)) {
            tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_called_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[15]);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_left_name_18 = mod_consts[66];
        tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_42 == NULL)) {
            tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_7 = mod_consts[67];
        tmp_expression_name_41 = LOOKUP_SUBSCRIPT(tmp_expression_name_42, tmp_subscript_name_7);
        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_8 = mod_consts[47];
        tmp_right_name_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_41, tmp_subscript_name_8);
        Py_DECREF(tmp_expression_name_41);
        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_left_name_17 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_18, tmp_right_name_15);
        Py_DECREF(tmp_right_name_15);
        if (tmp_left_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_right_name_16 = mod_consts[68];
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_17, tmp_right_name_16);
        Py_DECREF(tmp_left_name_17);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_44 == NULL)) {
            tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_9 = mod_consts[67];
        tmp_expression_name_43 = LOOKUP_SUBSCRIPT(tmp_expression_name_44, tmp_subscript_name_9);
        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_10 = mod_consts[69];
        tmp_right_name_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_43, tmp_subscript_name_10);
        Py_DECREF(tmp_expression_name_43);
        if (tmp_right_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_16, tmp_right_name_17);
        Py_DECREF(tmp_left_name_16);
        Py_DECREF(tmp_right_name_17);
        if (tmp_left_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_right_name_18 = mod_consts[70];
        tmp_args_element_name_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_15, tmp_right_name_18);
        Py_DECREF(tmp_left_name_15);
        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 224;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_34);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_42;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 225;
        tmp_call_result_42 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_19,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[194], 0)
        );

        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_43;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 226;
        tmp_call_result_43 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[55]);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_name_38;
        tmp_called_name_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_name_35 == NULL)) {
            tmp_called_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_38 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_args_element_name_38 == NULL)) {
            tmp_args_element_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 227;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_38);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_45;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 228;
        tmp_call_result_45 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[55]);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_22;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 230;
        tmp_assign_source_44 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[195]);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_44);
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_tmp_condition_result_14_object_1;
        int tmp_truth_name_3;
        tmp_compexpr_left_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_11 == NULL)) {
            tmp_compexpr_left_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        assert(!(tmp_compexpr_left_11 == NULL));
        tmp_compexpr_right_11 = mod_consts[197];
        tmp_tmp_condition_result_14_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        if (tmp_tmp_condition_result_14_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_9;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_14_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_14_object_1);

            exception_lineno = 231;

            goto try_except_handler_9;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_14_object_1);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    goto loop_end_2;
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_expression_name_45;
        tmp_compexpr_left_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_12 == NULL)) {
            tmp_compexpr_left_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto try_except_handler_9;
        }
        tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_45 == NULL)) {
            tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[198]);
        if (tmp_compexpr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto try_except_handler_9;
        }
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_12, tmp_compexpr_right_12);
        Py_DECREF(tmp_compexpr_right_12);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto try_except_handler_9;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        assert(tmp_condition_result_15 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        tmp_left_name_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_left_name_19 == NULL)) {
            tmp_left_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_left_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_9;
        }
        tmp_right_name_19 = mod_consts[26];
        tmp_assign_source_45 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_19, tmp_right_name_19);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_45);
    }
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_expression_name_46;
        tmp_compexpr_left_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_13 == NULL)) {
            tmp_compexpr_left_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_9;
        }
        tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_46 == NULL)) {
            tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[199]);
        if (tmp_compexpr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_9;
        }
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_13, tmp_compexpr_right_13);
        Py_DECREF(tmp_compexpr_right_13);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_9;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
        assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        tmp_left_name_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_left_name_20 == NULL)) {
            tmp_left_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_left_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_9;
        }
        tmp_right_name_20 = mod_consts[26];
        tmp_assign_source_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_20, tmp_right_name_20);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_46);
    }
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_expression_name_47;
        tmp_compexpr_left_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_14 == NULL)) {
            tmp_compexpr_left_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_9;
        }
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[200]);
        if (tmp_compexpr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_9;
        }
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_14, tmp_compexpr_right_14);
        Py_DECREF(tmp_compexpr_right_14);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_9;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
        assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_name_36;
        PyObject *tmp_call_result_46;
        tmp_called_name_36 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_name_36 == NULL)) {
            tmp_called_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 238;
        tmp_call_result_46 = CALL_FUNCTION_NO_ARGS(tmp_called_name_36);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_name_37;
        PyObject *tmp_call_result_47;
        tmp_called_name_37 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_name_37 == NULL)) {
            tmp_called_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 239;
        tmp_call_result_47 = CALL_FUNCTION_NO_ARGS(tmp_called_name_37);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_47);
    }
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_expression_name_48;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_tmp_or_left_value_3_object_1;
        int tmp_truth_name_4;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_tmp_or_right_value_3_object_1;
        int tmp_truth_name_5;
        tmp_compexpr_left_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_15 == NULL)) {
            tmp_compexpr_left_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_expression_name_48 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_48 == NULL)) {
            tmp_expression_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[201]);
        if (tmp_compexpr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_15, tmp_compexpr_right_15);
        Py_DECREF(tmp_compexpr_right_15);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 240;

            goto try_except_handler_9;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        assert(tmp_or_left_value_2 != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_16 == NULL)) {
            tmp_compexpr_left_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_16 = mod_consts[202];
        tmp_tmp_or_left_value_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_16, tmp_compexpr_right_16);
        if (tmp_tmp_or_left_value_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_or_left_value_3_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_3_object_1);

            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_or_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_3_object_1);
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_compexpr_left_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_17 == NULL)) {
            tmp_compexpr_left_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_17 = mod_consts[203];
        tmp_tmp_or_right_value_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_17, tmp_compexpr_right_17);
        if (tmp_tmp_or_right_value_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_or_right_value_3_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_3_object_1);

            exception_lineno = 240;

            goto try_except_handler_9;
        }
        tmp_or_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_3_object_1);
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_condition_result_18 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_18 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
        assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_subscript_name_11;
        tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_49 == NULL)) {
            tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_9;
        }
        tmp_subscript_name_11 = mod_consts[28];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_49, tmp_subscript_name_11);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_9;
        }
        tmp_assign_source_48 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_49 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_49 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 242;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_50 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_50);
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        tmp_compexpr_left_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_compexpr_left_18 == NULL)) {
            tmp_compexpr_left_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_compexpr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_10;
        }
        tmp_compexpr_right_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_compexpr_right_18 == NULL)) {
            tmp_compexpr_right_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_compexpr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_10;
        }
        tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_18, tmp_compexpr_right_18);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_10;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
        assert(tmp_condition_result_19 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assign_source_51 == NULL)) {
            tmp_assign_source_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_51);
    }
    branch_no_19:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        tmp_left_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_left_name_21 == NULL)) {
            tmp_left_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_left_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        tmp_right_name_21 = mod_consts[26];
        tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_21, tmp_right_name_21);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_52);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 242;

        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_9;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_name_38;
        PyObject *tmp_call_result_48;
        tmp_called_name_38 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_name_38 == NULL)) {
            tmp_called_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 246;
        tmp_call_result_48 = CALL_FUNCTION_NO_ARGS(tmp_called_name_38);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_48);
    }
    loop_start_4:;
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_49;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 248;
        tmp_call_result_49 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_23,
            mod_consts[170],
            &PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_left_name_22;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_right_name_22;
        PyObject *tmp_tmp_condition_result_20_object_1;
        int tmp_truth_name_6;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 249;
        tmp_left_name_22 = CALL_METHOD_NO_ARGS(tmp_called_instance_24, mod_consts[128]);
        if (tmp_left_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_9;
        }
        tmp_right_name_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_right_name_22 == NULL)) {
            tmp_right_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_right_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_22);

            exception_lineno = 249;

            goto try_except_handler_9;
        }
        tmp_compexpr_left_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_22, tmp_right_name_22);
        Py_DECREF(tmp_left_name_22);
        if (tmp_compexpr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_19 = mod_consts[80];
        tmp_tmp_condition_result_20_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_19, tmp_compexpr_right_19);
        Py_DECREF(tmp_compexpr_left_19);
        if (tmp_tmp_condition_result_20_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_9;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_20_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_20_object_1);

            exception_lineno = 249;

            goto try_except_handler_9;
        }
        tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_20_object_1);
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_instance_25;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 250;
        tmp_assign_source_53 = CALL_METHOD_NO_ARGS(tmp_called_instance_25, mod_consts[128]);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_53);
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        tmp_compexpr_left_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_compexpr_left_20 == NULL)) {
            tmp_compexpr_left_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_compexpr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto try_except_handler_9;
        }
        tmp_compexpr_right_20 = Py_None;
        tmp_condition_result_21 = (tmp_compexpr_left_20 != tmp_compexpr_right_20) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_50;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 252;
        tmp_call_result_50 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[14]);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_51;
        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_27 == NULL)) {
            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 253;
        tmp_call_result_51 = CALL_METHOD_NO_ARGS(tmp_called_instance_27, mod_consts[52]);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_left_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_23;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_right_name_24;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_called_instance_28;
        tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_50 == NULL)) {
            tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_9;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[15]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_9;
        }
        tmp_args_element_name_39 = mod_consts[21];
        tmp_args_element_name_40 = mod_consts[43];
        tmp_left_name_24 = mod_consts[92];
        tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_51 == NULL)) {
            tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 254;

            goto try_except_handler_9;
        }
        tmp_subscript_name_12 = mod_consts[31];
        tmp_right_name_23 = LOOKUP_SUBSCRIPT(tmp_expression_name_51, tmp_subscript_name_12);
        if (tmp_right_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 254;

            goto try_except_handler_9;
        }
        tmp_left_name_23 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_24, tmp_right_name_23);
        Py_DECREF(tmp_right_name_23);
        if (tmp_left_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 254;

            goto try_except_handler_9;
        }
        tmp_right_name_24 = mod_consts[93];
        tmp_args_element_name_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_23, tmp_right_name_24);
        Py_DECREF(tmp_left_name_23);
        if (tmp_args_element_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 254;

            goto try_except_handler_9;
        }
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);
            Py_DECREF(tmp_args_element_name_41);

            exception_lineno = 254;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 254;
        tmp_args_element_name_42 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_28,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);
            Py_DECREF(tmp_args_element_name_41);

            exception_lineno = 254;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42};
            tmp_call_result_52 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_39, call_args);
        }

        Py_DECREF(tmp_called_name_39);
        Py_DECREF(tmp_args_element_name_41);
        Py_DECREF(tmp_args_element_name_42);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_40;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_25;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_right_name_26;
        tmp_called_name_40 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_40 == NULL)) {
            tmp_called_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_9;
        }
        tmp_left_name_26 = mod_consts[205];
        tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_name_52 == NULL)) {
            tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_9;
        }
        tmp_subscript_name_13 = mod_consts[37];
        tmp_right_name_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_52, tmp_subscript_name_13);
        if (tmp_right_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_9;
        }
        tmp_left_name_25 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_26, tmp_right_name_25);
        Py_DECREF(tmp_right_name_25);
        if (tmp_left_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_9;
        }
        tmp_right_name_26 = mod_consts[9];
        tmp_args_element_name_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_25, tmp_right_name_26);
        Py_DECREF(tmp_left_name_25);
        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 255;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_43);
        Py_DECREF(tmp_args_element_name_43);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_27;
        PyObject *tmp_right_name_28;
        tmp_xrange_low_1 = mod_consts[26];
        tmp_left_name_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_28 == NULL)) {
            tmp_left_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_9;
        }
        tmp_right_name_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_27 == NULL)) {
            tmp_right_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_9;
        }
        tmp_left_name_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_28, tmp_right_name_27);
        if (tmp_left_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_9;
        }
        tmp_right_name_28 = mod_consts[80];
        tmp_xrange_high_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_27, tmp_right_name_28);
        Py_DECREF(tmp_left_name_27);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_9;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_9;
        }
        tmp_assign_source_55 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_56 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_56 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 256;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_57 = tmp_for_loop_2__iter_value;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_57);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_left_name_29;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_left_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_left_name_33;
        PyObject *tmp_right_name_29;
        PyObject *tmp_right_name_30;
        PyObject *tmp_right_name_31;
        PyObject *tmp_right_name_32;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_subscript_name_16;
        PyObject *tmp_right_name_33;
        tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_expression_name_55 == NULL)) {
            tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_left_name_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_33 == NULL)) {
            tmp_left_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_right_name_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_29 == NULL)) {
            tmp_right_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_left_name_32 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_33, tmp_right_name_29);
        if (tmp_left_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_right_name_30 = mod_consts[80];
        tmp_left_name_31 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_32, tmp_right_name_30);
        Py_DECREF(tmp_left_name_32);
        if (tmp_left_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_right_name_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_right_name_31 == NULL)) {
            tmp_right_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_right_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_31);

            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_left_name_30 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_31, tmp_right_name_31);
        Py_DECREF(tmp_left_name_31);
        if (tmp_left_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_right_name_32 = mod_consts[26];
        tmp_subscript_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_30, tmp_right_name_32);
        Py_DECREF(tmp_left_name_30);
        if (tmp_subscript_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_expression_name_54 = LOOKUP_SUBSCRIPT(tmp_expression_name_55, tmp_subscript_name_14);
        Py_DECREF(tmp_subscript_name_14);
        if (tmp_expression_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_subscript_name_15 = mod_consts[46];
        tmp_expression_name_53 = LOOKUP_SUBSCRIPT(tmp_expression_name_54, tmp_subscript_name_15);
        Py_DECREF(tmp_expression_name_54);
        if (tmp_expression_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_subscript_name_16 = mod_consts[47];
        tmp_left_name_29 = LOOKUP_SUBSCRIPT(tmp_expression_name_53, tmp_subscript_name_16);
        Py_DECREF(tmp_expression_name_53);
        if (tmp_left_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        tmp_right_name_33 = mod_consts[48];
        tmp_assign_source_58 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_29, tmp_right_name_33);
        Py_DECREF(tmp_left_name_29);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_58);
    }
    {
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_left_name_34;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_right_name_34;
        PyObject *tmp_expression_name_57;
        tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_56 == NULL)) {
            tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_12;
        }
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[15]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_12;
        }
        tmp_args_element_name_44 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_name_44 == NULL)) {
            tmp_args_element_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_args_element_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 259;

            goto try_except_handler_12;
        }
        tmp_args_element_name_45 = mod_consts[26];
        tmp_args_element_name_46 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_args_element_name_46 == NULL)) {
            tmp_args_element_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_args_element_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 259;

            goto try_except_handler_12;
        }
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 259;

            goto try_except_handler_12;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 259;
        tmp_left_name_34 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_29,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_left_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 259;

            goto try_except_handler_12;
        }
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);
            Py_DECREF(tmp_left_name_34);

            exception_lineno = 259;

            goto try_except_handler_12;
        }
        tmp_right_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[208]);
        if (tmp_right_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);
            Py_DECREF(tmp_left_name_34);

            exception_lineno = 259;

            goto try_except_handler_12;
        }
        tmp_args_element_name_47 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_34, tmp_right_name_34);
        Py_DECREF(tmp_left_name_34);
        Py_DECREF(tmp_right_name_34);
        if (tmp_args_element_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 259;

            goto try_except_handler_12;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_name_44, tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47};
            tmp_call_result_53 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_41, call_args);
        }

        Py_DECREF(tmp_called_name_41);
        Py_DECREF(tmp_args_element_name_47);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_name_42;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_35;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_subscript_name_17;
        PyObject *tmp_left_name_36;
        PyObject *tmp_left_name_37;
        PyObject *tmp_left_name_38;
        PyObject *tmp_left_name_39;
        PyObject *tmp_right_name_36;
        PyObject *tmp_right_name_37;
        PyObject *tmp_right_name_38;
        PyObject *tmp_right_name_39;
        PyObject *tmp_subscript_name_18;
        tmp_expression_name_58 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_58 == NULL)) {
            tmp_expression_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_called_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[15]);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_args_element_name_48 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_name_48 == NULL)) {
            tmp_args_element_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_args_element_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_left_name_35 = mod_consts[26];
        tmp_len_arg_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_len_arg_2 == NULL)) {
            tmp_len_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_right_name_35 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_right_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_args_element_name_49 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_name_35, tmp_right_name_35);
        Py_DECREF(tmp_right_name_35);
        assert(!(tmp_args_element_name_49 == NULL));
        tmp_expression_name_60 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_expression_name_60 == NULL)) {
            tmp_expression_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_expression_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_left_name_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_39 == NULL)) {
            tmp_left_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_right_name_36 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_36 == NULL)) {
            tmp_right_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_left_name_38 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_39, tmp_right_name_36);
        if (tmp_left_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_right_name_37 = mod_consts[80];
        tmp_left_name_37 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_38, tmp_right_name_37);
        Py_DECREF(tmp_left_name_38);
        if (tmp_left_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_right_name_38 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_right_name_38 == NULL)) {
            tmp_right_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_right_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);
            Py_DECREF(tmp_left_name_37);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_left_name_36 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_37, tmp_right_name_38);
        Py_DECREF(tmp_left_name_37);
        if (tmp_left_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_right_name_39 = mod_consts[26];
        tmp_subscript_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_36, tmp_right_name_39);
        Py_DECREF(tmp_left_name_36);
        if (tmp_subscript_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_expression_name_59 = LOOKUP_SUBSCRIPT(tmp_expression_name_60, tmp_subscript_name_17);
        Py_DECREF(tmp_subscript_name_17);
        if (tmp_expression_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_subscript_name_18 = mod_consts[11];
        tmp_args_element_name_50 = LOOKUP_SUBSCRIPT(tmp_expression_name_59, tmp_subscript_name_18);
        Py_DECREF(tmp_expression_name_59);
        if (tmp_args_element_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_args_element_name_49);

            exception_lineno = 260;

            goto try_except_handler_12;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50};
            tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_42, call_args);
        }

        Py_DECREF(tmp_called_name_42);
        Py_DECREF(tmp_args_element_name_49);
        Py_DECREF(tmp_args_element_name_50);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_54);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_10);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_10, exception_keeper_tb_10);
    PUBLISH_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 256;

        goto try_except_handler_11;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_9;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_call_result_55;
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_9;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 263;
        tmp_call_result_55 = CALL_METHOD_NO_ARGS(tmp_called_instance_30, mod_consts[55]);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_55);
    }
    branch_no_21:;
    branch_no_20:;
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_31;
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 265;
        tmp_assign_source_59 = CALL_METHOD_NO_ARGS(tmp_called_instance_31, mod_consts[195]);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_59);
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_compexpr_left_21;
        PyObject *tmp_compexpr_right_21;
        PyObject *tmp_tmp_condition_result_22_object_1;
        int tmp_truth_name_7;
        tmp_compexpr_left_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_21 == NULL)) {
            tmp_compexpr_left_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        assert(!(tmp_compexpr_left_21 == NULL));
        tmp_compexpr_right_21 = mod_consts[209];
        tmp_tmp_condition_result_22_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_21, tmp_compexpr_right_21);
        if (tmp_tmp_condition_result_22_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_13;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_tmp_condition_result_22_object_1);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_22_object_1);

            exception_lineno = 266;

            goto try_except_handler_13;
        }
        tmp_condition_result_22 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_22_object_1);
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = Py_True;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_60);
    }
    goto loop_end_4;
    goto branch_end_22;
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_23;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        PyObject *tmp_expression_name_61;
        int tmp_or_left_truth_5;
        nuitka_bool tmp_or_left_value_5;
        nuitka_bool tmp_or_right_value_5;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        PyObject *tmp_tmp_or_left_value_5_object_1;
        int tmp_truth_name_8;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        PyObject *tmp_tmp_or_right_value_5_object_1;
        int tmp_truth_name_9;
        tmp_compexpr_left_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_22 == NULL)) {
            tmp_compexpr_left_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[201]);
        if (tmp_compexpr_right_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_or_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_22, tmp_compexpr_right_22);
        Py_DECREF(tmp_compexpr_right_22);
        if (tmp_or_left_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 269;

            goto try_except_handler_13;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        assert(tmp_or_left_value_4 != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_23 == NULL)) {
            tmp_compexpr_left_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_23 = mod_consts[202];
        tmp_tmp_or_left_value_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_23, tmp_compexpr_right_23);
        if (tmp_tmp_or_left_value_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_or_left_value_5_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_5_object_1);

            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_or_left_value_5 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_5_object_1);
        tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        tmp_compexpr_left_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_24 == NULL)) {
            tmp_compexpr_left_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_24 = mod_consts[203];
        tmp_tmp_or_right_value_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_24, tmp_compexpr_right_24);
        if (tmp_tmp_or_right_value_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_tmp_or_right_value_5_object_1);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_5_object_1);

            exception_lineno = 269;

            goto try_except_handler_13;
        }
        tmp_or_right_value_5 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_5_object_1);
        tmp_or_right_value_4 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_or_right_value_4 = tmp_or_left_value_5;
        or_end_5:;
        tmp_condition_result_23 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_23 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
        assert(tmp_condition_result_23 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_name_43;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_args_element_name_52;
        tmp_called_name_43 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_name_43 == NULL)) {
            tmp_called_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_13;
        }
        tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_name_62 == NULL)) {
            tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_13;
        }
        tmp_subscript_name_19 = mod_consts[37];
        tmp_args_element_name_51 = LOOKUP_SUBSCRIPT(tmp_expression_name_62, tmp_subscript_name_19);
        if (tmp_args_element_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_13;
        }
        tmp_args_element_name_52 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_args_element_name_52 == NULL)) {
            tmp_args_element_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_args_element_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_51);

            exception_lineno = 270;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_name_51, tmp_args_element_name_52};
            tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_43, call_args);
        }

        Py_DECREF(tmp_args_element_name_51);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_call_result_57;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 271;
        tmp_call_result_57 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_32,
            mod_consts[170],
            &PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_61);
    }
    {
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_left_name_40;
        PyObject *tmp_right_name_40;
        tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_63 == NULL)) {
            tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_13;
        }
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[210]);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_13;
        }
        tmp_args_element_name_53 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_name_53 == NULL)) {
            tmp_args_element_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 273;

            goto try_except_handler_13;
        }
        tmp_left_name_40 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_40 == NULL)) {
            tmp_left_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 273;

            goto try_except_handler_13;
        }
        tmp_right_name_40 = mod_consts[90];
        tmp_args_element_name_54 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_40, tmp_right_name_40);
        if (tmp_args_element_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 273;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_name_53, tmp_args_element_name_54};
            tmp_call_result_58 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_44, call_args);
        }

        Py_DECREF(tmp_called_name_44);
        Py_DECREF(tmp_args_element_name_54);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_name_45;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_left_name_41;
        PyObject *tmp_right_name_41;
        PyObject *tmp_args_element_name_56;
        tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_64 == NULL)) {
            tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto try_except_handler_13;
        }
        tmp_called_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[211]);
        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto try_except_handler_13;
        }
        tmp_left_name_41 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_41 == NULL)) {
            tmp_left_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 274;

            goto try_except_handler_13;
        }
        tmp_right_name_41 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_41 == NULL)) {
            tmp_right_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 274;

            goto try_except_handler_13;
        }
        tmp_args_element_name_55 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_41, tmp_right_name_41);
        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 274;

            goto try_except_handler_13;
        }
        tmp_args_element_name_56 = mod_consts[73];
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = {tmp_args_element_name_55, tmp_args_element_name_56};
            tmp_call_result_59 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_45, call_args);
        }

        Py_DECREF(tmp_called_name_45);
        Py_DECREF(tmp_args_element_name_55);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_name_46;
        PyObject *tmp_call_result_60;
        tmp_called_name_46 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_name_46 == NULL)) {
            tmp_called_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 275;
        tmp_call_result_60 = CALL_FUNCTION_NO_ARGS(tmp_called_name_46);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_61;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 276;
        tmp_call_result_61 = CALL_METHOD_NO_ARGS(tmp_called_instance_33, mod_consts[55]);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_65 == NULL)) {
            tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_13;
        }
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[15]);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_13;
        }
        tmp_args_element_name_57 = mod_consts[26];
        tmp_args_element_name_58 = mod_consts[26];
        tmp_args_element_name_59 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_args_element_name_59 == NULL)) {
            tmp_args_element_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_args_element_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 277;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59};
            tmp_call_result_62 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_47, call_args);
        }

        Py_DECREF(tmp_called_name_47);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_name_48;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_left_name_42;
        PyObject *tmp_right_name_42;
        tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_66 == NULL)) {
            tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto try_except_handler_13;
        }
        tmp_called_name_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[210]);
        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto try_except_handler_13;
        }
        tmp_args_element_name_60 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_name_60 == NULL)) {
            tmp_args_element_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_args_element_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 278;

            goto try_except_handler_13;
        }
        tmp_left_name_42 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_42 == NULL)) {
            tmp_left_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 278;

            goto try_except_handler_13;
        }
        tmp_right_name_42 = mod_consts[90];
        tmp_args_element_name_61 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_42, tmp_right_name_42);
        if (tmp_args_element_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 278;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_name_60, tmp_args_element_name_61};
            tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_48, call_args);
        }

        Py_DECREF(tmp_called_name_48);
        Py_DECREF(tmp_args_element_name_61);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_name_49;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_left_name_43;
        PyObject *tmp_left_name_44;
        PyObject *tmp_right_name_43;
        PyObject *tmp_right_name_44;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_left_name_45;
        PyObject *tmp_right_name_45;
        tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_67 == NULL)) {
            tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_13;
        }
        tmp_called_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[210]);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_13;
        }
        tmp_left_name_44 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_44 == NULL)) {
            tmp_left_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 279;

            goto try_except_handler_13;
        }
        tmp_right_name_43 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_43 == NULL)) {
            tmp_right_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 279;

            goto try_except_handler_13;
        }
        tmp_left_name_43 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_44, tmp_right_name_43);
        if (tmp_left_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 279;

            goto try_except_handler_13;
        }
        tmp_right_name_44 = mod_consts[43];
        tmp_args_element_name_62 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_43, tmp_right_name_44);
        Py_DECREF(tmp_left_name_43);
        if (tmp_args_element_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 279;

            goto try_except_handler_13;
        }
        tmp_left_name_45 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_45 == NULL)) {
            tmp_left_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);
            Py_DECREF(tmp_args_element_name_62);

            exception_lineno = 279;

            goto try_except_handler_13;
        }
        tmp_right_name_45 = mod_consts[90];
        tmp_args_element_name_63 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_45, tmp_right_name_45);
        if (tmp_args_element_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);
            Py_DECREF(tmp_args_element_name_62);

            exception_lineno = 279;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = {tmp_args_element_name_62, tmp_args_element_name_63};
            tmp_call_result_64 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_49, call_args);
        }

        Py_DECREF(tmp_called_name_49);
        Py_DECREF(tmp_args_element_name_62);
        Py_DECREF(tmp_args_element_name_63);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_instance_34;
        PyObject *tmp_call_result_65;
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 280;
        tmp_call_result_65 = CALL_METHOD_NO_ARGS(tmp_called_instance_34, mod_consts[14]);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_call_result_66;
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 281;
        tmp_call_result_66 = CALL_METHOD_NO_ARGS(tmp_called_instance_35, mod_consts[52]);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_name_50;
        PyObject *tmp_expression_name_68;
        PyObject *tmp_call_result_67;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_left_name_46;
        PyObject *tmp_left_name_47;
        PyObject *tmp_right_name_46;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_subscript_name_20;
        PyObject *tmp_right_name_47;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_called_instance_36;
        tmp_expression_name_68 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_68 == NULL)) {
            tmp_expression_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_13;
        }
        tmp_called_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[15]);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_13;
        }
        tmp_args_element_name_64 = mod_consts[21];
        tmp_args_element_name_65 = mod_consts[43];
        tmp_left_name_47 = mod_consts[92];
        tmp_expression_name_69 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_69 == NULL)) {
            tmp_expression_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 282;

            goto try_except_handler_13;
        }
        tmp_subscript_name_20 = mod_consts[31];
        tmp_right_name_46 = LOOKUP_SUBSCRIPT(tmp_expression_name_69, tmp_subscript_name_20);
        if (tmp_right_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 282;

            goto try_except_handler_13;
        }
        tmp_left_name_46 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_47, tmp_right_name_46);
        Py_DECREF(tmp_right_name_46);
        if (tmp_left_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 282;

            goto try_except_handler_13;
        }
        tmp_right_name_47 = mod_consts[93];
        tmp_args_element_name_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_46, tmp_right_name_47);
        Py_DECREF(tmp_left_name_46);
        if (tmp_args_element_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 282;

            goto try_except_handler_13;
        }
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_args_element_name_66);

            exception_lineno = 282;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 282;
        tmp_args_element_name_67 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_36,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_args_element_name_66);

            exception_lineno = 282;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66, tmp_args_element_name_67};
            tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_50, call_args);
        }

        Py_DECREF(tmp_called_name_50);
        Py_DECREF(tmp_args_element_name_66);
        Py_DECREF(tmp_args_element_name_67);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_62);
    }
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_68;
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 284;
        tmp_call_result_68 = CALL_METHOD_NO_ARGS(tmp_called_instance_37, mod_consts[55]);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_name_51;
        PyObject *tmp_call_result_69;
        tmp_called_name_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_name_51 == NULL)) {
            tmp_called_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 285;
        tmp_call_result_69 = CALL_FUNCTION_NO_ARGS(tmp_called_name_51);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_65);
    }
    goto branch_end_23;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        PyObject *tmp_expression_name_70;
        tmp_compexpr_left_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_25 == NULL)) {
            tmp_compexpr_left_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_13;
        }
        tmp_expression_name_70 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_70 == NULL)) {
            tmp_expression_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[212]);
        if (tmp_compexpr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_13;
        }
        tmp_condition_result_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_25, tmp_compexpr_right_25);
        Py_DECREF(tmp_compexpr_right_25);
        if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_13;
        }
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
        assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_call_result_70;
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 290;
        tmp_call_result_70 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_38,
            mod_consts[170],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_compexpr_left_26;
        PyObject *tmp_compexpr_right_26;
        PyObject *tmp_tmp_condition_result_25_object_1;
        int tmp_truth_name_10;
        tmp_compexpr_left_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_compexpr_left_26 == NULL)) {
            tmp_compexpr_left_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_compexpr_left_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_26 = mod_consts[26];
        tmp_tmp_condition_result_25_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_26, tmp_compexpr_right_26);
        if (tmp_tmp_condition_result_25_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto try_except_handler_13;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_tmp_condition_result_25_object_1);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_25_object_1);

            exception_lineno = 291;

            goto try_except_handler_13;
        }
        tmp_condition_result_25 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_25_object_1);
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_left_name_48;
        PyObject *tmp_right_name_48;
        tmp_left_name_48 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_left_name_48 == NULL)) {
            tmp_left_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_left_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto try_except_handler_13;
        }
        tmp_right_name_48 = mod_consts[26];
        tmp_assign_source_66 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_48, tmp_right_name_48);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_subscript_name_21;
        tmp_expression_name_71 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_name_71 == NULL)) {
            tmp_expression_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_expression_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_13;
        }
        tmp_subscript_name_21 = mod_consts[213];
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT(tmp_expression_name_71, tmp_subscript_name_21);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_67);
    }
    branch_no_25:;
    {
        PyObject *tmp_called_name_52;
        PyObject *tmp_call_result_71;
        tmp_called_name_52 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_name_52 == NULL)) {
            tmp_called_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 294;
        tmp_call_result_71 = CALL_FUNCTION_NO_ARGS(tmp_called_name_52);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        tmp_expression_name_72 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_72 == NULL)) {
            tmp_expression_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_13;
        }
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[15]);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_13;
        }
        tmp_args_element_name_68 = mod_consts[26];
        tmp_args_element_name_69 = mod_consts[26];
        tmp_args_element_name_70 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_args_element_name_70 == NULL)) {
            tmp_args_element_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_args_element_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 295;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_name_68, tmp_args_element_name_69, tmp_args_element_name_70};
            tmp_call_result_72 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_53, call_args);
        }

        Py_DECREF(tmp_called_name_53);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_call_result_73;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 296;
        tmp_call_result_73 = CALL_METHOD_NO_ARGS(tmp_called_instance_39, mod_consts[55]);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_73);
    }
    goto branch_end_24;
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_27;
        PyObject *tmp_compexpr_right_27;
        PyObject *tmp_expression_name_73;
        tmp_compexpr_left_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_27 == NULL)) {
            tmp_compexpr_left_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_13;
        }
        tmp_expression_name_73 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_73 == NULL)) {
            tmp_expression_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[214]);
        if (tmp_compexpr_right_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_13;
        }
        tmp_condition_result_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_27, tmp_compexpr_right_27);
        Py_DECREF(tmp_compexpr_right_27);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_13;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
        assert(tmp_condition_result_26 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_26:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_compexpr_left_28;
        PyObject *tmp_compexpr_right_28;
        PyObject *tmp_tmp_condition_result_27_object_1;
        int tmp_truth_name_11;
        tmp_compexpr_left_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_compexpr_left_28 == NULL)) {
            tmp_compexpr_left_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_compexpr_left_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_28 = mod_consts[21];
        tmp_tmp_condition_result_27_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_28, tmp_compexpr_right_28);
        if (tmp_tmp_condition_result_27_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_13;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_tmp_condition_result_27_object_1);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_27_object_1);

            exception_lineno = 298;

            goto try_except_handler_13;
        }
        tmp_condition_result_27 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_27_object_1);
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_left_name_49;
        PyObject *tmp_right_name_49;
        tmp_left_name_49 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_left_name_49 == NULL)) {
            tmp_left_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_left_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_13;
        }
        tmp_right_name_49 = mod_consts[26];
        tmp_assign_source_68 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_49, tmp_right_name_49);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_68);
    }
    {
        PyObject *tmp_called_name_54;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_element_name_71;
        tmp_called_name_54 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_name_54 == NULL)) {
            tmp_called_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_13;
        }
        tmp_args_element_name_71 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_args_element_name_71 == NULL)) {
            tmp_args_element_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_args_element_name_71 == NULL));
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 300;
        tmp_call_result_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, tmp_args_element_name_71);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_instance_40;
        PyObject *tmp_call_result_75;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 301;
        tmp_call_result_75 = CALL_METHOD_NO_ARGS(tmp_called_instance_40, mod_consts[55]);
        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_instance_41;
        PyObject *tmp_call_result_76;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 302;
        tmp_call_result_76 = CALL_METHOD_NO_ARGS(tmp_called_instance_41, mod_consts[14]);
        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_call_result_77;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 303;
        tmp_call_result_77 = CALL_METHOD_NO_ARGS(tmp_called_instance_42, mod_consts[52]);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_name_55;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_left_name_50;
        PyObject *tmp_left_name_51;
        PyObject *tmp_right_name_50;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_subscript_name_22;
        PyObject *tmp_right_name_51;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_called_instance_43;
        tmp_expression_name_74 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_74 == NULL)) {
            tmp_expression_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto try_except_handler_13;
        }
        tmp_called_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[15]);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto try_except_handler_13;
        }
        tmp_args_element_name_72 = mod_consts[21];
        tmp_args_element_name_73 = mod_consts[43];
        tmp_left_name_51 = mod_consts[92];
        tmp_expression_name_75 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_75 == NULL)) {
            tmp_expression_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 304;

            goto try_except_handler_13;
        }
        tmp_subscript_name_22 = mod_consts[31];
        tmp_right_name_50 = LOOKUP_SUBSCRIPT(tmp_expression_name_75, tmp_subscript_name_22);
        if (tmp_right_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 304;

            goto try_except_handler_13;
        }
        tmp_left_name_50 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_51, tmp_right_name_50);
        Py_DECREF(tmp_right_name_50);
        if (tmp_left_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 304;

            goto try_except_handler_13;
        }
        tmp_right_name_51 = mod_consts[93];
        tmp_args_element_name_74 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_50, tmp_right_name_51);
        Py_DECREF(tmp_left_name_50);
        if (tmp_args_element_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 304;

            goto try_except_handler_13;
        }
        tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_43 == NULL)) {
            tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);
            Py_DECREF(tmp_args_element_name_74);

            exception_lineno = 304;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 304;
        tmp_args_element_name_75 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_43,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);
            Py_DECREF(tmp_args_element_name_74);

            exception_lineno = 304;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = {tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75};
            tmp_call_result_78 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_55, call_args);
        }

        Py_DECREF(tmp_called_name_55);
        Py_DECREF(tmp_args_element_name_74);
        Py_DECREF(tmp_args_element_name_75);
        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_call_result_79;
        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_44 == NULL)) {
            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 305;
        tmp_call_result_79 = CALL_METHOD_NO_ARGS(tmp_called_instance_44, mod_consts[55]);
        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_79);
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_compexpr_left_29;
        PyObject *tmp_compexpr_right_29;
        PyObject *tmp_expression_name_76;
        tmp_compexpr_left_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_29 == NULL)) {
            tmp_compexpr_left_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto try_except_handler_13;
        }
        tmp_expression_name_76 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_76 == NULL)) {
            tmp_expression_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[215]);
        if (tmp_compexpr_right_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto try_except_handler_13;
        }
        tmp_condition_result_28 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_29, tmp_compexpr_right_29);
        Py_DECREF(tmp_compexpr_right_29);
        if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto try_except_handler_13;
        }
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
        assert(tmp_condition_result_28 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_left_name_52;
        PyObject *tmp_right_name_52;
        tmp_left_name_52 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_left_name_52 == NULL)) {
            tmp_left_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_left_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto try_except_handler_13;
        }
        tmp_right_name_52 = mod_consts[26];
        tmp_assign_source_69 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_52, tmp_right_name_52);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_69);
    }
    {
        PyObject *tmp_called_name_56;
        PyObject *tmp_call_result_80;
        PyObject *tmp_args_element_name_76;
        tmp_called_name_56 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_name_56 == NULL)) {
            tmp_called_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_args_element_name_76 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_args_element_name_76 == NULL)) {
            tmp_args_element_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_args_element_name_76 == NULL));
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 308;
        tmp_call_result_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_56, tmp_args_element_name_76);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_instance_45;
        PyObject *tmp_call_result_81;
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 309;
        tmp_call_result_81 = CALL_METHOD_NO_ARGS(tmp_called_instance_45, mod_consts[55]);
        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_instance_46;
        PyObject *tmp_call_result_82;
        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_46 == NULL)) {
            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 310;
        tmp_call_result_82 = CALL_METHOD_NO_ARGS(tmp_called_instance_46, mod_consts[14]);
        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_instance_47;
        PyObject *tmp_call_result_83;
        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_47 == NULL)) {
            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 311;
        tmp_call_result_83 = CALL_METHOD_NO_ARGS(tmp_called_instance_47, mod_consts[52]);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_name_57;
        PyObject *tmp_expression_name_77;
        PyObject *tmp_call_result_84;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_left_name_53;
        PyObject *tmp_left_name_54;
        PyObject *tmp_right_name_53;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_subscript_name_23;
        PyObject *tmp_right_name_54;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_called_instance_48;
        tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_77 == NULL)) {
            tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_13;
        }
        tmp_called_name_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[15]);
        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_13;
        }
        tmp_args_element_name_77 = mod_consts[21];
        tmp_args_element_name_78 = mod_consts[43];
        tmp_left_name_54 = mod_consts[92];
        tmp_expression_name_78 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_78 == NULL)) {
            tmp_expression_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 312;

            goto try_except_handler_13;
        }
        tmp_subscript_name_23 = mod_consts[31];
        tmp_right_name_53 = LOOKUP_SUBSCRIPT(tmp_expression_name_78, tmp_subscript_name_23);
        if (tmp_right_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 312;

            goto try_except_handler_13;
        }
        tmp_left_name_53 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_54, tmp_right_name_53);
        Py_DECREF(tmp_right_name_53);
        if (tmp_left_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 312;

            goto try_except_handler_13;
        }
        tmp_right_name_54 = mod_consts[93];
        tmp_args_element_name_79 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_53, tmp_right_name_54);
        Py_DECREF(tmp_left_name_53);
        if (tmp_args_element_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 312;

            goto try_except_handler_13;
        }
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);
            Py_DECREF(tmp_args_element_name_79);

            exception_lineno = 312;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 312;
        tmp_args_element_name_80 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_48,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);
            Py_DECREF(tmp_args_element_name_79);

            exception_lineno = 312;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80};
            tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_57, call_args);
        }

        Py_DECREF(tmp_called_name_57);
        Py_DECREF(tmp_args_element_name_79);
        Py_DECREF(tmp_args_element_name_80);
        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_instance_49;
        PyObject *tmp_call_result_85;
        tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_49 == NULL)) {
            tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 313;
        tmp_call_result_85 = CALL_METHOD_NO_ARGS(tmp_called_instance_49, mod_consts[55]);
        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_85);
    }
    goto branch_end_28;
    branch_no_28:;
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_compexpr_left_30;
        PyObject *tmp_compexpr_right_30;
        PyObject *tmp_expression_name_79;
        tmp_compexpr_left_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_30 == NULL)) {
            tmp_compexpr_left_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_13;
        }
        tmp_expression_name_79 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_79 == NULL)) {
            tmp_expression_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[216]);
        if (tmp_compexpr_right_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_13;
        }
        tmp_condition_result_29 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_30, tmp_compexpr_right_30);
        Py_DECREF(tmp_compexpr_right_30);
        if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_13;
        }
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
        assert(tmp_condition_result_29 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_left_name_55;
        PyObject *tmp_right_name_55;
        tmp_left_name_55 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_name_55 == NULL)) {
            tmp_left_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_13;
        }
        tmp_right_name_55 = mod_consts[26];
        tmp_assign_source_70 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_55, tmp_right_name_55);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_70);
    }
    {
        PyObject *tmp_called_name_58;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_left_name_56;
        PyObject *tmp_right_name_56;
        PyObject *tmp_args_element_name_82;
        tmp_expression_name_80 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_80 == NULL)) {
            tmp_expression_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_13;
        }
        tmp_called_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[211]);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_13;
        }
        tmp_left_name_56 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_56 == NULL)) {
            tmp_left_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 316;

            goto try_except_handler_13;
        }
        tmp_right_name_56 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_56 == NULL)) {
            tmp_right_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 316;

            goto try_except_handler_13;
        }
        tmp_args_element_name_81 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_56, tmp_right_name_56);
        if (tmp_args_element_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 316;

            goto try_except_handler_13;
        }
        tmp_args_element_name_82 = mod_consts[73];
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = {tmp_args_element_name_81, tmp_args_element_name_82};
            tmp_call_result_86 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_58, call_args);
        }

        Py_DECREF(tmp_called_name_58);
        Py_DECREF(tmp_args_element_name_81);
        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_name_59;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_call_result_87;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_left_name_57;
        PyObject *tmp_right_name_57;
        tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_81 == NULL)) {
            tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_13;
        }
        tmp_called_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[210]);
        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_13;
        }
        tmp_args_element_name_83 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_name_83 == NULL)) {
            tmp_args_element_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_args_element_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 317;

            goto try_except_handler_13;
        }
        tmp_left_name_57 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_57 == NULL)) {
            tmp_left_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 317;

            goto try_except_handler_13;
        }
        tmp_right_name_57 = mod_consts[90];
        tmp_args_element_name_84 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_57, tmp_right_name_57);
        if (tmp_args_element_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 317;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_name_83, tmp_args_element_name_84};
            tmp_call_result_87 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_59, call_args);
        }

        Py_DECREF(tmp_called_name_59);
        Py_DECREF(tmp_args_element_name_84);
        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_name_60;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_call_result_88;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_left_name_58;
        PyObject *tmp_left_name_59;
        PyObject *tmp_right_name_58;
        PyObject *tmp_right_name_59;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_left_name_60;
        PyObject *tmp_right_name_60;
        tmp_expression_name_82 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_82 == NULL)) {
            tmp_expression_name_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_13;
        }
        tmp_called_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[210]);
        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_13;
        }
        tmp_left_name_59 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_59 == NULL)) {
            tmp_left_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 318;

            goto try_except_handler_13;
        }
        tmp_right_name_58 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_58 == NULL)) {
            tmp_right_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 318;

            goto try_except_handler_13;
        }
        tmp_left_name_58 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_59, tmp_right_name_58);
        if (tmp_left_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 318;

            goto try_except_handler_13;
        }
        tmp_right_name_59 = mod_consts[43];
        tmp_args_element_name_85 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_58, tmp_right_name_59);
        Py_DECREF(tmp_left_name_58);
        if (tmp_args_element_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 318;

            goto try_except_handler_13;
        }
        tmp_left_name_60 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_60 == NULL)) {
            tmp_left_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_args_element_name_85);

            exception_lineno = 318;

            goto try_except_handler_13;
        }
        tmp_right_name_60 = mod_consts[90];
        tmp_args_element_name_86 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_60, tmp_right_name_60);
        if (tmp_args_element_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_args_element_name_85);

            exception_lineno = 318;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_name_85, tmp_args_element_name_86};
            tmp_call_result_88 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_60, call_args);
        }

        Py_DECREF(tmp_called_name_60);
        Py_DECREF(tmp_args_element_name_85);
        Py_DECREF(tmp_args_element_name_86);
        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_instance_50;
        PyObject *tmp_call_result_89;
        tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_50 == NULL)) {
            tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 319;
        tmp_call_result_89 = CALL_METHOD_NO_ARGS(tmp_called_instance_50, mod_consts[52]);
        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_name_61;
        PyObject *tmp_expression_name_83;
        PyObject *tmp_call_result_90;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_left_name_61;
        PyObject *tmp_left_name_62;
        PyObject *tmp_right_name_61;
        PyObject *tmp_expression_name_84;
        PyObject *tmp_subscript_name_24;
        PyObject *tmp_right_name_62;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_called_instance_51;
        tmp_expression_name_83 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_83 == NULL)) {
            tmp_expression_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_13;
        }
        tmp_called_name_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_83, mod_consts[15]);
        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_13;
        }
        tmp_args_element_name_87 = mod_consts[21];
        tmp_args_element_name_88 = mod_consts[43];
        tmp_left_name_62 = mod_consts[92];
        tmp_expression_name_84 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_84 == NULL)) {
            tmp_expression_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);

            exception_lineno = 320;

            goto try_except_handler_13;
        }
        tmp_subscript_name_24 = mod_consts[31];
        tmp_right_name_61 = LOOKUP_SUBSCRIPT(tmp_expression_name_84, tmp_subscript_name_24);
        if (tmp_right_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);

            exception_lineno = 320;

            goto try_except_handler_13;
        }
        tmp_left_name_61 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_62, tmp_right_name_61);
        Py_DECREF(tmp_right_name_61);
        if (tmp_left_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);

            exception_lineno = 320;

            goto try_except_handler_13;
        }
        tmp_right_name_62 = mod_consts[93];
        tmp_args_element_name_89 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_61, tmp_right_name_62);
        Py_DECREF(tmp_left_name_61);
        if (tmp_args_element_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);

            exception_lineno = 320;

            goto try_except_handler_13;
        }
        tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_51 == NULL)) {
            tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);
            Py_DECREF(tmp_args_element_name_89);

            exception_lineno = 320;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 320;
        tmp_args_element_name_90 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_51,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);
            Py_DECREF(tmp_args_element_name_89);

            exception_lineno = 320;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_name_87, tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90};
            tmp_call_result_90 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_61, call_args);
        }

        Py_DECREF(tmp_called_name_61);
        Py_DECREF(tmp_args_element_name_89);
        Py_DECREF(tmp_args_element_name_90);
        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_instance_52;
        PyObject *tmp_call_result_91;
        tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_52 == NULL)) {
            tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 321;
        tmp_call_result_91 = CALL_METHOD_NO_ARGS(tmp_called_instance_52, mod_consts[55]);
        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_name_62;
        PyObject *tmp_call_result_92;
        tmp_called_name_62 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_name_62 == NULL)) {
            tmp_called_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 322;
        tmp_call_result_92 = CALL_FUNCTION_NO_ARGS(tmp_called_name_62);
        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_instance_53;
        PyObject *tmp_call_result_93;
        tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_53 == NULL)) {
            tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 323;
        tmp_call_result_93 = CALL_METHOD_NO_ARGS(tmp_called_instance_53, mod_consts[55]);
        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_93);
    }
    goto branch_end_29;
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_compexpr_left_31;
        PyObject *tmp_compexpr_right_31;
        PyObject *tmp_expression_name_85;
        tmp_compexpr_left_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_compexpr_left_31 == NULL)) {
            tmp_compexpr_left_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_compexpr_left_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_13;
        }
        tmp_expression_name_85 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_85 == NULL)) {
            tmp_expression_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_13;
        }
        tmp_compexpr_right_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_85, mod_consts[200]);
        if (tmp_compexpr_right_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_13;
        }
        tmp_condition_result_30 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_31, tmp_compexpr_right_31);
        Py_DECREF(tmp_compexpr_right_31);
        if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_13;
        }
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
        assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_30:;
    {
        PyObject *tmp_called_name_63;
        PyObject *tmp_call_result_94;
        tmp_called_name_63 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_name_63 == NULL)) {
            tmp_called_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 325;
        tmp_call_result_94 = CALL_FUNCTION_NO_ARGS(tmp_called_name_63);
        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_name_64;
        PyObject *tmp_call_result_95;
        tmp_called_name_64 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_name_64 == NULL)) {
            tmp_called_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 326;
        tmp_call_result_95 = CALL_FUNCTION_NO_ARGS(tmp_called_name_64);
        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_95);
    }
    goto branch_end_30;
    branch_no_30:;
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_compexpr_left_32;
        PyObject *tmp_compexpr_right_32;
        PyObject *tmp_left_name_63;
        PyObject *tmp_left_name_64;
        PyObject *tmp_right_name_63;
        PyObject *tmp_right_name_64;
        tmp_compexpr_left_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_compexpr_left_32 == NULL)) {
            tmp_compexpr_left_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_compexpr_left_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_13;
        }
        tmp_left_name_64 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_64 == NULL)) {
            tmp_left_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_13;
        }
        tmp_right_name_63 = mod_consts[90];
        tmp_left_name_63 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_64, tmp_right_name_63);
        if (tmp_left_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_13;
        }
        tmp_right_name_64 = mod_consts[43];
        tmp_compexpr_right_32 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_63, tmp_right_name_64);
        Py_DECREF(tmp_left_name_63);
        if (tmp_compexpr_right_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_13;
        }
        tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_32, tmp_compexpr_right_32);
        Py_DECREF(tmp_compexpr_right_32);
        if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_13;
        }
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
        assert(tmp_condition_result_31 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_31:;
    {
        PyObject *tmp_called_name_65;
        PyObject *tmp_expression_name_86;
        PyObject *tmp_call_result_96;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        tmp_expression_name_86 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_86 == NULL)) {
            tmp_expression_name_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto try_except_handler_13;
        }
        tmp_called_name_65 = LOOKUP_ATTRIBUTE(tmp_expression_name_86, mod_consts[217]);
        if (tmp_called_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto try_except_handler_13;
        }
        tmp_args_element_name_91 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_args_element_name_91 == NULL)) {
            tmp_args_element_name_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_args_element_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_65);

            exception_lineno = 329;

            goto try_except_handler_13;
        }
        tmp_args_element_name_92 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_name_92 == NULL)) {
            tmp_args_element_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_args_element_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_65);

            exception_lineno = 329;

            goto try_except_handler_13;
        }
        tmp_args_element_name_93 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_args_element_name_93 == NULL)) {
            tmp_args_element_name_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_args_element_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_65);

            exception_lineno = 329;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = {tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93};
            tmp_call_result_96 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_65, call_args);
        }

        Py_DECREF(tmp_called_name_65);
        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_96);
    }
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_left_name_65;
        PyObject *tmp_right_name_65;
        tmp_left_name_65 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_left_name_65 == NULL)) {
            tmp_left_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_left_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto try_except_handler_13;
        }
        tmp_right_name_65 = mod_consts[26];
        tmp_assign_source_72 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_65, tmp_right_name_65);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_72);
    }
    {
        PyObject *tmp_called_name_66;
        PyObject *tmp_expression_name_87;
        PyObject *tmp_call_result_97;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_left_name_66;
        PyObject *tmp_right_name_66;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_left_name_67;
        PyObject *tmp_right_name_67;
        tmp_expression_name_87 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_87 == NULL)) {
            tmp_expression_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_13;
        }
        tmp_called_name_66 = LOOKUP_ATTRIBUTE(tmp_expression_name_87, mod_consts[15]);
        if (tmp_called_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_13;
        }
        tmp_args_element_name_94 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_args_element_name_94 == NULL)) {
            tmp_args_element_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_args_element_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 333;

            goto try_except_handler_13;
        }
        tmp_args_element_name_95 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_name_95 == NULL)) {
            tmp_args_element_name_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_args_element_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 333;

            goto try_except_handler_13;
        }
        tmp_left_name_66 = mod_consts[12];
        tmp_left_name_67 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_67 == NULL)) {
            tmp_left_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 333;

            goto try_except_handler_13;
        }
        tmp_right_name_67 = mod_consts[218];
        tmp_int_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_67, tmp_right_name_67);
        if (tmp_int_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 333;

            goto try_except_handler_13;
        }
        tmp_right_name_66 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_right_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 333;

            goto try_except_handler_13;
        }
        tmp_args_element_name_96 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_left_name_66, tmp_right_name_66);
        Py_DECREF(tmp_right_name_66);
        if (tmp_args_element_name_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 333;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_name_94, tmp_args_element_name_95, tmp_args_element_name_96};
            tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_66, call_args);
        }

        Py_DECREF(tmp_called_name_66);
        Py_DECREF(tmp_args_element_name_96);
        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_name_67;
        PyObject *tmp_expression_name_88;
        PyObject *tmp_call_result_98;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_args_element_name_99;
        tmp_expression_name_88 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_88 == NULL)) {
            tmp_expression_name_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_13;
        }
        tmp_called_name_67 = LOOKUP_ATTRIBUTE(tmp_expression_name_88, mod_consts[217]);
        if (tmp_called_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_13;
        }
        tmp_args_element_name_97 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_args_element_name_97 == NULL)) {
            tmp_args_element_name_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_args_element_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_67);

            exception_lineno = 334;

            goto try_except_handler_13;
        }
        tmp_args_element_name_98 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_name_98 == NULL)) {
            tmp_args_element_name_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_args_element_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_67);

            exception_lineno = 334;

            goto try_except_handler_13;
        }
        tmp_args_element_name_99 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_args_element_name_99 == NULL)) {
            tmp_args_element_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_args_element_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_67);

            exception_lineno = 334;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = {tmp_args_element_name_97, tmp_args_element_name_98, tmp_args_element_name_99};
            tmp_call_result_98 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_67, call_args);
        }

        Py_DECREF(tmp_called_name_67);
        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_left_name_68;
        PyObject *tmp_right_name_68;
        tmp_left_name_68 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_name_68 == NULL)) {
            tmp_left_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_13;
        }
        tmp_right_name_68 = mod_consts[26];
        tmp_assign_source_73 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_68, tmp_right_name_68);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_73);
    }
    {
        PyObject *tmp_called_name_68;
        PyObject *tmp_expression_name_89;
        PyObject *tmp_call_result_99;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_left_name_69;
        PyObject *tmp_right_name_69;
        PyObject *tmp_args_element_name_101;
        tmp_expression_name_89 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_89 == NULL)) {
            tmp_expression_name_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_13;
        }
        tmp_called_name_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_89, mod_consts[211]);
        if (tmp_called_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_13;
        }
        tmp_left_name_69 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_69 == NULL)) {
            tmp_left_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 336;

            goto try_except_handler_13;
        }
        tmp_right_name_69 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_69 == NULL)) {
            tmp_right_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 336;

            goto try_except_handler_13;
        }
        tmp_args_element_name_100 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_69, tmp_right_name_69);
        if (tmp_args_element_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 336;

            goto try_except_handler_13;
        }
        tmp_args_element_name_101 = mod_consts[73];
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = {tmp_args_element_name_100, tmp_args_element_name_101};
            tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_68, call_args);
        }

        Py_DECREF(tmp_called_name_68);
        Py_DECREF(tmp_args_element_name_100);
        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_name_69;
        PyObject *tmp_expression_name_90;
        PyObject *tmp_call_result_100;
        PyObject *tmp_args_element_name_102;
        PyObject *tmp_args_element_name_103;
        PyObject *tmp_left_name_70;
        PyObject *tmp_right_name_70;
        tmp_expression_name_90 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_name_90 == NULL)) {
            tmp_expression_name_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_name_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto try_except_handler_13;
        }
        tmp_called_name_69 = LOOKUP_ATTRIBUTE(tmp_expression_name_90, mod_consts[210]);
        if (tmp_called_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto try_except_handler_13;
        }
        tmp_args_element_name_102 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_name_102 == NULL)) {
            tmp_args_element_name_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_args_element_name_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_69);

            exception_lineno = 337;

            goto try_except_handler_13;
        }
        tmp_left_name_70 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_70 == NULL)) {
            tmp_left_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_69);

            exception_lineno = 337;

            goto try_except_handler_13;
        }
        tmp_right_name_70 = mod_consts[90];
        tmp_args_element_name_103 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_70, tmp_right_name_70);
        if (tmp_args_element_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_69);

            exception_lineno = 337;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_name_102, tmp_args_element_name_103};
            tmp_call_result_100 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_69, call_args);
        }

        Py_DECREF(tmp_called_name_69);
        Py_DECREF(tmp_args_element_name_103);
        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_name_70;
        PyObject *tmp_expression_name_91;
        PyObject *tmp_call_result_101;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_left_name_71;
        PyObject *tmp_left_name_72;
        PyObject *tmp_right_name_71;
        PyObject *tmp_right_name_72;
        PyObject *tmp_args_element_name_105;
        PyObject *tmp_left_name_73;
        PyObject *tmp_right_name_73;
        tmp_expression_name_91 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_91 == NULL)) {
            tmp_expression_name_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_13;
        }
        tmp_called_name_70 = LOOKUP_ATTRIBUTE(tmp_expression_name_91, mod_consts[210]);
        if (tmp_called_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_13;
        }
        tmp_left_name_72 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_left_name_72 == NULL)) {
            tmp_left_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_left_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_70);

            exception_lineno = 338;

            goto try_except_handler_13;
        }
        tmp_right_name_71 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_right_name_71 == NULL)) {
            tmp_right_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_right_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_70);

            exception_lineno = 338;

            goto try_except_handler_13;
        }
        tmp_left_name_71 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_72, tmp_right_name_71);
        if (tmp_left_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_70);

            exception_lineno = 338;

            goto try_except_handler_13;
        }
        tmp_right_name_72 = mod_consts[43];
        tmp_args_element_name_104 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_71, tmp_right_name_72);
        Py_DECREF(tmp_left_name_71);
        if (tmp_args_element_name_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_70);

            exception_lineno = 338;

            goto try_except_handler_13;
        }
        tmp_left_name_73 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_name_73 == NULL)) {
            tmp_left_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_args_element_name_104);

            exception_lineno = 338;

            goto try_except_handler_13;
        }
        tmp_right_name_73 = mod_consts[90];
        tmp_args_element_name_105 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_73, tmp_right_name_73);
        if (tmp_args_element_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_args_element_name_104);

            exception_lineno = 338;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = {tmp_args_element_name_104, tmp_args_element_name_105};
            tmp_call_result_101 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_70, call_args);
        }

        Py_DECREF(tmp_called_name_70);
        Py_DECREF(tmp_args_element_name_104);
        Py_DECREF(tmp_args_element_name_105);
        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_instance_54;
        PyObject *tmp_call_result_102;
        tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_54 == NULL)) {
            tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 339;
        tmp_call_result_102 = CALL_METHOD_NO_ARGS(tmp_called_instance_54, mod_consts[14]);
        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_instance_55;
        PyObject *tmp_call_result_103;
        tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_55 == NULL)) {
            tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 340;
        tmp_call_result_103 = CALL_METHOD_NO_ARGS(tmp_called_instance_55, mod_consts[52]);
        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_name_71;
        PyObject *tmp_expression_name_92;
        PyObject *tmp_call_result_104;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_args_element_name_107;
        PyObject *tmp_args_element_name_108;
        PyObject *tmp_left_name_74;
        PyObject *tmp_left_name_75;
        PyObject *tmp_right_name_74;
        PyObject *tmp_expression_name_93;
        PyObject *tmp_subscript_name_25;
        PyObject *tmp_right_name_75;
        PyObject *tmp_args_element_name_109;
        PyObject *tmp_called_instance_56;
        tmp_expression_name_92 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_92 == NULL)) {
            tmp_expression_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_13;
        }
        tmp_called_name_71 = LOOKUP_ATTRIBUTE(tmp_expression_name_92, mod_consts[15]);
        if (tmp_called_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_13;
        }
        tmp_args_element_name_106 = mod_consts[21];
        tmp_args_element_name_107 = mod_consts[43];
        tmp_left_name_75 = mod_consts[92];
        tmp_expression_name_93 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_name_93 == NULL)) {
            tmp_expression_name_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);

            exception_lineno = 341;

            goto try_except_handler_13;
        }
        tmp_subscript_name_25 = mod_consts[31];
        tmp_right_name_74 = LOOKUP_SUBSCRIPT(tmp_expression_name_93, tmp_subscript_name_25);
        if (tmp_right_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);

            exception_lineno = 341;

            goto try_except_handler_13;
        }
        tmp_left_name_74 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_75, tmp_right_name_74);
        Py_DECREF(tmp_right_name_74);
        if (tmp_left_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);

            exception_lineno = 341;

            goto try_except_handler_13;
        }
        tmp_right_name_75 = mod_consts[93];
        tmp_args_element_name_108 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_74, tmp_right_name_75);
        Py_DECREF(tmp_left_name_74);
        if (tmp_args_element_name_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);

            exception_lineno = 341;

            goto try_except_handler_13;
        }
        tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_56 == NULL)) {
            tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);
            Py_DECREF(tmp_args_element_name_108);

            exception_lineno = 341;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 341;
        tmp_args_element_name_109 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_56,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_args_element_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);
            Py_DECREF(tmp_args_element_name_108);

            exception_lineno = 341;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = {tmp_args_element_name_106, tmp_args_element_name_107, tmp_args_element_name_108, tmp_args_element_name_109};
            tmp_call_result_104 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_71, call_args);
        }

        Py_DECREF(tmp_called_name_71);
        Py_DECREF(tmp_args_element_name_108);
        Py_DECREF(tmp_args_element_name_109);
        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_instance_57;
        PyObject *tmp_call_result_105;
        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_57 == NULL)) {
            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 342;
        tmp_call_result_105 = CALL_METHOD_NO_ARGS(tmp_called_instance_57, mod_consts[55]);
        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_74);
    }
    {
        PyObject *tmp_called_name_72;
        PyObject *tmp_call_result_106;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_72 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_name_72 == NULL)) {
            tmp_called_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto try_except_handler_13;
        }
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[219]);
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 344;
        tmp_call_result_106 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_72, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_call_result_107;
        tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_58 == NULL)) {
            tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 345;
        tmp_call_result_107 = CALL_METHOD_NO_ARGS(tmp_called_instance_58, mod_consts[55]);
        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_107);
    }
    branch_end_31:;
    {
        PyObject *tmp_called_instance_59;
        PyObject *tmp_call_result_108;
        tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_59 == NULL)) {
            tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 346;
        tmp_call_result_108 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_59,
            mod_consts[170],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_instance_60;
        PyObject *tmp_call_result_109;
        tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_60 == NULL)) {
            tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_instance_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_13;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 347;
        tmp_call_result_109 = CALL_METHOD_NO_ARGS(tmp_called_instance_60, mod_consts[55]);
        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_left_name_76;
        PyObject *tmp_right_name_76;
        tmp_left_name_76 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_left_name_76 == NULL)) {
            tmp_left_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_left_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto try_except_handler_13;
        }
        tmp_right_name_76 = mod_consts[26];
        tmp_assign_source_75 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_76, tmp_right_name_76);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_left_name_77;
        PyObject *tmp_right_name_77;
        PyObject *tmp_chr_arg_1;
        tmp_left_name_77 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_left_name_77 == NULL)) {
            tmp_left_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_left_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_13;
        }
        tmp_chr_arg_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_chr_arg_1 == NULL)) {
            tmp_chr_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_chr_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_13;
        }
        tmp_right_name_77 = BUILTIN_CHR(tmp_chr_arg_1);
        if (tmp_right_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_13;
        }
        tmp_assign_source_76 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_77, tmp_right_name_77);
        Py_DECREF(tmp_right_name_77);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_76);
    }
    branch_end_30:;
    branch_end_29:;
    branch_end_28:;
    branch_end_26:;
    branch_end_24:;
    branch_end_23:;
    branch_end_22:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_4, &exception_preserved_value_4, &exception_preserved_tb_4);

    if (exception_keeper_tb_12 == NULL) {
        exception_keeper_tb_12 = MAKE_TRACEBACK(frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_12);
    } else if (exception_keeper_lineno_12 != 0) {
        exception_keeper_tb_12 = ADD_TRACEBACK(exception_keeper_tb_12, frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_12);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_12, exception_keeper_tb_12);
    PUBLISH_EXCEPTION(&exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12);
    // Tried code:
    {
        bool tmp_condition_result_32;
        PyObject *tmp_compexpr_left_33;
        PyObject *tmp_compexpr_right_33;
        tmp_compexpr_left_33 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_33 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_33, tmp_compexpr_right_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_32 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = EXC_VALUE(PyThreadState_GET());
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_77);
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict___main__, mod_consts[220]);
    if (tmp_res == -1) CLEAR_ERROR_OCCURRED();

    goto branch_end_32;
    branch_no_32:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 264;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame) frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_14;
    branch_end_32:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_9;
    // End of try:
    try_end_13:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    goto try_end_12;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_12:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 247;

        goto try_except_handler_9;
    }
    goto loop_start_4;
    loop_end_4:;
    branch_no_18:;
    branch_end_17:;
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_5, &exception_preserved_value_5, &exception_preserved_tb_5);

    if (exception_keeper_tb_14 == NULL) {
        exception_keeper_tb_14 = MAKE_TRACEBACK(frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_14);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_keeper_tb_14 = ADD_TRACEBACK(exception_keeper_tb_14, frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_keeper_lineno_14);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_14, exception_keeper_tb_14);
    PUBLISH_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    // Tried code:
    {
        bool tmp_condition_result_33;
        PyObject *tmp_compexpr_left_34;
        PyObject *tmp_compexpr_right_34;
        tmp_compexpr_left_34 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_34 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_34, tmp_compexpr_right_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = EXC_VALUE(PyThreadState_GET());
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_78);
    }
    // Tried code:
    {
        PyObject *tmp_called_name_73;
        PyObject *tmp_call_result_110;
        PyObject *tmp_args_element_name_110;
        tmp_called_name_73 = LOOKUP_BUILTIN(mod_consts[149]);
        assert(tmp_called_name_73 != NULL);
        tmp_args_element_name_110 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_args_element_name_110 == NULL)) {
            tmp_args_element_name_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        assert(!(tmp_args_element_name_110 == NULL));
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 353;
        tmp_call_result_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_73, tmp_args_element_name_110);
        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_110);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_res = PyDict_DelItem((PyObject *)moduledict___main__, mod_consts[220]);
    if (tmp_res == -1) CLEAR_ERROR_OCCURRED();

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    tmp_res = PyDict_DelItem((PyObject *)moduledict___main__, mod_consts[220]);
    if (tmp_res == -1) CLEAR_ERROR_OCCURRED();

    goto branch_end_33;
    branch_no_33:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 229;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame) frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_15;
    branch_end_33:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 217;

        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_called_name_74;
        PyObject *tmp_call_result_111;
        tmp_called_name_74 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_name_74 == NULL)) {
            tmp_called_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame.f_lineno = 355;
        tmp_call_result_111 = CALL_FUNCTION_NO_ARGS(tmp_called_name_74);
        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6a4dbdadaf881348a44f3c2308feb9d6);
#endif
    popFrameStack();

    assertFrameObject(frame_6a4dbdadaf881348a44f3c2308feb9d6);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6a4dbdadaf881348a44f3c2308feb9d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a4dbdadaf881348a44f3c2308feb9d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a4dbdadaf881348a44f3c2308feb9d6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module___main__;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

