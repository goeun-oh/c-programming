/*
��ȭ����1: �����͸� �̿��Ͽ� �� ���� ���� ��ȯ�ϴ� ���α׷�
�й�: 202022338
�̸�: ������
��¥: 2022/05/11
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

