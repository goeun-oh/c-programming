/*
Ȯ�ι���3.n�� �Է¹޾� n���� �ﰢ�� �����

�й�: 202022338
�̸�: ������
��¥: 2022-04-14
*/

#include<stdio.h>

int main()
{
	int n;
	int i;
	int j;
	int m;
	int sum=0;
	int hap;
	int sub=1;

	printf("n�� �Է��ϼ���: ");
	scanf("%d", &n);

	for (j = 0; j < n; j++)
	{
		sum = sum + 1; // 1 2 3
		hap = sum + j;
		sub = n - (j + 1);
	

		for (m = 0; m < sub; m++)
		{
			printf(" ");
		}


		for (i = hap; i > 0; i--) //hap���� ���� ���
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}