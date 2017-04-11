#include <stdio.h>

int playground(void) {
	int i, w, h, max = 0;
	for (i = 0; i < 3; i++) {
		scanf("%d %d", &w, &h);
		if (w*h >= max) max = w*h;
	}
	printf("%d\n", max);
}