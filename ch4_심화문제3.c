/*
계산기 만들기
사칙연산과 나머지 연산을 하는 계산기 프로그램을 작성하세요.
학번: 202022338
이름: 오고은
날짜: 2022.04.05
*/


#include <stdio.h>

int main() 
{
	int x, y, i;
	char z;


	printf("수식을 입력하세요: ");
	scanf("%d %c %d", &x, &z, &y);

	if ( z == '+' )
	{
		i = 1;
	}
	else if (z == '-' )
	{
		i = 2;
	}
	else if (z == '*')
	{
		i= 3;
	}
	else if (z == '/')
	{
		i = 4;
	}
	else if (z == '%')
	{
		i = 5;
	}
	else
	{
		i = 6;
	}

	switch (i)
	{
	case 1 :
		printf("%d %c %d = %d", x, z, y, x + y);
		break;

	case 2:
		printf("%d %c %d = %d", x, z, y, x - y);
		break;

	case 3:
		printf("%d %c %d = %d", x, z, y, x * y);
		break;

	case 4:
		printf("%d %c %d =%d", x, z, y, x / y);
		break;
		
	case 5:
		printf("%d %c %d = %d", x, z, y, x % y);
		break;

	default:
		printf("지원되지 않는 연산자입니다.");
		break;

	}

	printf("\n\n수식을 입력하세요: ");
	scanf("%d %c %d", &x, &z, &y);

	if (z == '+')
	{
		i = 1;
	}
	else if (z == '-')
	{
		i = 2;
	}
	else if (z == '*')
	{
		i = 3;
	}
	else if (z == '/')
	{
		i = 4;
	}
	else if (z == '%')
	{
		i = 5;
	}
	else
	{
		i = 6;
	}

	switch (i)
	{
	case 1:
		printf("%d %c %d = %d", x, z, y, x + y);
		break;

	case 2:
		printf("%d %c %d = %d", x, z, y, x - y);
		break;

	case 3:
		printf("%d %c %d = %d", x, z, y, x * y);
		break;

	case 4:
		printf("%d %c %d =%d", x, z, y, x / y);
		break;

	case 5:
		printf("%d %c %d = %d", x, z, y, x % y);
		break;

	default:
		printf("지원되지 않는 연산자입니다.");
		break;

	}

	return 0;
}