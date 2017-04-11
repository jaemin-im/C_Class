#include <stdio.h>
int w_4(void)
{
	int num, i = 31;
	scanf("%d", &num);
	while (i>=0) {
		printf("%d", (num >> i) & 1);
		i--;
	}
	printf("\n");
	return 0;
}