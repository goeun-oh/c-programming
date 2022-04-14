/*
연습문제3. 메아리 프로그램

학번: 202022338
이름: 오고은
날짜: 2022-04-13
*/

#include <stdio.h>

int main()
{
	int echo;

	while (1)
	{
		printf("메아리 입력:\n");
		scanf("%d", &echo);

		if (echo>=0)
		{
			printf("%d\n", echo);
		}
		else
		{
			
			printf("%d\n", echo);
			break;
		}
	}
	return 0;
}