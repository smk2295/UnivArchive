#include <stdio.h>

int main()
{
	int f0=0, f1=1, f2, i, n;
	printf("�Ǻ���ġ ���� �Է�:");
	scanf("%d",&n);
	if(n<2)
		printf("�߸��� ���� �Է��߽��ϴ�.\n");
	else
	{
		printf("\n*** �Ǻ���ġ ���� ***\n0,1");
		for(i=0;i<n-2;i++)
		{
			f2=f0+f1;
			printf(",%d",f2);
			f0=f1;
			f1=f2;
		}
		printf("�Դϴ�.\n");
	}
}

