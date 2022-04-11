/*
심화문제 2: 조건 연산자 이용
세 개의 정수를 입력받아 가장 큰 수를 출력하는 프로그램을
조건 연산자를 사용하여 작성하세요.
학번: 202022338
이름: 오고은
날짜: 20220330
*/

#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int max;

	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &num1);

	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &num2);

	printf("세 번째 정수를 입력하세요: ");
	scanf("%d", &num3);

	max = (num1 > num2) ? num1 : num2;

	max = (max > num3) ? max : num3;
	
	printf("가장 큰 수는 %d 입니다.", max);

	return 0;
}