#include <stdio.h>

int main()
{
	char unit;
	double length;
	printf("입력 단위가 cm이면 'c'나 'C'를, inch이면 'i'나 'I'를 입력하세요.\n");
	printf("입력 단위:");
	scanf("%c",&unit);
	printf("입력 값:");
	scanf("%lf",&length);

	if(unit=='i' || unit=='I')
		printf("입력한 %.2lfinch는 %.2lfcm입니다.\n",length,length*2.54);
	else if(unit=='c' || unit=='C')
		printf("입력한 %.2lfcm는 %.2lfinch입니다.\n",length,length/2.54);
	else
		printf("잘못된 값을 입력하셨습니다.\n");
}