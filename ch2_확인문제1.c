/*
Ȯ�ι��� 1 ����, ��� ����, ����, ������ �Է¹޾� �����ϰ� ����ϴ� ���α׷� �ۼ�
�й�: 202022338
�̸�: ������
��¥: 20220323
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main() 
{
	int student_id, age;
	char sex;
	float gpa, weight;
	
	student_id = 202022338;

	printf("�й�: %d, �̸�: %s\n", student_id, "������");
	
	printf("����: ");
	scanf("%d", &age);
	
	printf("gpa: ");
	scanf("%f", &gpa);

	printf("����: ");
	scanf("%s", &sex);

	printf("������: ");
	scanf("%f", &weight);

	printf("����: %d, gpa:%.1f, ����: %c, ������:%.2f\n", age, gpa, sex, weight);

	
	return 0;
}