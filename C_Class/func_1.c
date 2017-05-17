#include <stdio.h>

void ex_func1(int *sa, int *sb) {
	*sa += 5, *sb += 5; // Call by Reference
	printf("°ª1 : %d, %d\n", *sa, *sb);
}

int func_1(void) {
	int ma = 100, mb = 200;
	ex_func1(&ma, &mb);
	printf("°ª2 : %d, %d\n", ma, mb);
	return 0;
}