#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <CUnit/Automated.h>

#include "cunit_cases.h"

int main(int argc, char *argv[])
{
    CU_pSuite pSuite = NULL;

    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry()) {
        return CU_get_error();
    }

    // Add a suite to the registry
    pSuite = CU_add_suite("To Lower Case", init_suite1, clean_suite1);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the tests to the suite
    if ((NULL == CU_add_test(pSuite, "test_return_null_argument", test_return_null_argument)) ||
	(NULL == CU_add_test(pSuite, "test_return_many_arguments", test_return_many_arguments)) ||
	(NULL == CU_add_test(pSuite, "test_return_success_work", test_return_success_work))) 
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}


