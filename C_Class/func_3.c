#include <stdio.h>

int Add(int a, int b) {
	int nData = 0;
	nData = a + b;
	return nData;
}

int func_3(void) {
	int nResult = 0;

	printf("Result : %d\n", Add(3, 4));

	return 0;
}