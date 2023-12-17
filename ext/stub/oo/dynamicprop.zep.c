
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
#include "kernel/object.h"
#include "kernel/memory.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/operators.h"


/**
 *
 */
ZEPHIR_INIT_CLASS(Stub_Oo_DynamicProp)
{
	ZEPHIR_REGISTER_CLASS(Stub\\Oo, DynamicProp, stub, oo_dynamicprop, stub_oo_dynamicprop_method_entry, 0);

	zend_declare_property_null(stub_oo_dynamicprop_ce, SL("test"), ZEND_ACC_PUBLIC);
	return SUCCESS;
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyInt)
{
	zval *property_param = NULL, _0;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	ZVAL_NULL(&_0);
	ZVAL_LONG(&_0, 10);
	zephir_update_property_zval_zval(this_ptr, &property, &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyBoolTrue)
{
	zval *property_param = NULL, __$true;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_BOOL(&__$true, 1);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	zephir_update_property_zval_zval(this_ptr, &property, &__$true);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyBoolFalse)
{
	zval *property_param = NULL, __$false;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_BOOL(&__$false, 0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	zephir_update_property_zval_zval(this_ptr, &property, &__$false);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyString)
{
	zval *property_param = NULL, _0;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	ZVAL_NULL(&_0);
	ZVAL_STRING(&_0, "string");
	zephir_update_property_zval_zval(this_ptr, &property, &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyChar)
{
	char a;
	zval *property_param = NULL, _0;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	a = 'A';
	ZVAL_NULL(&_0);
	ZVAL_LONG(&_0, a);
	zephir_update_property_zval_zval(this_ptr, &property, &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyUChar)
{
	unsigned char a;
	zval *property_param = NULL, _0;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	a = 'A';
	ZVAL_NULL(&_0);
	ZVAL_LONG(&_0, a);
	zephir_update_property_zval_zval(this_ptr, &property, &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyNull)
{
	zval *property_param = NULL, __$null;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_NULL(&__$null);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	zephir_update_property_zval_zval(this_ptr, &property, &__$null);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyVariableInt)
{
	zend_long a;
	zval *property_param = NULL, _0;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	a = 10;
	ZVAL_NULL(&_0);
	ZVAL_LONG(&_0, a);
	zephir_update_property_zval_zval(this_ptr, &property, &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyVariableString)
{
	zval *property_param = NULL, a;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&a);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	ZVAL_NULL(&a);
	ZVAL_STRING(&a, "test");
	zephir_update_property_zval_zval(this_ptr, &property, &a);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyVariableBoolTrue)
{
	zend_bool a;
	zval *property_param = NULL, _0;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	a = 1;
	ZVAL_NULL(&_0);
	ZVAL_BOOL(&_0, a);
	zephir_update_property_zval_zval(this_ptr, &property, &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setPropertyVariableBoolFalse)
{
	zend_bool a;
	zval *property_param = NULL, _0;
	zval property;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&property);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(property)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &property_param);
	if (UNEXPECTED(Z_TYPE_P(property_param) != IS_STRING && Z_TYPE_P(property_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'property' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(property_param) == IS_STRING)) {
		zephir_get_strval(&property, property_param);
	} else {
		ZVAL_NULL(&property);
	}
	a = 0;
	ZVAL_NULL(&_0);
	ZVAL_BOOL(&_0, a);
	zephir_update_property_zval_zval(this_ptr, &property, &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setExistingStringProperty)
{
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_NULL(&_0);
	ZVAL_STRING(&_0, "works");
	zephir_update_property_zval(this_ptr, ZEND_STRL("test"), &_0);
}

PHP_METHOD(Stub_Oo_DynamicProp, setExistingStringPropertyString)
{
	zval *value_param = NULL;
	zval value;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params(1, 1, 0, &value_param);
	if (UNEXPECTED(Z_TYPE_P(value_param) != IS_STRING && Z_TYPE_P(value_param) != IS_NULL)) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'value' must be of the type string"));
		RETURN_MM_NULL();
	}
	if (EXPECTED(Z_TYPE_P(value_param) == IS_STRING)) {
		zephir_get_strval(&value, value_param);
	} else {
		ZVAL_NULL(&value);
	}
	zephir_update_property_zval(this_ptr, ZEND_STRL("eproperty"), &value);
}

PHP_METHOD(Stub_Oo_DynamicProp, setNonExistingStringProperty)
{
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_NULL(&_0);
	ZVAL_STRING(&_0, "works");
	zephir_update_property_zval(this_ptr, ZEND_STRL("property"), &_0);
}

