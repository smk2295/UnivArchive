#include <stdio.h>

int main()
{
	int year, month;

	printf("년도 달 입력:");
	scanf("%d %d",&year,&month);

	if(month==2)
		if((year%4==0 && year%100!=0)||(year%4==0 && year%400==0))
			printf("%d년 %d월은 총 29일입니다.\n",year,month);
		else printf("%d년 %d월은 총 28일입니다.\n",year,month);
	else if(month==4||month==6||month==9||month==11)
		printf("%d년 %d월은 총 30일입니다.\n",year,month);
	else printf("%d년 %d월은 총 31일입니다.\n",year,month);
}