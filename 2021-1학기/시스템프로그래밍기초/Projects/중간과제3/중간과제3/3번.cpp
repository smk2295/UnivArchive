#include <stdio.h>

int main(void)
{
	int num,i;
	num = 0;
	printf("10000이하의 정수를 입력 : ");
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