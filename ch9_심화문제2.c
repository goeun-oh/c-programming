/*
��ȭ����2: 2���� �迭�� ����
�й�:202022338
�̸�:������
��¥:2022_05_03
*/

#include <stdio.h>
#define ROWSIZE 3
#define COLSIZE 4
int main()
{
	int i, j;
	int n_list[ROWSIZE][COLSIZE] = {
		{43,21,72,37},
		{54,97,42,17},
		{67,84,19,22}
	};
	for (i = 0; i < ROWSIZE; i++)
	{
		int COLSUM = 0;
		for (j = 0; j < COLSIZE; j++) {
			COLSUM += n_list[i][j];
		}
		printf("%d���� �� = %d\n", i, COLSUM);
	}
	for (i = 0; i < COLSIZE; i++)
	{
		int ROWSUM = 0;
		for (j = 0; j < ROWSIZE; j++)
		{
			ROWSUM += n_list[j][i];
		}
		printf("%d���� �� = %d\n", i, ROWSUM);
	}

	return 0;
}