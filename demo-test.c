#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"
#include "function.h"

void testAdd(void)
{
    CU_ASSERT(7 == add(3 , 4));
    CU_ASSERT(9 == add(3 , 6));
   // CU_ASSERT(14 == add(13 , 4));
}

int main(){
    CU_pSuite pSuite;

    CU_initialize_registry();
    pSuite = CU_add_suite("Suite", NULL, NULL);
    CU_add_test(pSuite, "test of Add()", testAdd);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    int fails = CU_get_number_of_failures();
    CU_cleanup_registry();
    printf("%d\n", fails);

    return fails > 0;
}
