#include <stdio.h>

int main()
{
	int x1,y1,x2,y2;
	int a1,b1,a2,b2;
	int garo=0,sero=0;
	
	printf("square1 : ");
	scanf(" %d %d %d %d",&x1,&y1,&x2,&y2);
	printf("square2 : ");
	scanf(" %d %d %d %d",&a1,&b1,&a2,&b2);
	
	//printf("%d %d %d %d\n",x1,y1,x2,y2);
	//printf("%d %d %d %d",a1,b1,a2,b2);
	
	if((a1>=x1)&&(a1<=x2))
	{
		garo=1;
	}
	if((a2>=x1)&&(a2<=x2))
	{
		garo=1;
	}
	
	if((b1>=y1)&&(b1<=y2))
	{
		sero=1;
	}
	if((b2>=y1)&&(b2<=y2))
	{
		sero=1;
	}
	
	if(garo*sero)
	{
		printf("두 사각형이 겹칩니다.\n");
	}
	else
	{
		printf("두 사각형이 겹치지않습니다.\n");
	}
	
	return 0;
}