#include <stdio.h>

int main(void)
{
	int num,i;
	num = 0;
	printf("10000������ ������ �Է� : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(!(num%i))
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}