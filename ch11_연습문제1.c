/*
연습문제1: 포인터와 주소 연산자 사용
학번: 202022338
이름: 오고은
날짜: 2022/05/11
*/

#include<stdio.h>
int main()
{
	int* ptr;
	int x = 30;
	int y = 20;

	ptr = &y;
	printf("%d\n", *ptr);

	ptr = &x;
	printf("%d\n", *ptr);

	return 0;
}