/*
���� if-else�� ���
�й�: 202022338
�̸�: ������
��¥: 2022.04.05
*/

#include <stdio.h>

int main()
{
	int age, fee;
	printf("���̸� �Է��ϼ���.: ");
	scanf("%d", &age);

	if (age < 5)
		fee = 0;
	else if (age <= 14 || age >= 60)
		fee = 5000;
	else
		fee = 10000;

	printf("���: %d ��\n", fee);

	return 0;
}