#include <stdio.h>
#define SIZE 10

int rank(int ary[SIZE], int value);

int main()
{
	int quiz[SIZE] = {10, 8, 7, 9, 6, 10, 9, 8, 7};
	int i, score;

	printf("%d���� ���� ����: ", SIZE); 
	for (i=0; i<SIZE; i++)
		printf("%d, ", quiz[i]);
	printf("\b\b  \n\n");	
	
	printf("������ ���� ������?"); 
	scanf("%d", &score);
		
	printf("%d���� %d���Դϴ� \n", score, rank(quiz, score));

	return 0;
}
int rank(int ary[SIZE], int value)
{
	int count, i;

	count = 0;
	for (i=0; i<SIZE; i++)
	{
		if (value < ary[i])
			count++;
	}
	
	return count+1;	
}