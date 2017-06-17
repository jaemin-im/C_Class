#include <stdio.h>

struct data {
	char name[20];
	int eng, math;
};

int struct_2(void) {
	struct data s1;
	struct data s2;

	scanf("%s %d %d", s1.name, &s1.eng, &s1.math);
	scanf("%s %d %d", s2.name, &s2.eng, &s2.math);

	printf("%s ЦђБе : %d\n", s1.name, (s1.eng + s1.math) / 2);
	printf("%s ЦђБе : %d\n", s2.name, (s2.eng + s2.math) / 2);

	return 0;
}