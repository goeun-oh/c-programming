/*
��ȭ���� 2 �Ѿ��� �����ϴ� ���� ����� ���
�й�: 202022338
�̸�: ������
��¥: 20220323
*/

#include <stdio.h>
int main() {
	
	int days, price, sum;

	sum = 0;

	printf("�����ϼ�: ");
	scanf("%d", &days);

	printf("����ǥ ����: ");
	scanf("%d", &price);
	sum = sum + price;

	printf("1�� ���ڷ�: ");
	scanf("%d", &price);
	sum = sum + price * days;

	printf("1�� �ʿ� ���: ");
	scanf("%d", &price);
	sum = sum + price * days;
	
	printf("�� ���� ���: %d ��\n", sum);
	

	return 0;
}
