/*
��ȭ����1. ���ﰢ�� �����

�й�: 202022338
�̸�: ������
��¥: 2022-04-14
*/

#include <stdio.h>

int main()
{
	int a;
	int i;
	int j;
	int k;
	int z;
	printf("n�� �Է��ϼ���: ");
	scanf("%d", &a);


	for (i = a; i >= 0; i--) {
		// a-i���� ���� ���
		k = a - i;
		for (z = 0; z < k; z++)
		{
			printf(" ");
		}

		// i���� �� ���
		for (j = 0; j < i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}