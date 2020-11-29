#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int b[] = { 10,20,30,40 };
	int *bp = b;
	int i;
	int off;

	printf("Array b printed with:\nArray subscript notation\n");
	for ( i = 0; i < 4; i++)
	{
		printf("b[%d]=%d\n", i, b[i]);
	}
	printf("\nPointer/offset notation where\n"
		"the pointer is the array name \n");
	for ( off = 0; off < 4; off++)
	{
		printf("*(b + %d) = %d\n", off, *(b + off));
	}
	printf("\nPointer subscript notation\n");
	for ( i = 0; i < 4; i++)
	{
		printf("bp[%d]=%d\n", i, bp[i]);
	}
	printf("\nPointer/offset notation\n");
	for ( off = 0; off < 4; off++)
	{
		printf("*(bp + %d) = %d\n", off, *(bp + off));
	}
	system("pause");
	return 0;
}