/*
��������1. do-while�� �ۼ�

�й�: 202022338
�̸�: ������
��¥: 2022-04-13
*/
/
#include <stdio.h>

int main()
{
	int menu = 0;
	do
	{
		printf("�޴��� �Է��ϼ���(1~3): ");
		scanf("%d", &menu);

	} while (menu>3 || menu<1 );

	printf("������ �޴��� %d�� �Դϴ�.\n", menu);

	return 0;
}