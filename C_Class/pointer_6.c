#include <stdio.h>
int pointer_6(void) {
	int arr[2][3] = { {10,20,30}, {40,50,60} };
	printf("%d %d %d\n", arr[0][0], *arr[0], **arr);
	printf("%d %d %d\n", arr[0][1], *(arr[0] + 1), *(*arr + 1));
	printf("%d %d %d\n", arr[1][0], *arr[1], **(arr + 1));
	printf("%d %d %d\n", arr[1][1], *(arr[1] + 1), *(*(arr + 1) + 1));
	return 0;
}