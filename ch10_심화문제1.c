/*
��ȭ����1: ���� �迭�� ����//����ܾ�� �ߺ��� ���ĺ��� �ִ��� �����ϴ� ���α׷�
�й�: 202022338
�̸�: ������
��¥: 2022_05_18
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];

	printf("�ߺ��� ���ڰ� �ִ��� Ȯ���� �ҹ��� �ܾ �Է��ϼ���: ");
	gets_s(str1, sizeof(str1));

	int i,j;
	int count = 0;
	int warn = 0;

	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (i != j)
			{
				if (str1[i] == str1[j])
					count += 1;
			}
		}
		if (str1[i] >= 65 && str1[i] <= 90)
			warn += 1;
	}

	if (warn != 0)
		printf("�ҹ��� �ܾ �ƴմϴ�.");
	else if (count != 0)
		printf("���ĺ� �ߺ� ����");
	else
		printf("���ĺ� �ߺ� ����");

	return 0;
}