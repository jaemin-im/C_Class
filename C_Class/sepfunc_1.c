#include <stdio.h>

int GetData(void) {
	int num;
	scanf("%d", &num);
	return num;
}

int GetMax(int a, int b, int c) {
	if (a > b) {
		if (a > c) return a;
		else return c;
	}
	else {
		if (b > c) return b;
		else return c;
	}
}

void PrintData(int a, int b, int c, int Max) {
	printf("%d, %d, %d 중 가장 큰 수는 %d입니다.\n", a, b, c, Max);
}

int sepfunc_1(void) {
	int aList[3] = { 0 };
	int nMax, i = 0;

	for (i = 0; i < 3; i++) {
		aList[i] = GetData();
	}

	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);

	return 0;
}
