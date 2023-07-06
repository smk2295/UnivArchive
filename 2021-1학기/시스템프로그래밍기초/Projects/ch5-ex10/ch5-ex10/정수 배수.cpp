#include <stdio.h>

int main()
{
	int num, n;
	printf("수 입력:");
	scanf("%d", &num);
	printf("계산법(1,2,3):");
	scanf("%d", &n);
	switch(n)
	{
	case 1:printf("입력한 수는 %d입니다.\n", num);break;
	case 2:printf("입력한 수 %d의 2배수는 %d입니다.\n",num,num*2);break;
	case 3:printf("입력한 수 %d의 3배수는 %d입니다.\n",num,num*3);break;
	default:printf("잘못된 연산자입니다.\n");
	}
}