#include <stdio.h>

int main()
{
	int n, i, prime=1;
	printf("���� ���� n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=0;break;
		}
	}
	if(prime==1)
		printf(">>%d��(��) �Ҽ��Դϴ�.\n",n);
	else
		printf(">>%d��(��) �Ҽ��� �ƴմϴ�.\n",n);
}