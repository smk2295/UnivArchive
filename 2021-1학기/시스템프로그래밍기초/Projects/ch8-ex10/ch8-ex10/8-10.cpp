#include <stdio.h>
#define PERSONS 30	
#define STARS 6		

int rank(int ary[STARS], int value);
int frequency(int arr[PERSONS], int value);

int main()
{	
	int survey[PERSONS] = {1, 3, 2, 5, 3, 2, 1, 2, 3, 4, 5, 2, 3, 3, 2, 
                           1, 4, 5, 2, 3, 5, 1, 3, 4, 2, 3, 1, 4, 2, 3};
	int i, vote[STARS] = {0};
	char name[STARS][7] = {"", "º∫√·«‚", "¿Â»≠", "∞©µπ¿Ã", "∞©º¯¿Ã", "¿Ã∏˘∑Ê"};

	for (i=1; i<STARS; i++) 
		vote[i] = frequency(survey, i);	
		
	printf("ø¨øπ¿Œ  µÊ«•ºˆ  º¯¿ß \n");
	printf("==================== \n");
	for (i=1; i<STARS; i++) 
		printf("%-6s    %2d«•    %d \n", name[i], vote[i], rank(vote, vote[i]));

	return 0;
}
int frequency(int arr[], int value)
{
	int i, count = 0;
	
	for (i=0; i<PERSONS; i++)
		if (arr[i] == value)
			count++;

	return count;                                  
}
int rank(int ary[], int value)
{
	int count, i;

	count = 0;
	for (i=0; i<STARS; i++)
	{
		if (value < ary[i])
			count++;
	}
	
	return count+1;	
}