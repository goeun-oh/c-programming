/*
��������2: ������ ���
�й�: 202022338
�̸�: ������
��¥: 2022/05/11
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

	printf("��: %d\n", *ptr);

	return 0;
}