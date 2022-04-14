/*
확인문제2. 사용자로부터 2~9 범위의 정수를 입력받고 
그 단의 구구단을 출력하는 프로그램을 작성하시오.

학번: 202022338
이름: 오고은
날짜: 2022-04-14
*/

#include <stdio.h>

int main()
{
	int input;
	int i;
	int mul;

	printf("출력하고 싶은 단: ");
	scanf("%d", &input);

	for (i = 1; i < 10; i++)
	{
		mul = input * i;
		printf("%d*%d=%d\n", input, i, mul);
	}

	return 0;
}