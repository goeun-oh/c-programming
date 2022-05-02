/*
심화문제2: 정적 지역 변수를 사용한 계산기 프로그램
학번: 202022338
이름: 오고은
날짜: 2022_05_02
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
		printf("연산을 입력하세요(예:1+2): ");
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
	printf("덧셈 횟수: %d번\n", i);
	printf("결과: %d\n", n + m);
}

int sub(int n, int m)
{
	static int i = 0;
	i += 1;
	printf("뺄셈 횟수: %d번\n", i);
	printf("결과: %d\n", n - m);
}

int mul(int n, int m)
{
	static int i = 0;
	i += 1;
	printf("곱셈 횟수: %d번\n", i);
	printf("결과: %d\n", n * m);
}

int dist(int n, int m)
{
	static int i = 0;
	i += 1;
	printf("나눗셈 횟수: %d번\n", i);
	printf("결과: %d\n", n / m);
}*/