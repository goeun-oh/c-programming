/*
��������2: �Է��� ���ڿ��� ������ ������ ���� �󵵸� ����ϴ� countstring()�Լ�
�й�: 202022338
�̸�: ������
��¥: 2022_05_18
*/

#include<stdio.h>
#include<string.h>
#define SIZE 50
int countString(char s[], int c);

int main()
{
	char str[SIZE];
	int ch;

	printf("���ڿ��� �Է��ϼ���: ");
	gets_s(str, SIZE);

	printf("������ �� ���ڸ� �Է��ϼ���: ");
	ch = getchar();
	printf("%c ���ڰ� %d�� �ֽ��ϴ�.\n", ch, countString(str, ch));

	return 0;
}

int countString(char s[], int c)
{
	int count = 0;
	int i = 0;
	for (i = 0;s[i]!='\0'; i++)
	{
		if (s[i] == c)
			count += 1;
	}

	return count;
}