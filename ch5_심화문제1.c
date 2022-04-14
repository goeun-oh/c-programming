/*
심화문제1. 역삼각형 만들기

학번: 202022338
이름: 오고은
날짜: 2022-04-14
*/

#include <stdio.h>

int main()
{
	int a;
	int i;
	int j;
	int k;
	int z;
	printf("n을 입력하세요: ");
	scanf("%d", &a);


	for (i = a; i >= 0; i--) {
		// a-i개의 공백 출력
		k = a - i;
		for (z = 0; z < k; z++)
		{
			printf(" ");
		}

		// i개의 별 출력
		for (j = 0; j < i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}