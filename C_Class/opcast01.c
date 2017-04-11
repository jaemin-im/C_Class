#include <stdio.h>

int opcast01(void) {
	int nInput = 10, nSelect = 0;
	nSelect = nInput <= 10 ? 10 : 20;
	printf("%d\n", nSelect);

	return 0;
}