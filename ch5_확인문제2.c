/*
Ȯ�ι���2. ����ڷκ��� 2~9 ������ ������ �Է¹ް� 
�� ���� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�й�: 202022338
�̸�: ������
��¥: 2022-04-14
*/

#include <stdio.h>

int main()
{
	int input;
	int i;
	int mul;

	printf("����ϰ� ���� ��: ");
	scanf("%d", &input);

	for (i = 1; i < 10; i++)
	{
		mul = input * i;
		printf("%d*%d=%d\n", input, i, mul);
	}

	return 0;
}