/*
심화문제1: 은행계좌의 입출금 구현
학번: 202022338
이름: 오고은
날짜: 2022_05_02
*/

#include<stdio.h>
int balance = 1000;
void save(int money);
void withdraw(int money);

int main()
{
	printf("입금액  출금액  총입금액  총출금액  잔고\n");
	printf("                                    %-5d\n", balance);
	save(10000);
	withdraw(5000);
	save(50000);
	withdraw(30000);
}

void save(int money)
{
	static amount=0;
	amount += money;
	balance += money;
	printf("%d", money);
	printf("            %-5d", amount);
	printf("              %-5d\n", balance); //balance = 11000
}

void withdraw(int money)
{
	static amount = 0;
	amount = amount- money;
	balance -= money;
	printf("         %d", money);
	printf("              %-5d", amount);
	printf("    %-5d\n", balance);
}