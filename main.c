#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num=0;

	printf("input a string :");

	while ((c = getchar()) != '\n') //입력 문자가 개행문자가 나올 때까지 반복 
	{
		if (c >= '0' && c <= '9')
			num = num+1;
	}
	printf("the number of digits is %d\n", num);
	return 0;
}
