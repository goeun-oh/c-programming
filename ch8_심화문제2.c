/*
��ȭ����2: ���� ���� ������ ����� ���� ���α׷�
�й�: 202022338
�̸�: ������
��¥: 2022_05_02
*/
/*
#include<stdio.h>
int a, b;
int c;
int add(int n, int m);
int sub(int n, int m);
int mul(int n, int m);
int dist(int n, int m);


int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("������ �Է��ϼ���(��:1+2): ");
		scanf("%d%c%d", &a, &c, &b);
		switch (c) {
		case '+':
			add(a, b);
			break;
		case '-':
			sub(a, b);
			break;
		case '*':
			mul(a, b);
			break;
		default:
			dist(a, b);
		}
	}
	return 0;
}

int add(int n, int m)
{
	static int i = 0;
	i += 1;
	printf("���� Ƚ��: %d��\n", i);
	printf("���: %d\n", n + m);
}

int sub(int n, int m)
{
	static int i = 0;
	i += 1;
	printf("���� Ƚ��: %d��\n", i);
	printf("���: %d\n", n - m);
}

int mul(int n, int m)
{
	static int i = 0;
	i += 1;
	printf("���� Ƚ��: %d��\n", i);
	printf("���: %d\n", n * m);
}

int dist(int n, int m)
{
	static int i = 0;
	i += 1;
	printf("������ Ƚ��: %d��\n", i);
	printf("���: %d\n", n / m);
}*/