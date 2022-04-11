/*
연습문제 2 환율 계산 프로그램
학번: 202022338
이름: 오고은
날짜: 20220323
*/

#include <stdio.h>
int main()
{
	double exchangerate;
	double usd;
	int krw;
	printf("1달러 당 원화 환율을 입력하세요 : ");
	scanf("%lf", &exchangerate);
	printf("원화 금액을 입력하세요: ");
	scanf("%d", &krw);
	usd = krw / exchangerate;
	printf("환전결과 : %d 원 -> %.2lf 달러", krw, usd);

	return 0;
}