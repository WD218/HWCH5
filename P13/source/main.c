#include<stdio.h>
#include<stdlib.h>

void xxx( int &np );

int main(void)
{
	int x = 5;
	printf("The original value of number is %d", x);

	xxx(x);
	 
	printf("\nThe new value of number is %d\n", x);
	system("pause");
	return 0;
}

void  xxx (int &np)
{
	np = np * np*np;
}