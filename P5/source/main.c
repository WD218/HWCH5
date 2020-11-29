#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int *ap;

	a = 7;
	ap = &a;

	printf("The address of a is %p""\nThe value of ap is%p", &a, ap);

	printf("\n\nThe value of a is %d""\nThe value of *ap is %d", a, *ap);

	printf("\n\nShowing that * and & are complements of"
		"each other\n&*ap = %p"
		"\n*&ap = %p\n", &*ap, &*ap);
	system("pause");
	return 0;
}