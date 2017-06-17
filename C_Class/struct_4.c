#include <stdio.h>

struct data {
	char name[20];
	double h;
	double w;
};

void input(struct data stu[]);
void sort(struct data stu[]);
void output(struct data stu[]);

int struct_4(void) {
	struct data stu[5];
	input(stu);
	sort(stu);
	output(stu);
	return 0;
}

void input(struct data stu[]) {
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%s %lf %lf", stu[i].name, &stu[i].h, &stu[i].w);
	}
}

void sort(struct data stu[]) {
	int i, j;
	struct data temp;
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (stu[i].h > stu[j].h) {
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
}

void output(struct data stu[]) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("%s %.1lf %.1lf\n", stu[i].name, stu[i].h, stu[i].w);
	}
}