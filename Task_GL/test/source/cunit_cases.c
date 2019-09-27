//#include <stdio.h>
#include <CUnit/CUnit.h>
//#include <CUnit/Basic.h>
//#include <CUnit/Automated.h>
#include "../../include/to_lower_case.h"
#include "../../source/to_lower_case.c"

int init_suite1(void)
{return 0;}

int clean_suite1(void)
{return 0;}

void test_to_lower_case_work_success(void){
	char string1[] = "StRiNg1";
	char* ptos = to_lower_case(string1);
	for(int i = 0; i < sizeof(string1); i++)
			string1[i] = *(ptos+i);
	char return_string[] = "string1";
	CU_ASSERT_NSTRING_EQUAL(string1, return_string, sizeof(string1));
}