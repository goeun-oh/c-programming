/*
��������3: �������� ũ��
�й�: 202022338
�̸�: ������
��¥: 2022/05/11
*/

#include<stdio.h>

int main()
{
	int* intpt;
	char* charpt;
	double* doublept;
	float* floatpt;

	printf("int ���� ����Ʈ ũ��: %d, int �� ������ intpt�� ����Ʈ ũ��: %d\n", sizeof(int), sizeof(int*));
	printf("char ���� ����Ʈ ũ��: %d, char �� ������ charpt�� ����Ʈ ũ��: %d\n", sizeof(char), sizeof(char*));
	printf("double ���� ����Ʈ ũ��: %d, double �� ������ doublept�� ����Ʈ ũ��: %d\n", sizeof(double), sizeof(double*));
	printf("float ���� ����Ʈ ũ��: %d, float �� ������ floatpt�� ����Ʈ ũ��: %d\n", sizeof(float),sizeof(float*));

	return 0;
}