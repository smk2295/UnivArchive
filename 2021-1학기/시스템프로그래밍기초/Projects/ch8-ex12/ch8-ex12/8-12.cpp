#include <stdio.h>

int factorial(int n);

int main()
{	
	int n;

	printf("n!�� ���ϰ� ���� n��? "); scanf("%d", &n);
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