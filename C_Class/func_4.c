#include <stdio.h>

int GetMax(int a, int b, int c) {
	int nMax;
	if (a > b) {
		if (a < c) {
			nMax = c;
		}
		else nMax = a;
	}
	else if (b > c) {
		nMax = b;
	}
	else nMax = c;
	return nMax;
}

int func_4(void) {
	int nResult = 0;
	printf("MAX : %d\n", GetMax(1, 2, 3));
	printf("MAX : %d\n", GetMax(3, 1, 2));
	return 0;
}