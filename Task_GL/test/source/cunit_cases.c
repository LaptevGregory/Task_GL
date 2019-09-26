int init_suite1(void)
{return 0;}

int clean_suite1(void)
{return 0;}

void test_return_null_argument(void){
	
	int argc = 1;
	char* argv[argc+1] = {"cmake", '0'};

	//int ret = main(argc, argv); ???
	CU_ASSERT_EQUAL(ret, -1);
}

void test_return_many_arguments(void){

	int argc = 3;
	char* argv[argc+1] = {"cmake", "string1", "srting2", '0'}
	//int ret = main(argc, argv); ???
	CU_ASSERT_EQUAL(ret, -2);
}

void test_return_success_work(void){

	int argc = 2;
	char* argv[argc+1] = {"cmake", "string1", '0'};
	//char srt1[] = {"string1"};
		
	//int ret = main(argc, argv); ???
	CU_ASSERT_EQUAL(ret, 0);
}

void test_success_work(void);{

	int argc = 2;
	char* argv[argc+1] = {"cmake", "StRinG1", '0'};
	char srt1[] = {"string1"};
		
	//main(argc, argv); ???
	CU_ASSERT_NSTRING_EQUAL(/*string_in_main*/, str1);
}



