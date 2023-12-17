
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


ZEPHIR_INIT_CLASS(Stub_Properties_PropertyUpdate)
{
	ZEPHIR_REGISTER_CLASS(Stub\\Properties, PropertyUpdate, stub, properties_propertyupdate, stub_properties_propertyupdate_method_entry, 0);

	zend_declare_property_null(stub_properties_propertyupdate_ce, SL("p1"), ZEND_ACC_PUBLIC);
	return SUCCESS;
}

PHP_METHOD(Stub_Properties_PropertyUpdate, update1)
{
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_0);
	ZVAL_NULL(&_0);
	ZVAL_STRING(&_0, "aaa");
	zephir_update_property_array_append(this_ptr, SL("p1"), &_0);
}

