#include <stdio.h>

int oprelational01(void) {
	int x = 5, y = 10;
	printf("%d\n", x == y);
	printf("%d\n", x != y);
	printf("%d\n", x > 5);
	printf("%d\n", y < 5);

	printf("%d\n", y >= 10);
	printf("%d\n", y <= x + 5);

	return 0;
}