#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x;
	int trial = 0;	

	do
	{
		printf("Guess a number :"); //�Է��ض� ���� ���
		scanf("%d", &x); //�Է��� ����
		if (x > answer)
		{
			printf("high\n");
			trial++;
		}
		else if (x < answer)
		{
			printf("low\n");
			trial++;
		}
		else
		{
			printf("correct!");
			trial++;
		}
	}while (x != answer);

	printf("Number of trial = %i\n", trial);//�õ� Ƚ�� ���	
	return 0;
}
