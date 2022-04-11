/*
확인문제 1 나이, 평균 평점, 성별, 몸무게 입력받아 저장하고 출력하는 프로그램 작성
학번: 202022338
이름: 오고은
날짜: 20220323
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main() 
{
	int student_id, age;
	char sex;
	float gpa, weight;
	
	student_id = 202022338;

	printf("학번: %d, 이름: %s\n", student_id, "오고은");
	
	printf("나이: ");
	scanf("%d", &age);
	
	printf("gpa: ");
	scanf("%f", &gpa);

	printf("성별: ");
	scanf("%s", &sex);

	printf("몸무게: ");
	scanf("%f", &weight);

	printf("나이: %d, gpa:%.1f, 성별: %c, 몸무게:%.2f\n", age, gpa, sex, weight);

	
	return 0;
}