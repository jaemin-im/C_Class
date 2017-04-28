#include <stdio.h>

int array_6(void) {
	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			aList[i][3] += aList[i][j];
			aList[2][j] += aList[i][j];
			aList[2][3] += aList[i][j];
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", aList[i][j]);
		}
		printf("\n");
	}
	return 0;
}