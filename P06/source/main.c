#include<stdio.h>
#include<stdlib.h>

int xxx(int n);

int main(void)
{
	int x = 5;
	printf("The original value of number is %d", x);

	x = xxx(x);

	printf("\nThe new value of number is %d\n", x);
	system("pause");
	return 0;
}

int xxx(int n)
{
	return n * n*n;
}