/*
연습문제3: 포인터의 크기
학번: 202022338
이름: 오고은
날짜: 2022/05/11
*/

#include<stdio.h>

int main()
{
	int* intpt;
	char* charpt;
	double* doublept;
	float* floatpt;

	printf("int 형의 바이트 크기: %d, int 형 포인터 intpt의 바이트 크기: %d\n", sizeof(int), sizeof(int*));
	printf("char 형의 바이트 크기: %d, char 형 포인터 charpt의 바이트 크기: %d\n", sizeof(char), sizeof(char*));
	printf("double 형의 바이트 크기: %d, double 형 포인터 doublept의 바이트 크기: %d\n", sizeof(double), sizeof(double*));
	printf("float 형의 바이트 크기: %d, float 형 포인터 floatpt의 바이트 크기: %d\n", sizeof(float),sizeof(float*));

	return 0;
}