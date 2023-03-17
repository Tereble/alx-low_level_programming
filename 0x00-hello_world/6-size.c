#include <stdio.h>
int main(void)
{
	int intType
	char charType
	long int lgType
	long long int llType
	float ftype
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(lgType));
	printf("Size of a long long int: %zu bytes\n", sizeof(llType));
	printf("Size of a float: %zu bytes\n", sizeof(fType));
	return 0;
}
