/*
��������2: ���� ������ ���
�й�: 202022338
�̸�: ������
��¥: 2022_05_02
*/

#include <stdio.h>
void printNum(void);
void increaseNum(void);
void decreaseNum(void);
int num = 10; //�������� num ����

int main()
{
	int num = 20; //�������� num ����
	printNum();
	increaseNum();
	increaseNum();
	increaseNum();
	printNum();
	decreaseNum();
	decreaseNum();
	printNum();

	return 0;
}

void printNum(void)
{
	printf("count = %d\n", num); //10 13 11
}

void increaseNum(void)
{
	num++;// 11 12 13
}

void decreaseNum(void)
{
	num--; //12 11
}