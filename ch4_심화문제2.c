/*
switch�� ���
���� �Է¹޾� �ش�Ǵ� �б⸦ ����ϴ� ���α׷��� �ۼ��Ͻÿ�
�й�: 202022338
�̸�: ������
��¥: 2022.04.05
*/

#include <stdio.h>

int main()
{
	int month;

	printf("��(month)�� �Է��ϼ���: ");
	scanf("%d", &month);

	
	switch (month) 
	{
	case 1: case 2: case 3:
		printf("%d���� 1��б��Դϴ�.\n", month);
		break;

	case 4: case 5: case 6:
		printf("%d���� 2��б��Դϴ�.\n", month);
		break;

	case 7: case 8: case 9:
		printf("%d���� 3��б��Դϴ�.\n", month);
		break;

	case 10: case 11: case 12:
		printf("%d���� 4��б��Դϴ�.\n", month);
		break;

	default:
		printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.\n");
	}
		
	return 0;

}