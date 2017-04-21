#include <stdio.h>

#define ARRAY_SIZE 10


int array[ARRAY_SIZE];


int selection_sort(void) {
	int i, j, temp;

	for (i = 0; i < ARRAY_SIZE; i++) {
		scanf("%d", &array[i]);
	}

	for (i = 0; i < ARRAY_SIZE-1; i++) {
		for (j = i + 1; j < ARRAY_SIZE; i++) {
			if (array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%d", array[i]);
	}
	
	return 0;
}