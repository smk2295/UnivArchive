#include <stdio.h>

int factorial(int n);

int main()
{	
	int n;

	printf("n!을 구하고 싶은 n은? "); scanf("%d", &n);
	printf("%d! = %d \n", n, factorial(n-1) * n); 
	
	return 0;
}
int factorial(int n)
{		
	if (n > 1)
		return factorial(n-1) * n;
	else 
		return 1;	
}