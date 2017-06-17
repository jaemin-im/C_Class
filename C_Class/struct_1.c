#include <stdio.h>

struct profile {
	int age;
	double height;
	char *np;
};

struct student {
	struct profile pf;
	int num;
	double grade;
};

int struct_1(void) {
	struct student s1;
	s1.pf.age = 17;
	s1.pf.height = 172.3;
	s1.pf.np = "임재민";
	s1.num = 14;
	s1.grade = 1;
	
	printf("이름 : %s\n", s1.pf.np);
	printf("나이 : %d\n", s1.pf.age);
	printf(" 키  : %.1lf\n", s1.pf.height);
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	return 0;
}