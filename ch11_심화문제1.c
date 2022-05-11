/*
심화문제1: 포인터를 이용하여 두 수의 값을 교환하는 프로그램
학번: 202022338
이름: 오고은
날짜: 2022/05/11
*/

#include<stdio.h>

int main()
{
	int x = 10, y = 20;
	int* ptr = &x;
	int temp = 0;
	printf("x: %d y: %d\n", x, y);
	
	
	temp = *ptr;

	*ptr = y;

	ptr = &y;
	
	*ptr = temp; 


	printf("x: %d y: %d\n", x, y);

	return 0;

}

