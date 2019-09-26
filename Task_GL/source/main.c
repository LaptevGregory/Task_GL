// Here will be main() function.
// It should receive an argument vector from command line.
// The first argument sould be a char array (string).
// The function to_lower_case() should be called inside of main().
// Char array (string) should be passed as an argument to_lower_case() function.

#include "../include/to_lower_case.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{	
	if(argc == 1)
	{
		printf("Error: Add argument\n");
		return -1;
	}
	else if(argc > 2)
	{
		printf("Error: Too many arguments. The number of arguments must be 1.\n");
		return(-2);
	}
	
	char str[strlen(argv[1])+1];
	char* ptoa = argv[1];

	for(int i = 0; i < sizeof(str); i++)
	{
		str[i] = *ptoa++; 		
	}
	printf("%s\nLine length %lu characters.\n", str, sizeof(str)-1);

	//diff
	char str1[strlen(argv[1])+1];
	char* ptos;
	//diff

	if(argc == 2)
 	{	
		//diff
		ptos = to_lower_case(str);
		for(int i = 0; i < sizeof(str1); i++)
			str1[i] = *(ptos+i);
		printf("%s", str1);
		//diff

		//to_lower_case(&str[0]);
		//printf("%s", str);
	}
	
	printf("\n");
	return 0;
}


