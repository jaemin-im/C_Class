#include <stdio.h>

void Change(int *a, int *b) {
	void *temp = NULL;
	temp = *a;
	*a = *b;
	*b = temp;
}

int func_2(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Change(&num1, &num2);
	printf("%d %d", num1, num2);
	return 0;
}