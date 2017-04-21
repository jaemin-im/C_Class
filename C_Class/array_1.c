#include <stdio.h>

int array_1(void) {
	int aList[5] = { 10,20,30,40,50 };
	int i = 0;

	for (i = 0; i < 5; ++i) {
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	aList[0] = 100;
	aList[3] = 200;

	aList[0] = aList[4];
	aList[1] += aList[2];
	aList[4] = aList[3] * 2;

	for (i = 0; i < 5; ++i) {
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	return 0;
}