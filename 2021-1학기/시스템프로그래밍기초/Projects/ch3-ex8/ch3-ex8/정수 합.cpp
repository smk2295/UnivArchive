#include <stdio.h>

int main()
{
	int oct, hex, sum;

	printf("8���� 16������ ������� �Է��ϼ���.:");
	scanf("%o %x",&oct,&hex);

	sum = oct + hex;

	printf("%o(8)+%x(16)=%d\n",oct,hex,sum);

	return 0;
}