/*
problem #1 - ������
�й�: 202022338
�̸�: ������
��¥: 2022_05_14
��������: ����, ����, ���� �� ������ �Է� �޾�, �� ���� ��հ� ����� ����ϴ� �Լ��� ����� ������ ���Ѵ�.
*/


#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ����
#include<stdio.h> //printf���� ����� ���� ��� ����
double score_average(int n1, int n2, int n3); //����� ���ϰ� ����ϴ� �Լ�
char score_result(double a); //����� ���ϰ� ����ϴ� �Լ�



int main()
{
	int k; int m; int e; //k ����, m ����, e ����

	printf("=====================\n");
	printf("�̸� : ������\n");
	printf("�й� : 202022338\n");
	
	printf("=====================\n");
	
	
	printf("[���� ����]\n");
	printf("���� ���� ���� : ");
	scanf("%d %d %d", &k, &m, &e);

	printf("=====================\n");


	printf("[���� ��]\n");

	score_average(k, m, e);
	score_result((k + m + e) / 3);


	printf("=====================\n");

	return 0;
}
double score_average(int n1, int n2, int n3) //����� ���ϰ� ����ϴ� �Լ�
{
	double avg;


	avg = (n1 + n2 + n3) / 3;
	printf("��� : %.1lf��\n\n", avg);
}

char score_result(double a) //����� ���ϰ� ����ϴ� �Լ�
{
	char grade;

	if (a >= 80 && a <= 100) //a�� 80�̻��̰� 100�����̸� ��� "A" ���
		printf("��� : A\n");
	else if (a >= 50 && a < 80) //a�� 50�̻��̰� 80�̸��̸� "B" ���
		printf("��� : B\n");
	else
		printf("��� : C\n"); //�� �� ���ǿ� �������������� "C" ���
}