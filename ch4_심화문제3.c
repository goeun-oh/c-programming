/*
���� �����
��Ģ����� ������ ������ �ϴ� ���� ���α׷��� �ۼ��ϼ���.
�й�: 202022338
�̸�: ������
��¥: 2022.04.05
*/


#include <stdio.h>

int main() 
{
	int x, y, i;
	char z;


	printf("������ �Է��ϼ���: ");
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
		printf("�������� �ʴ� �������Դϴ�.");
		break;

	}

	printf("\n\n������ �Է��ϼ���: ");
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
		printf("�������� �ʴ� �������Դϴ�.");
		break;

	}

	return 0;
}