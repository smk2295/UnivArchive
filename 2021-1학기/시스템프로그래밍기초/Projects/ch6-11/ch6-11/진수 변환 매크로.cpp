#include <stdio.h>
#define NUMBER(x) printf("\t%4o\t%4d\t%4x\n",x,x,x);
int main()
{
	int x;

	printf("���� �Է�:");
	scanf("%d",&x);

	printf(">>��� : 8����\t10����\t16����\n");
	NUMBER(x);
}
