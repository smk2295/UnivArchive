#include <stdio.h>

int main()
{
	int oct, hex, sum;

	printf("8진수 16진수를 순서대로 입력하세요.:");
	scanf("%o %x",&oct,&hex);

	sum = oct + hex;

	printf("%o(8)+%x(16)=%d\n",oct,hex,sum);

	return 0;
}