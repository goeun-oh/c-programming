//직사각형의 면적 구하기
// 직사각형 가로와 세로의 값을 할당할 실수형 변수를 선언하고, 직사각형의 넓이(가로*세로)를 출력하는 프로그램을 작성하세요
//(가로는 7.5, 세로는 6.2의 값으로 할당하고, 변수의 자료형은 실수를 저장할수 있는 double형으로 한다. 소수점 첫째자리까지 출력하도록 출력 부분을 작성한다.)

#include<stdio.h>
int main() {
	double width = 7.5;
	double height = 6.2;

	double area = width * height;

	printf("직사각형의 넓이:%.1f\n", area);

	return 0;

}