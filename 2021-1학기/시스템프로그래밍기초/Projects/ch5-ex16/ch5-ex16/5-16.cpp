#include <stdio.h>

int main()
{
	int i=1,sum=1;
	while(1)
	{
		i=i+1;
		if(sum+i>=1000)break;
		sum=sum+i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n",i-1,sum);
}		

	