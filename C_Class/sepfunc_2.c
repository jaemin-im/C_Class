#include <stdio.h>

void InitList(int *aList) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("정수를 입력하세요. : ");
		scanf("%d", &aList[i]);
	}
}

void SortList(int *aList) {
	int i = 0, j = 0, nTmp = 0;
	for (i = 0; i < 4; ++i) {
		for (j = i + 1; j < 5; ++j) {
			if (aList[j] < aList[i]) {
				nTmp = aList[j];
				aList[j] = aList[i];
				aList[i] = nTmp;
			}
		}
	}

}

void PrintList(int *aList) {
	int i = 0;
	for (i = 0; i < 5; ++i) {
		printf("%d\t", aList[i]);
		putchar('\n');
	}
}

int sepfunc_2(void) {
	int aList[5] = { 0 };
	InitList(aList);
	SortList(aList);
	PrintList(aList);
	return 0;
}