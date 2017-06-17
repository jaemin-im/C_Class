#include <stdio.h>

void pswap(char **ppa, char **ppb);

int pointerswap(void) {
	char *pa = "success";
	char *pb = "faliure";

	printf("%s %s\n", pa, pb);

	pswap(&pa, &pb);

	printf("%s %s\n", pa, pb);

	return 0;
}

void pswap(char **ppa, char **ppb) {
	char *swap;
	swap = *ppa;
	*ppa = *ppb;
	*ppb = swap;
}