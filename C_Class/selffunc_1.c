#include <stdio.h>

int fact(int n) {
	if (n == 1) return 1;
	else return (n*fact(n - 1));
}

void selffunc_1(void) {
	int x;
	scanf("%d", &x);
	printf("%d!ÀÇ °ª : %d\n", x, fact(x));
}