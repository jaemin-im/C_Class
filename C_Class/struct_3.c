#include <stdio.h>

struct vision {
	double left;
	double right;
};

void exchange(struct vision* max);

int struct_3(void) {
	struct vision robot;

	scanf("%lf %lf", &robot.left, &robot.right);

	exchange(&robot);

	printf("%.1lf %.1lf", robot.left, robot.right);

	return 0;
}

void exchange(struct vision* max) {
	double temp;
	temp = max->left;
	max->left = max->right;
	max->right = temp;
}