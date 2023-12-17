
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"


/**
 *
 */
ZEPHIR_INIT_CLASS(Stub_Oo_OoParams)
{
	ZEPHIR_REGISTER_CLASS(Stub\\Oo, OoParams, stub, oo_ooparams, stub_oo_ooparams_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Stub_Oo_OoParams, createThisClassWithoutWriteCurrentNamespace)
{
	zend_long ZEPHIR_LAST_CALL_STATUS;
	object_init_ex(return_value, stub_oo_ooparams_ce);
	if (zephir_has_constructor(return_value)) {
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 0);
		zephir_check_call_status();
	}

	return;
}

PHP_METHOD(Stub_Oo_OoParams, createOtherClassWithoutWriteCurrentNamespace)
{
	zend_long ZEPHIR_LAST_CALL_STATUS;
	object_init_ex(return_value, stub_oo_oodynamica_ce);
	if (zephir_has_constructor(return_value)) {
		ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 0);
		zephir_check_call_status();
	}

	return;
}

PHP_METHOD(Stub_Oo_OoParams, setAge)
{
	zval *age_param = NULL;
	zend_long age;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(age)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &age_param);
	RETURN_LONG(age);
}

PHP_METHOD(Stub_Oo_OoParams, setAverage)
{
	zval *average_param = NULL;
	double average;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(average)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &average_param);
	average = zephir_get_doubleval(average_param);
	RETURN_DOUBLE(average);
}

PHP_METHOD(Stub_Oo_OoParams, setName)
{
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_CTOR(&name);
}

PHP_METHOD(Stub_Oo_OoParams, setEnabled)
{
	zval *enabled_param = NULL;
	zend_bool enabled;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enabled_param);
	RETURN_BOOL(enabled);
}

PHP_METHOD(Stub_Oo_OoParams, setList)
{
	zval *someList_param = NULL;
	zval someList;

	ZVAL_UNDEF(&someList);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(someList)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &someList_param);
	zephir_get_arrval(&someList, someList_param);
	RETURN_CTOR(&someList);
}

PHP_METHOD(Stub_Oo_OoParams, setStrictAge)
{
	zval *age_param = NULL;
	zend_long age;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(age)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &age_param);
	if (UNEXPECTED(Z_TYPE_P(age_param) != IS_LONG)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'age' must be of the type int"));
		RETURN_NULL();
	}
	age = Z_LVAL_P(age_param);
	RETURN_LONG(age);
}

PHP_METHOD(Stub_Oo_OoParams, setStrictAverage)
{
	zval *average_param = NULL;
	double average;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(average)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &average_param);
	if (UNEXPECTED(Z_TYPE_P(average_param) != IS_DOUBLE)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'average' must be of the type double"));
		RETURN_NULL();
	}
	average = Z_DVAL_P(average_param);
	RETURN_DOUBLE(average);
}

PHP_METHOD(Stub_Oo_OoParams, setStrictNameFromZephirLand)
{
	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_LONG(&_0, 12345);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "setstrictname", NULL, 0, &_0);
	zephir_check_call_status();
	return;
}

PHP_METHOD(Stub_Oo_OoParams, setStrictName)
{
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &name_param);
	if (UNEXPECTED(Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(name_param) == IS_STRING)) {
		zephir_get_strval(&name, name_param);
	} else {
		ZVAL_NULL(&name);
	}
	RETURN_CTOR(&name);
}

PHP_METHOD(Stub_Oo_OoParams, setStrictEnabled)
{
	zval *enabled_param = NULL;
	zend_bool enabled;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enabled_param);
	RETURN_BOOL(enabled);
}

PHP_METHOD(Stub_Oo_OoParams, setStrictList)
{
	zval *someList_param = NULL;
	zval someList;

	ZVAL_UNDEF(&someList);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(someList)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &someList_param);
	ZVAL_COPY(&someList, someList_param);
	RETURN_CTOR(&someList);
}

PHP_METHOD(Stub_Oo_OoParams, setAgeDefault)
{
	zval *age_param = NULL;
	zend_long age;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(age)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &age_param);
	if (!age_param) {
		age = 25;
	} else {
		}
	RETURN_LONG(age);
}

PHP_METHOD(Stub_Oo_OoParams, setAverageDefault)
{
	zval *average_param = NULL;
	double average;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(average)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &average_param);
	if (!average_param) {
		average = (double) 25;
	} else {
		average = zephir_get_doubleval(average_param);
	}
	RETURN_DOUBLE(average);
}

PHP_METHOD(Stub_Oo_OoParams, setNameDefault)
{
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 0, 1, &name_param);
	if (!name_param) {
		ZVAL_NULL(&name);
		ZVAL_STRING(&name, "peter");
	} else {
		zephir_get_strval(&name, name_param);
	}
	RETURN_CTOR(&name);
}

PHP_METHOD(Stub_Oo_OoParams, setEnabledDefault)
{
	zval *enabled_param = NULL;
	zend_bool enabled;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &enabled_param);
	if (!enabled_param) {
		enabled = 0;
	} else {
		}
	RETURN_BOOL(enabled);
}

PHP_METHOD(Stub_Oo_OoParams, setListDefault)
{
	zval *someList_param = NULL;
	zval someList;

	ZVAL_UNDEF(&someList);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ARRAY(someList)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 0, 1, &someList_param);
	if (!someList_param) {
		ZVAL_NULL(&someList);
		array_init(&someList);
	} else {
		zephir_get_arrval(&someList, someList_param);
	}
	RETURN_CTOR(&someList);
}

PHP_METHOD(Stub_Oo_OoParams, setConstAge)
{
	zval *age_param = NULL;
	zend_long age;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(age)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &age_param);
	RETURN_LONG(age);
}

PHP_METHOD(Stub_Oo_OoParams, setConstAverage)
{
	zval *average_param = NULL;
	double average;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(average)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &average_param);
	average = zephir_get_doubleval(average_param);
	RETURN_DOUBLE(average);
}

PHP_METHOD(Stub_Oo_OoParams, setObject)
{
	zval *obj, obj_sub;

	ZVAL_UNDEF(&obj_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &obj);
	RETVAL_ZVAL(obj, 1, 0);
	return;
}

PHP_METHOD(Stub_Oo_OoParams, setCallable)
{
	zval *obj, obj_sub;

	ZVAL_UNDEF(&obj_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &obj);
	RETVAL_ZVAL(obj, 1, 0);
	return;
}

PHP_METHOD(Stub_Oo_OoParams, setResource)
{
	zval *obj, obj_sub;

	ZVAL_UNDEF(&obj_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_RESOURCE(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &obj);
	RETVAL_ZVAL(obj, 1, 0);
	return;
}

PHP_METHOD(Stub_Oo_OoParams, setObjectClassCast)
{
	zval *parameter, parameter_sub;

	ZVAL_UNDEF(&parameter_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT_OF_CLASS(parameter, stub_oo_param_ce)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &parameter);
	RETVAL_ZVAL(parameter, 1, 0);
	return;
}

