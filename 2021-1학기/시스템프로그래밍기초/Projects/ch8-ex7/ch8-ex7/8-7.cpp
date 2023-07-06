#include <stdio.h>
#define TRUE 1  
#define FALSE 0

int leap_year(int y);
int last_day(int yy, int mm);	

int main()
{	
	int year, month;

	printf("������ ���� �˰� ���� ���� ������? "); scanf("%d", &year);
	printf("������ ���� �˰� ���� ����(1~12)? "); scanf("%d", &month);
	printf("%d�� %d���� %d�ϱ��� �ֽ��ϴ�. \n", year, month, last_day(year, month));	

	return 0;
}

int leap_year(int yy)			
{
	if (yy%400 == 0 || ((yy%4==0) && (yy%100 != 0)))
		return TRUE;			
	else 
		return FALSE;			
}

int last_day(int yy, int mm)
{
	if (mm==4 || mm==6 || mm==9 || mm==11)	
		return 30;
	else if(mm==2){
		if (leap_year(yy))	
			return 29;
		else                        
			return 28;
	}
	else
		return 31;
}