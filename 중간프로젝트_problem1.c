/*
problem #1 - 성적평가
학번: 202022338
이름: 오고은
날짜: 2022_05_14
문제설명: 국어, 수학, 영어 세 과목을 입력 받아, 세 과목 평균과 등급을 출력하는 함수를 만들어 성적을 평가한다.
*/


#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 정의
#include<stdio.h> //printf등의 출력을 위한 헤더 파일
double score_average(int n1, int n2, int n3); //평균을 구하고 출력하는 함수
char score_result(double a); //등급을 구하고 출력하는 함수



int main()
{
	int k; int m; int e; //k 국어, m 수학, e 영어

	printf("=====================\n");
	printf("이름 : 오고은\n");
	printf("학번 : 202022338\n");
	
	printf("=====================\n");
	
	
	printf("[과목 성적]\n");
	printf("국어 수학 영어 : ");
	scanf("%d %d %d", &k, &m, &e);

	printf("=====================\n");


	printf("[성적 평가]\n");

	score_average(k, m, e);
	score_result((k + m + e) / 3);


	printf("=====================\n");

	return 0;
}
double score_average(int n1, int n2, int n3) //평균을 구하고 출력하는 함수
{
	double avg;


	avg = (n1 + n2 + n3) / 3;
	printf("평균 : %.1lf점\n\n", avg);
}

char score_result(double a) //등급을 구하고 출력하는 함수
{
	char grade;

	if (a >= 80 && a <= 100) //a가 80이상이고 100이하이면 등급 "A" 출력
		printf("등급 : A\n");
	else if (a >= 50 && a < 80) //a가 50이상이고 80미만이면 "B" 출력
		printf("등급 : B\n");
	else
		printf("등급 : C\n"); //위 두 조건에 부합하지않으면 "C" 출력
}