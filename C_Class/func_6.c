#include <stdio.h>
#define ARRAY_MAX 10

void PrintMenu(void);
void InputStack(void *top);
void SearchStack(void *search);

int array[ARRAY_MAX] = { 0 };

int func_6(void) {

	int nSelect, Top = -1, Search;

	for (;;) {
		PrintMenu();
		scanf("%d", &nSelect);
		switch (nSelect) {
		case 1:
			printf("새 항목을 추가합니다.\n\n");
			InputStack(&Top);
			break;
		case 2:
			printf("검색할 배열 번호를 입력하세요 : \n");
			scanf("%d", &Search);
			SearchStack(&Search);
			break;
		case 3:
			printf("전체 내용을 출력합니다.\n\n");
			break;
		case 4:
			printf("기존 항목을 삭제합니다.\n\n");
			break;
		case 0:
			printf("Bye~~!\n\n");
			return 0;
		default:
			printf("잘못된 입력입니다.\n\n");
		}
	}
}

void PrintMenu(void) {
	printf("[1]New  [2]Search  [3]Print  [4]Remove  [0]Exit\n");
}

void InputStack(void *top) {

}

void SearchStack(void *search) {

}