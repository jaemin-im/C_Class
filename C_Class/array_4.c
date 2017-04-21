#include <stdio.h>

int array_4(void) {
	int nums[] = { 1,2,3,4,5 };
	int tot = 0, i;
	for (i = 0; i<5; i++) {
		tot += nums[i];
	}
	printf("%d\n", tot);
	return 0;
}