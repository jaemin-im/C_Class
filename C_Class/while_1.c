#include <stdio.h>
#include <stdlib.h>

int w_1(void) {
	int num, i = 1, sum = 0;
	scanf("%d", &num);
	while (i <= num) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}