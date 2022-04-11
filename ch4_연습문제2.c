/*
다중 if-else문 사용
학번: 202022338
이름: 오고은
날짜: 2022.04.05
*/

#include <stdio.h>

int main()
{
	int age, fee;
	printf("나이를 입력하세요.: ");
	scanf("%d", &age);

	if (age < 5)
		fee = 0;
	else if (age <= 14 || age >= 60)
		fee = 5000;
	else
		fee = 10000;

	printf("요금: %d 원\n", fee);

	return 0;
}