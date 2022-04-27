/*
심화문제:난수생성함수사용
구구단 문제를 출제하고 답을 입력하면 정답여부를 출력하는 프로그램
학번:202022338
이름:오고은
날짜:2022_04_26
*/

#include<stdio.h>
#include<stdlib.h>

int score_c = 0;
int score_i = 0;

void fun_99(int n);

int main()
{
	int i;
	printf(" <구구단 5 문제> \n");

	for (i = 1; i <= 5; i++)
	{
		fun_99(i);
	}

	printf("정답개수: %d, 오답개수: %d", score_c, score_i);
	return 0;
}

void fun_99(int n)
{
	int ran1, ran2, input;

	ran1 = (rand() % 10) + 1;
	ran2 = (rand() % 10) + 1;
	printf("%d번: %d * %d = ", n, ran1, ran2);
	scanf("%d", &input);

	if (input == ran1 * ran2)
	{
		printf("답: %d => 정답!\n", ran1 * ran2);
		score_c++;
	}
	else
	{
		printf("답: %d => 오답!\n", ran1 * ran2);
		score_i++;
	}
	return;
}

