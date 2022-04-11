/*
조건문 작성
학번: 202022338
이름: 오고은
날짜: 20220405
*/

#include <stdio.h>

int main()
{
	int x;
	printf("정수를 입력하세요.: ");
	scanf("%d", &x);
	if (x % 5)
	{
		printf("입력받은 숫자는 5의 배수가 아닙니다.\n");
	}
	else
	{
		printf("입력받은 숫자는 5의 배수입니다.\n");
	}

	return 0;
}