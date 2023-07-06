#include <stdio.h>

int main()
{
	int month;
	printf("월 입력:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
		case 2:
		case 3:printf(">> 1사분기입니다.\n");break;
		case 4:
		case 5:
		case 6:printf(">> 2사분기입니다.\n");break;
		case 7:
		case 8:
		case 9:printf(">> 3사분기입니다.\n");break;
		case 10:
		case 11:
		case 12:printf(">> 4사분기입니다.\n");break;
		default:printf(">> 잘못된 월을 입력하셨습니다.\n");
	}
}
