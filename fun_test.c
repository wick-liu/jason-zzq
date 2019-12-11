#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"
#include "function.h"

int init_suite1(void)
{
    return 0;
}

int clean_suite1(void)
{
    return 0;
}

void testAdd(void)
{
    CU_ASSERT(7 == add(3 , 4));
}

int main(){
    CU_initialize_registry();
    CU_pSuite pSuite = CU_add_suite("Suite", init_suite1, clean_suite1);
    CU_add_test(pSuite, "test of Add()", testAdd);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}
