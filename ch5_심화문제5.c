/*
심화문제5. 배수 판별하기

학번: 202022338
이름: 오고은
날짜: 2022-04-14
*/

#include <stdio.h>
int main() 
{
	int dist;
	int i;
	int rest;

	printf("배수로 확인할 수를 입력하세요: ");
	
	scanf("%d", &dist);
	
	for(i=1;i<=100;i++)
	{
		rest = i % dist;

		if (rest != 0)
		{
			printf("%d는 %d의 배수가 아닙니다.\n", i, dist);
			continue;
		}
	
		printf("%d는 %d의 배수입니다.\n", i, dist);
		
	}


	return 0;
}


