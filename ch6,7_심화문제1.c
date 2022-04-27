/*
심화문제: 소수판별하기
사용자가 입력한 숫자가 소수인지 판별하는 프로그램
학번:202022338
이름:오고은
날짜:2022_04_26
*/
/*
#include<stdio.h>
is_prime(int n);

int main()
{
	int input;
	printf("1보다 큰 자연수를 입력하세요: ");
	scanf("%d", &input);

	if (is_prime(input) == 1)
		printf("%d은 소수입니다\n", input);
	else
		printf(" % d은 소수가아닙니다.\n", input);

	return 0;
}

int is_prime(int n)
{
	int i, check;
	check = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			check = check + 1;
		else
			continue;
	}

	return (check <= 2 ? 1 : 0);
}*/