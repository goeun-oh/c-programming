/*
연습문제4: 배열 원소의 순서 바꾸기
학번:202022338
이름:오고은
날짜:2022_05_03
*/

#include <stdio.h>

int main()
{
	int i, temp = 0;
	int s[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (i = 0; i < 10; ++i)
	{
		printf("%d ", s[i]);
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		temp = s[i];//temp =0,1, 2, 3, 4
		s[i] = s[9 - i]; //s[0]=9, s[1]=8, s[2]=7, s[3]=6, s[4]=5
		s[9 - i] = temp;//s[9]=0, s[8]=1, s[7]=2, s[6]=3, s[5]=4
	}
	for (i = 0; i < 10; ++i)
	{
		printf("%d ", s[i]);
	}

	printf("\n");

	return 0;
}