/*
심화문제 2 총액을 저장하는 변수 선언과 사용
학번: 202022338
이름: 오고은
날짜: 20220323
*/

#include <stdio.h>
int main() {
	
	int days, price, sum;

	sum = 0;

	printf("숙박일수: ");
	scanf("%d", &days);

	printf("기차표 가격: ");
	scanf("%d", &price);
	sum = sum + price;

	printf("1박 숙박료: ");
	scanf("%d", &price);
	sum = sum + price * days;

	printf("1일 필요 경비: ");
	scanf("%d", &price);
	sum = sum + price * days;
	
	printf("총 여행 비용: %d 원\n", sum);
	

	return 0;
}
