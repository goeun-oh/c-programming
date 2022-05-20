/*
	Problem #3 - �ֻ��� �������
	�й� : 202022338
	�̸� : ������
	��¥ : 2022_05_15
	���� ���� : �ֻ��� ������ӿ��� �¸��� �� �ִ� ����� ���� ���Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int goal = 0;
int count = 0;
//goal,count�� ��������

//���� ���� ���θ� ���� �Լ� ����
//Y�Է½� ����, N�Է� �� ����
//�� �� �Է¿� ���� �߸��� �Է����� ����ϰ� �ٽ� ���� ���� ���� Ȯ��

int check_start_game()
{
	char game_start = NULL;
	while (1)
	{
		//�ڵ� �ۼ�
		
		printf("�ֻ��� ������ �����ұ��?(Y?N): ");
		scanf("%c", &game_start);

		if (game_start == 0x59) //�Է¹��� game_start�� Y�� ������
		{
			return 1; 

		}
		else if (game_start == 0x4E)
		{
			return 0; // check_start_game �Լ��� 0�� ����ϸ� main �Լ����� break���� ���� ���α׷��� �����Ѵ�.
		}
		else
		{
			printf("�߸��� �Է��Դϴ�.\n\n");
			getchar(); //enter�� �Է¹ޱ� ���� ���� �ڵ�(getchar�� ���������� "�߸��� �Է��Դϴ�"�� 2�� ����µ�)
		}
	}
}

//0�� �Էµ� ��� ���� ���� ����, ������ �Էµ� ��� �߸��� �Է� ���� ���
int check_input(int goal)
{
	//�ڵ� �ۼ�
	while (1)
	{
		if (goal == 0 || goal >= 31) //goal�� 0�̰ų� 31�̻��̸� "���� ������ �߸��Ǿ����ϴ�."�� ���
		{
			printf("���� ������ �߸��Ǿ����ϴ�.\n\n");
			return 0; //check_input�Լ��� 0�� ��ȯ�ϸ� main�Լ����� while���� ��� ����
		}
		else if (goal < 0) //goal�� 0 �����̸� "�߸��� �Է��Դϴ�"�� ���
		{
			printf("�߸��� �Է��Դϴ�.\n\n");
			return 0; //check_input�Լ��� 0�� ��ȯ�ϸ� main�Լ����� while���� ��� ����
		}
		else
			return 1; //check_input�Լ��� 1�� ��ȯ�ϸ� main�Լ����� while���� ����ȴ�.
	}
}

//��ǥ ������ �����ϱ� ���� ��� ����� ���� count�ϴ� �Լ� ����
//��� ������� ������ �� �ݺ������� ������ ����

void count_case(int current_location)
{
	//�ڵ� �ۼ�
	

	if (current_location < goal) //������ġ�� ��ǥ���� ������
	{
		int i;
	
		for (i = 1; i <= 6; i++) //�ֻ��� ���ڰ� 1-6���� �����Ƿ� 6�� �ݺ��Ѵ�
		{
			if ((current_location % 5) == 0 && current_location != 0) //5�� ����̰�, current_location�� 0�� �ƴҰ��(�� ��츦 ���������� ������ current_location�� 0�� ���� �ֻ��� 2�� �̺�Ʈ�� �ɸ� ����Ǽ��� ��µȴ�.
				count_case(current_location + 2 * i); //�ֻ��� ���� ������ 2�� ��ŭ ������ġ���� ������ ���ڸ� count_case �Լ��� �Է����� �ִ´�. 
			else
				count_case(current_location + i); //������ġ�� i�� ���� ���� count_case �Լ��� �Է����� �ִ´�.
		}
	}
	else if (current_location == goal)
	{
		count += 1; //������ġ�� ��ǥ�� ���ٸ� ī��Ʈ�� �ϳ� ���Ѵ�.
	}
	else
	{
		return ; //�� �� ���ǿ� �������� ������ �ƹ��ϵ� �Ͼ�� �ʴ´�.
	}
}

int main() 
{
	printf("=======================================================\n");
	printf("�̸� : ������\n");
	printf("�й� : 202022338\n");
	printf("=======================================================\n\n");

	int game_set = 1;
	while (game_set) //game_set�� 1, �� ���̹Ƿ� while���� ��� ����
	{
		goal = 0, count = 0;//goal�� ��ǥ����, count�� ����Ǽ�
		if (check_start_game() == 0)
		{
			game_set = 0;//check_start_game()�� 0�ϰ�� while���� �׸� ����
			break;
		}

		do {
			printf("��ǥ ������ �Է��ϼ���: "); //���� �� ������ ����ϰ�, �Է��� �޴´�.
			scanf("%d", &goal); 
			getchar(); //enter�� �ݺ����� ���鼭 scanf�� �޾Ƽ� "�߸��� �Է��Դϴ�"�� ����µǹǷ� enter�� ó������ �Լ� getchar�� �ִ´�.
		} while (!check_input(goal)); //check_input(goal)�Լ��� ��ȯ���� not�� 0�̶�� while���� �׸� ����.

		count_case(0); //����� ���� ����ϴ� �Լ��� ȣ���Ѵ�.
		printf("������ ����� ����: %d\n\n", count);
		printf("=======================================================\n\n");
	}

	printf("������ �����մϴ�.\n\n");
	return 0;
}