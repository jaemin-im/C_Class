#include <stdio.h>

int array_2(void) {
	int aList[5] = { 10,20,30,40,50 };
	int aListNew[5] = { 0 };
	int i = 0;

	for (i = 0; i < 5; i++) {
		aListNew[i] = aList[i];
	}

	for (i = 0; i < 5; ++i) {
		printf("%d\t", aListNew[i]);
	}
	putchar('\n');

	return 0;
}