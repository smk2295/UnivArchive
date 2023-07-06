#include <stdio.h>

int main()
{
	double fahrenheit, celsius;

	fahrenheit = 72.0;
	celsius = (5.0/9.0) * (fahrenheit - 32);

	printf("È­¾¾¿Âµµ %lfµµ´Â ¼·¾¾¿Âµµ %lfµµ ÀÔ´Ï´Ù.\n", fahrenheit, celsius);

	return 0;
}