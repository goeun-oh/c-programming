/*
��������1: �����Ϳ� �ּ� ������ ���
�й�: 202022338
�̸�: ������
��¥: 2022/05/11
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