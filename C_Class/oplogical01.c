#include <stdio.h>

int oplogical01(void) {
	int nInput = 3, bResult = 0;
	bResult = nInput < 4 || nInput >= 60;
	printf("Result : %d (1:True, 0:False)\n", bResult);
	return 0;
}