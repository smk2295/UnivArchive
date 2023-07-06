#include <stdio.h>

void static_sum(int end);

int main()
{
	int i;

	for (i = 0; i < 10; i++)
		static_sum(i);

	return 0;
}

void static_sum(int end)
{
	static int sum = 0;
	int n = end + 1;

	printf("%2d번째 호출, sum = %3d + 1 ~ %3d까지의 합: %3d\n", n, sum,  n, sum+n*(n+1)/2);

	sum += n * (n + 1) / 2;
}