/*
��ȭ���� 2: ���� ������ �̿�
�� ���� ������ �Է¹޾� ���� ū ���� ����ϴ� ���α׷���
���� �����ڸ� ����Ͽ� �ۼ��ϼ���.
�й�: 202022338
�̸�: ������
��¥: 20220330
*/

#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int max;

	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);

	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &num2);

	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &num3);

	max = (num1 > num2) ? num1 : num2;

	max = (max > num3) ? max : num3;
	
	printf("���� ū ���� %d �Դϴ�.", max);

	return 0;
}