/*
심화문제1: 문자 배열의 응용//영어단어에서 중복된 알파벳이 있는지 감시하는 프로그램
학번: 202022338
이름: 오고은
날짜: 2022_05_18
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];

	printf("중복된 문자가 있는지 확인할 소문자 단어를 입력하세요: ");
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
		printf("소문자 단어가 아닙니다.");
	else if (count != 0)
		printf("알파벳 중복 있음");
	else
		printf("알파벳 중복 없음");

	return 0;
}