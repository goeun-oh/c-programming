/*
��ȭ����:���������Լ����
������ ������ �����ϰ� ���� �Է��ϸ� ���俩�θ� ����ϴ� ���α׷�
�й�:202022338
�̸�:������
��¥:2022_04_26
*/

#include<stdio.h>
#include<stdlib.h>

int score_c = 0;
int score_i = 0;

void fun_99(int n);

int main()
{
	int i;
	printf(" <������ 5 ����> \n");

	for (i = 1; i <= 5; i++)
	{
		fun_99(i);
	}

	printf("���䰳��: %d, ���䰳��: %d", score_c, score_i);
	return 0;
}

void fun_99(int n)
{
	int ran1, ran2, input;

	ran1 = (rand() % 10) + 1;
	ran2 = (rand() % 10) + 1;
	printf("%d��: %d * %d = ", n, ran1, ran2);
	scanf("%d", &input);

	if (input == ran1 * ran2)
	{
		printf("��: %d => ����!\n", ran1 * ran2);
		score_c++;
	}
	else
	{
		printf("��: %d => ����!\n", ran1 * ran2);
		score_i++;
	}
	return;
}

