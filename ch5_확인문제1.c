/*
확인문제1. 사용자로부터 점수(정수 또는 실수)를 입력받고 평균을 구하는 프로그램을 작성하시오.
음수를 입력할 때까지 계속 입력을 받는다.

학번: 202022338
이름: 오고은
날짜: 2022-04-14
*/

#include <stdio.h>

int main()
{

	float score;
	int i;
	float sum = 0;
	int box = 0;
	float average;

	printf("정수 입력: ");
	scanf("%f", &score);

	while (1)
	{	
		if (score > 0)
		{
			sum = sum + score;
			box = box + 1;

			printf("정수 입력: ");
			scanf("%f", &score);
		}
		else
		{
			break;
		}
	}
	average = sum / box;
	printf("평균:%.2f", average);

	return 0;

}