#include <stdio.h>

int main()
{
	int GB;
	printf("�Է�(Gigabyte):");
	scanf("%d",&GB);

	printf(">>%dGigabyte=%dMegabyte=%dKillobyte\n",GB,GB*1024,GB*1024*1024);

	return 0;
}