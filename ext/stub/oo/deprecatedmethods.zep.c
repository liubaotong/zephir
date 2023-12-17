
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
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Stub_Oo_DeprecatedMethods)
{
	ZEPHIR_REGISTER_CLASS(Stub\\Oo, DeprecatedMethods, stub, oo_deprecatedmethods, stub_oo_deprecatedmethods_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Stub_Oo_DeprecatedMethods, publicDeprecated)
{

	RETURN_BOOL(1);
}

PHP_METHOD(Stub_Oo_DeprecatedMethods, normalMethod)
{
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "privatedeprecated", NULL, 69);
	zephir_check_call_status();
	return;
}

PHP_METHOD(Stub_Oo_DeprecatedMethods, privateDeprecated)
{

	RETURN_BOOL(1);
}

