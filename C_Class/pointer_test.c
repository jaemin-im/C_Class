#include <stdio.h>

int pointer_test(void) {
	int num = 50;
	int *pnum = NULL;

	pnum = &num;

	printf("%d\n%p\n%p\n%d\n", num, &num, pnum, *pnum);
	return 0;
}