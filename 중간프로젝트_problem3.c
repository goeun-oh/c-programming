/*
	Problem #3 - 주사위 보드게임
	학번 : 202022338
	이름 : 오고은
	날짜 : 2022_05_15
	문제 설명 : 주사위 보드게임에서 승리할 수 있는 경우의 수를 구한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int goal = 0;
int count = 0;
//goal,count는 전역변수

//게임 시작 여부를 묻는 함수 구현
//Y입력시 실행, N입력 시 종료
//그 외 입력에 대해 잘못된 입력임을 출력하고 다시 게임 시작 여부 확인

int check_start_game()
{
	char game_start = NULL;
	while (1)
	{
		//코드 작성
		
		printf("주사위 게임을 시작할까요?(Y?N): ");
		scanf("%c", &game_start);

		if (game_start == 0x59) //입력받은 game_start가 Y와 같으면
		{
			return 1; 

		}
		else if (game_start == 0x4E)
		{
			return 0; // check_start_game 함수가 0을 출력하면 main 함수에서 break문을 만나 프로그램을 종료한다.
		}
		else
		{
			printf("잘못된 입력입니다.\n\n");
			getchar(); //enter를 입력받기 위해 넣은 코드(getchar를 넣지않으면 "잘못된 입력입니다"가 2번 오출력됨)
		}
	}
}

//0이 입력될 경우 구간 설정 오류, 음수가 입력될 경우 잘못된 입력 오류 출력
int check_input(int goal)
{
	//코드 작성
	while (1)
	{
		if (goal == 0 || goal >= 31) //goal이 0이거나 31이상이면 "구간 설정이 잘못되었습니다."를 출력
		{
			printf("구간 설정이 잘못되었습니다.\n\n");
			return 0; //check_input함수가 0을 반환하면 main함수에서 while문이 계속 돈다
		}
		else if (goal < 0) //goal이 0 이하이면 "잘못된 입력입니다"가 출력
		{
			printf("잘못된 입력입니다.\n\n");
			return 0; //check_input함수가 0을 반환하면 main함수에서 while문이 계속 돈다
		}
		else
			return 1; //check_input함수가 1을 반환하면 main함수에서 while문이 종료된다.
	}
}

//목표 지점에 도달하기 위한 모든 경우의 수를 count하는 함수 구현
//재귀 방식으로 구현할 것 반복문으로 구현시 감점

void count_case(int current_location)
{
	//코드 작성
	

	if (current_location < goal) //현재위치가 목표보다 작을때
	{
		int i;
	
		for (i = 1; i <= 6; i++) //주사위 숫자가 1-6까지 있으므로 6번 반복한다
		{
			if ((current_location % 5) == 0 && current_location != 0) //5의 배수이고, current_location이 0이 아닐경우(이 경우를 설정해주지 않으면 current_location이 0일 때도 주사위 2배 이벤트가 걸린 경우의수가 출력된다.
				count_case(current_location + 2 * i); //주사위 나온 숫자의 2배 만큼 현재위치에서 더해준 숫자를 count_case 함수의 입력으로 넣는다. 
			else
				count_case(current_location + i); //현재위치에 i를 더한 수를 count_case 함수의 입력으로 넣는다.
		}
	}
	else if (current_location == goal)
	{
		count += 1; //현재위치가 목표와 같다면 카운트를 하나 더한다.
	}
	else
	{
		return ; //위 두 조건에 부합하지 않을때 아무일도 일어나지 않는다.
	}
}

int main() 
{
	printf("=======================================================\n");
	printf("이름 : 오고은\n");
	printf("학번 : 202022338\n");
	printf("=======================================================\n\n");

	int game_set = 1;
	while (game_set) //game_set은 1, 즉 참이므로 while문이 계속 돈다
	{
		goal = 0, count = 0;//goal은 목표지점, count는 경우의수
		if (check_start_game() == 0)
		{
			game_set = 0;//check_start_game()이 0일경우 while문이 그만 돈다
			break;
		}

		do {
			printf("목표 지점을 입력하세요: "); //먼저 이 문구를 출력하고, 입력을 받는다.
			scanf("%d", &goal); 
			getchar(); //enter를 반복문이 돌면서 scanf가 받아서 "잘못된 입력입니다"가 오출력되므로 enter를 처리해줄 함수 getchar를 넣는다.
		} while (!check_input(goal)); //check_input(goal)함수의 반환값의 not이 0이라면 while문은 그만 돈다.

		count_case(0); //경우의 수를 출력하는 함수를 호출한다.
		printf("가능한 경우의 수는: %d\n\n", count);
		printf("=======================================================\n\n");
	}

	printf("게임을 종료합니다.\n\n");
	return 0;
}