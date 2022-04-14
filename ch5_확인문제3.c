/*
확인문제3.n을 입력받아 n줄의 삼각형 만들기

학번: 202022338
이름: 오고은
날짜: 2022-04-14
*/

#include<stdio.h>

int main()
{
	int n;
	int i;
	int j;
	int m;
	int sum=0;
	int hap;
	int sub=1;

	printf("n을 입력하세요: ");
	scanf("%d", &n);

	for (j = 0; j < n; j++)
	{
		sum = sum + 1; // 1 2 3
		hap = sum + j;
		sub = n - (j + 1);
	

		for (m = 0; m < sub; m++)
		{
			printf(" ");
		}


		for (i = hap; i > 0; i--) //hap개의 별을 출력
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}