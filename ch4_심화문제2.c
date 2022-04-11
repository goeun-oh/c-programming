/*
switch문 사용
월을 입력받아 해당되는 분기를 출력하는 프로그램을 작성하시오.
학번: 202022338
이름: 오고은
날짜: 2022.04.05
*/

#include <stdio.h>

int main()
{
	int month;

	printf("월(month)를 입력하세요: ");
	scanf("%d", &month);

	
	switch (month) 
	{
	case 1: case 2: case 3:
		printf("%d월은 1사분기입니다.\n", month);
		break;

	case 4: case 5: case 6:
		printf("%d월은 2사분기입니다.\n", month);
		break;

	case 7: case 8: case 9:
		printf("%d월은 3사분기입니다.\n", month);
		break;

	case 10: case 11: case 12:
		printf("%d월은 4사분기입니다.\n", month);
		break;

	default:
		printf("월(month)을 잘못 입력하셨습니다.\n");
	}
		
	return 0;

}