/*
연습문제2: 전역 변수의 사용
학번: 202022338
이름: 오고은
날짜: 2022_05_02
*/

#include <stdio.h>
void printNum(void);
void increaseNum(void);
void decreaseNum(void);
int num = 10; //전역변수 num 선언

int main()
{
	int num = 20; //지역변수 num 선언
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