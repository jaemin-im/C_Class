#include <stdio.h>

int array_3(void) {
	int aList[5] = { 30,40,10,50,20 };
	char szBuffer[6] = { 'H','e','l','l','o','\0' };
	char szData[8] = { "Hello" };
	char *pszBuffer = "Hello";

	puts(szBuffer);
	puts(szData);
	puts(pszBuffer);

	return 0;
}