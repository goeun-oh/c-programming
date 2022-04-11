/*
확인문제 2 함수 getchar putchar 이용하여 하나의 문자를 입력, 출력하는 프로그램 작성
학번: 202022338
이름: 오고은
날짜: 20220323
*/

#include <stdio.h>
int main()
{
	printf("문자를 하나 입력하세요: ");
	char a = getchar();
	printf("입력된 문자는: ");
	putchar(a);
	printf("\n");

	return 0;
}
	
