/*
��ȭ����5. ��� �Ǻ��ϱ�

�й�: 202022338
�̸�: ������
��¥: 2022-04-14
*/

#include <stdio.h>
int main() 
{
	int dist;
	int i;
	int rest;

	printf("����� Ȯ���� ���� �Է��ϼ���: ");
	
	scanf("%d", &dist);
	
	for(i=1;i<=100;i++)
	{
		rest = i % dist;

		if (rest != 0)
		{
			printf("%d�� %d�� ����� �ƴմϴ�.\n", i, dist);
			continue;
		}
	
		printf("%d�� %d�� ����Դϴ�.\n", i, dist);
		
	}


	return 0;
}


