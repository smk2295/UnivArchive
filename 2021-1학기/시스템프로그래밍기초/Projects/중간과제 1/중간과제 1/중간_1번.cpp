#include <stdio.h>

int main()
{
	int year, month;

	printf("�⵵ �� �Է�:");
	scanf("%d %d",&year,&month);

	if(month==2)
		if((year%4==0 && year%100!=0)||(year%4==0 && year%400==0))
			printf("%d�� %d���� �� 29���Դϴ�.\n",year,month);
		else printf("%d�� %d���� �� 28���Դϴ�.\n",year,month);
	else if(month==4||month==6||month==9||month==11)
		printf("%d�� %d���� �� 30���Դϴ�.\n",year,month);
	else printf("%d�� %d���� �� 31���Դϴ�.\n",year,month);
}