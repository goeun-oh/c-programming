/*
연습문제1. do-while문 작성

학번: 202022338
이름: 오고은
날짜: 2022-04-13
*/
/
#include <stdio.h>

int main()
{
	int menu = 0;
	do
	{
		printf("메뉴를 입력하세요(1~3): ");
		scanf("%d", &menu);

	} while (menu>3 || menu<1 );

	printf("선택한 메뉴는 %d번 입니다.\n", menu);

	return 0;
}