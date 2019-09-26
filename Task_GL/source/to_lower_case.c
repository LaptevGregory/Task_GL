// Here will be to_lower_case() function.
// It should receive a char array (string) as an argument.
// Function to_lower_case() returns the same string in lowercase.
// Example: DarthVader -> darthvader, WhoIsYourDaddy -> whoisyourdaddy, etc

#include <ctype.h>
#include <stdio.h> 

char* to_lower_case(char string[])
{
	for(int i = 0; string[i] != NULL; i++)
	{
		string[i] = tolower(string[i]);
	}
	return(&string[0]);
}

/*
void to_lower_case(char* string)
{
	while(*string != NULL)
	{
		*string = tolower(*string);
		string++;
	}
}
*/
