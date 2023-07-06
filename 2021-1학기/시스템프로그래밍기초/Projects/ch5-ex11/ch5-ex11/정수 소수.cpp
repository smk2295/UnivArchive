#include <stdio.h>

int main()
{
	int n, i, prime=1;
	printf("양의 정수 n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=0;break;
		}
	}
	if(prime==1)
		printf(">>%d는(은) 소수입니다.\n",n);
	else
		printf(">>%d는(은) 소수가 아닙니다.\n",n);
}