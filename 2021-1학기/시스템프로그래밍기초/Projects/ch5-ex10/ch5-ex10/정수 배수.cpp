#include <stdio.h>

int main()
{
	int num, n;
	printf("�� �Է�:");
	scanf("%d", &num);
	printf("����(1,2,3):");
	scanf("%d", &n);
	switch(n)
	{
	case 1:printf("�Է��� ���� %d�Դϴ�.\n", num);break;
	case 2:printf("�Է��� �� %d�� 2����� %d�Դϴ�.\n",num,num*2);break;
	case 3:printf("�Է��� �� %d�� 3����� %d�Դϴ�.\n",num,num*3);break;
	default:printf("�߸��� �������Դϴ�.\n");
	}
}