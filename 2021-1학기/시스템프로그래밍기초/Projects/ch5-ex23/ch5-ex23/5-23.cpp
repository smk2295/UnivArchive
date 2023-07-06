#include <stdio.h>

int main()
{
	int f0=0, f1=1, f2, i, n;
	printf("피보나치 개수 입력:");
	scanf("%d",&n);
	if(n<2)
		printf("잘못된 값을 입력했습니다.\n");
	else
	{
		printf("\n*** 피보나치 수열 ***\n0,1");
		for(i=0;i<n-2;i++)
		{
			f2=f0+f1;
			printf(",%d",f2);
			f0=f1;
			f1=f2;
		}
		printf("입니다.\n");
	}
}

