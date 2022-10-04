#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	char op;
	int result;
	
	printf("enter the calculation :");
	scanf("%d %c %d", &x, &op, &y);
	
	if(op =='+')
	{
		result = x+y;
		printf("%d",result);
	}
	else if(op == '-')
	{
		result = x-y;
		printf("%d",result);
	}
		
	else if(op == '*')
	{
		result = x*y;
		printf("%d",result);
	}
	else
	{
		result = x/y;
		printf("%d",result);
	}
	return 0;
}
