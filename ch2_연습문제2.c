/*
�������� 2 ȯ�� ��� ���α׷�
�й�: 202022338
�̸�: ������
��¥: 20220323
*/

#include <stdio.h>
int main()
{
	double exchangerate;
	double usd;
	int krw;
	printf("1�޷� �� ��ȭ ȯ���� �Է��ϼ��� : ");
	scanf("%lf", &exchangerate);
	printf("��ȭ �ݾ��� �Է��ϼ���: ");
	scanf("%d", &krw);
	usd = krw / exchangerate;
	printf("ȯ����� : %d �� -> %.2lf �޷�", krw, usd);

	return 0;
}