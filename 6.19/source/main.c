#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int x[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int a,b;
	int c;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 36000; i++)
	{
	
		a=rand()%6+1;
		b=rand()%6+1;
		c = a+b;
		for (int j = 2; j < 13; j++)
		{
			if (j == c)
				x[j]++;
		}
	}
	for (int i = 2; i < 13; i++)
	{
		printf("點數%d共出現%d次\n", i, x[i]);
	}
	system("pause");
	return 0;
}