#include <stdio.h>
#define NUMBER(x) printf("\t%4o\t%4d\t%4x\n",x,x,x);
int main()
{
	int i;

	printf("    -----------------------------\n");
	printf("\t8����\t10����\t16����\n");
	printf("    -----------------------------\n");
	for(i=1;i<=15;i++)
		NUMBER(i);
	printf("    -----------------------------\n");
}