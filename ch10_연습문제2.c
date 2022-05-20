/*
연습문제2: 입력한 문자열에 선택한 문자의 출현 빈도를 계산하는 countstring()함수
학번: 202022338
이름: 오고은
날짜: 2022_05_18
*/

#include<stdio.h>
#include<string.h>
#define SIZE 50
int countString(char s[], int c);

int main()
{
	char str[SIZE];
	int ch;

	printf("문자열을 입력하세요: ");
	gets_s(str, SIZE);

	printf("개수를 셀 문자를 입력하세요: ");
	ch = getchar();
	printf("%c 문자가 %d개 있습니다.\n", ch, countString(str, ch));

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