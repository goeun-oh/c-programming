/*
연습문제2: 포인터 사용
학번: 202022338
이름: 오고은
날짜: 2022/05/11
*/

#include<stdio.h>
int main()
{
	int x = 10, y = 20;
	int sum = 0;
	int* ptr = &x;//10

	sum += *ptr;

	ptr = &y;

	sum += *ptr;
	*ptr = sum;

	printf("합: %d\n", *ptr);

	return 0;
}