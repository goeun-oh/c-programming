/*
Ȯ�ι���1. ����ڷκ��� ����(���� �Ǵ� �Ǽ�)�� �Է¹ް� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ �Է��� ������ ��� �Է��� �޴´�.

�й�: 202022338
�̸�: ������
��¥: 2022-04-14
*/

#include <stdio.h>

int main()
{

	float score;
	int i;
	float sum = 0;
	int box = 0;
	float average;

	printf("���� �Է�: ");
	scanf("%f", &score);

	while (1)
	{	
		if (score > 0)
		{
			sum = sum + score;
			box = box + 1;

			printf("���� �Է�: ");
			scanf("%f", &score);
		}
		else
		{
			break;
		}
	}
	average = sum / box;
	printf("���:%.2f", average);

	return 0;

}