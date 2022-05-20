/*
	Problem #2 - 과일 구매, 판매를 통해 목표 금액 달성하기
	학번 : 202022338
	이름 : 오고은	
	날짜 : 2022_05_15
	문제 설명 : 난수 발생을 통해 가격이 랜덤으로 등락하는 과일을 사고 팔며 목표 금액 이상의 금액 달성 시 실행종료
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>



double UP(double price, double percent) //랜덤 퍼센트만큼 오른 과일의 가격을 계산하기 위한 함수
{
	return (price * percent) + price;
}

double DOWN(double price, double percent) //랜덤 퍼센트만큼 내린 과일의 가격을 계산하기 위한 함수
{
	return (price * -percent) + price;
}

int NOT_BUY(double money, double price)//보유금액 부족 관련 함수
{
	int flag = 1;
	if (money - price < 0)
	{
		
		return flag;  //보유금액보다 사고자하는 과일의 가격이 클경우 1을 출력한다.
	}
	else
		return 0; //보유 금액보다 사고자하는 과일의 가격이 작을 경우 0을 출력한다.
}
int NOT_SELL(int number) // 보유 재고 부족 관련 함수
{
	if (number - 1 < 0)
	{
		return number; //보유 재고가 0개인 경우 입력받은 수를 출력한다.
	}
	else
		return -1; //보유 재고가 한개 이상인 경우 -1을 출력한다.
}

int main()
{
	double money = 10000;
	double A = 1000, B = 3000, C = 5000;
	int A_have = 0, B_have = 0, C_have = 0;

	printf("================================================ ========\n");
	printf("이름 : 오고은\n");
	printf("학번 : 202022338\n");
	printf("================================================ ========\n\n");
	srand(time(NULL)); //1초마다 rand의 가격이 바뀌게 도와주는 함수이다.

	while (1)
	{
		for (int i = 0; i < 5; i++) //5번 반복한다
		{
			if (money == 11000)
			{
				printf("목표 금액에 달성하였습니다.\n");
				printf("현재 잔고: %.0lf", money);
				break; //money가 11000을 달성하면 프로그램을 종료한다
			}

			double A_percent, B_percent, C_percent;
			A_percent = (rand() % 21 * 0.01); //오렌지, 키위, 망고를 각각 0-20퍼까지 랜덤으로 등락을 계산하기 위한 변수이다.
			B_percent = (rand() % 21 * 0.01);
			C_percent = (rand() % 21 * 0.01);

			int random;
			random = (rand() % 8) + 1; //1-8까지의 경우의 수를 랜덤으로 만들어 내기위한 변수이다.
			

			if (random == 1)//8가지 경우의 수 관련 코드 작성
			{
				A = UP(A, A_percent); //경우의 수가 1인 경우 A(오렌지), B(키위), C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 오른다.
				B = UP(B, B_percent);
				C = UP(C, C_percent);
			}
			else if (random == 2)
			{
				A = UP(A, A_percent); //경우의 수가 2인 경우 A(오렌지), B(키위)가 0-20%의 랜덤 퍼센트만큼 오르고, C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 내린다.
				B = UP(B, B_percent);
				C = DOWN(C, C_percent);
				C_percent = -1*C_percent; //C(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
			}
			else if (random == 3)
			{
				A = UP(A, A_percent); //경우의 수가 3인 경우 A(오렌지), C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 오르고, B(키위)의 가격이 0-20%의 랜덤 퍼센트만큼 내린다.
				B = DOWN(B, B_percent);
				C = UP(C, C_percent);
				B_percent = -1 * B_percent; //B(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
			}
			else if (random == 4)
			{
				A = UP(A, A_percent); //경우의 수가 4인 경우 A(오렌지)의 가격이 0-20%의 랜덤 퍼센트만큼 오르고, B(키위), C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 내린다.
				B = DOWN(B, B_percent);
				C = DOWN(C, C_percent);
				B_percent = -1 * B_percent; //B(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
				C_percent = -1 * C_percent; //C(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
			}
			else if (random == 5)
			{
				A = DOWN(A, A_percent); //경우의 수가 5인 경우 A(오렌지)의 가격이 0-20%의 랜덤 퍼센트만큼 내리고, B(키위), C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 오른다.
				B = UP(B, B_percent);
				C = UP(C, C_percent);
				A_percent = -1 * A_percent; //A(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
			}
			else if (random == 6)
			{
				A = DOWN(A, A_percent); //경우의 수가 6인 경우 A(오렌지), C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 내리고, B(키위)가격이 0-20%의 랜덤 퍼센트만큼 오른다.
				B = UP(B, B_percent);
				C = DOWN(C, C_percent);
				A_percent = -1 * A_percent; //A(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
				C_percent = -1 * C_percent; //C(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
			}
			else if (random == 7)
			{
				A = DOWN(A, A_percent);  //경우의 수가 7인 경우 A(오렌지),  B(키위), C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 내린다.
				B = DOWN(B, B_percent);
				C = DOWN(C, C_percent);
				A_percent = -1 * A_percent; //A(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
				B_percent = -1 * B_percent; //B(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
				C_percent = -1 * C_percent; //C(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
			}
			else if (random == 8)
			{
				A = DOWN(A, A_percent); //경우의 수가 8인 경우 A(오렌지),  B(키위)의 가격이 0-20%의 랜덤 퍼센트만큼 내리고, C(망고)의 가격이 0-20%의 랜덤 퍼센트만큼 오른다.
				B = DOWN(B, B_percent);
				C = UP(C, C_percent);
				A_percent = -1 * A_percent; //A(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
				B_percent = -1 * B_percent; //B(망고)의 가격이 내렸으므로 추후 출력을 위해 -퍼센트의 값으로 저장해놓는다.
			}
			printf("----------------------------------------------------------------------\n");
			printf("오렌지: %.0lf(%+.2lf%%),  키위: %.0lf(%+.2lf%%), 망고: %.0lf(%+.2lf%%)\n\n", A, A_percent, B, B_percent, C, C_percent);
			printf("구입(1) , 판매(2), 이어보기(0) :");

			int i;
			scanf("%d", &i);

			if (i == 1) //구입 관련 코드 작성
			{
				int j;
				printf("\n구매할 과일을 선택하세요. (오렌지(1), 키위(2), 망고(3)) :");
				scanf("%d", &j);
				if (j == 1)
				{
					NOT_BUY(money, A); //보유금액 부족관련 함수로 가서 처리한다.
					if ((NOT_BUY(money, A)) != 1) //만약 NOT_BUY가 1이 아닌수를 출력했을 경우
					{
						A_have += 1; //A과일의 수는 하나 증가하고
						money -= A; //보유금액은 A과일의 금액만큼 준다.
						printf("\n현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n\n", money, A_have, B_have, C_have);
					}
					else
					{
						printf("\n잔고 부족으로 구입할 수 없습니다.\n"); //만약 NOT_BUY가 1을 출력했을 경우 "잔고 부족으로 구입할 수 없습니다."를 출력한다.
						printf("현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n", money, A_have, B_have, C_have);
					}
				}
				if (j == 2)
				{
					NOT_BUY(money, B); //보유금액 부족관련 함수로 가서 처리한다.
					if (NOT_BUY(money, B) != 1) //만약 NOT_BUY가 1이 아닌수를 출력했을 경우
					{
						B_have += 1; //B과일의 수는 하나 증가하고
						money -= B; //보유금액은 B과일의 금액만큼 준다.
						printf("\n현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n", money, A_have, B_have, C_have);
					}
					else
					{
						printf("\n잔고 부족으로 구입할 수 없습니다.\n"); //만약 NOT_BUY가 1을 출력했을 경우 "잔고 부족으로 구입할 수 없습니다."를 출력한다.
						printf("현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n", money, A_have, B_have, C_have);
					}

				}
				if (j == 3)
				{
					if (NOT_BUY(money, C) != 1) //만약 NOT_BUY가 1이 아닌수를 출력했을 경우
					{
						C_have += 1; //B과일의 수는 하나 증가하고
						money -= C; //보유금액은 B과일의 금액만큼 준다.
						printf("\n현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n", money, A_have, B_have, C_have);
					}
					else
					{
						printf("\n잔고 부족으로 구입할 수 없습니다.\n");//만약 NOT_BUY가 1을 출력했을 경우 "잔고 부족으로 구입할 수 없습니다."를 출력한다.
						printf("현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n", money, A_have, B_have, C_have);
					}
				}
			}
			else if (i == 2)//판매 관련 코드 작성
			{
				int j;
				printf("\n판매할 과일을 선택하세요. (오렌지(1), 키위(2), 망고(3)) :");
				scanf("%d", &j);
				if (j == 1)
				{
					if ((NOT_SELL(A_have)) == -1) //만약 NOT_SELL가 -1을 출력했을 경우
					{
						money += A; //money는 A의 가격만큼 증가하고
						A_have -= 1; //A의 재고는 1 준다.
						printf("\n현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n\n", money, A_have, B_have, C_have);
					}
					else //만약 NOT_SELL이 -1을 출력하지 않았을 경우
					{
						printf("\n\n재고가 없습니다.\n"); //"재고가 없습니다"를 출력한다.
						printf("현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n\n", money, A_have, B_have, C_have);
					}
				}
				if (j == 2)
				{
					if ((NOT_SELL(B_have)) == -1) //만약 NOT_SELL가 -1을 출력했을 경우
					{
						money += B; //money는 B의 가격만큼 증가하고
						B_have -= 1; //B의 재고는 1 준다.
						printf("\n현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n\n", money, A_have, B_have, C_have);
					}
					else //만약 NOT_SELL이 -1을 출력하지 않았을 경우
					{
						printf("\n\n재고가 없습니다.\n");  //"재고가 없습니다"를 출력한다.
						printf("현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n\n", money, A_have, B_have, C_have);
					}
				}
				if (j == 3)
				{
					if ((NOT_SELL(C_have)) == -1) //만약 NOT_SELL가 -1을 출력했을 경우
					{
						money += C; //money는 C의 가격만큼 증가하고
						C_have -= 1; //C의 재고는 1 준다.
						printf("\n현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n\n", money, A_have, B_have, C_have);
					}
					else //만약 NOT_SELL이 -1을 출력하지 않았을 경우
					{
						printf("\n\n재고가 없습니다.\n"); //"재고가 없습니다"를 출력한다.
						printf("현재 잔고: %.0lf, 오렌지: %d, 키위: %d, 망고: %d\n\n", money, A_have, B_have, C_have);
					}
				}
			}
			else if (i != 1 && i != 2 && i != 0) //만일 콘솔 창의 구입(1) 판매(2) 이어보기(0) 화면에서 1과 2와 0이 아닌 수를 입력했을 경우
			{
				printf("잘못된 입력입니다.\n"); //"잘못된 입력입니다"를 출력한다.
			}
			
			Sleep(500); //화면 멈춤
		}
		if (money == 11000) //만일 money가 11000을 달성한다면
		{
			break; //반복문을 나간다.
		}
		system("cls");	//5회 반복 후 콘솔창 clear
		
		
	}
	return 0;
}