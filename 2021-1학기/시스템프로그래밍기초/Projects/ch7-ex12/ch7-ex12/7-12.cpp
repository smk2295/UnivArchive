#include <stdio.h>
#define STUDENT 10		
#define N 10			
#define YES 1
#define NO 0

int main()
{
	int paper[STUDENT][N]= {{1, 3, 2, 3, 4, 2, 3, 1, 4, 3},
							{1, 2, 2, 2, 4, 2, 3, 1, 4, 2},
							{4, 3, 2, 3, 4, 2, 3, 1, 4, 2},
							{1, 3, 2, 2, 4, 3, 3, 4, 4, 2},
							{1, 3, 2, 3, 4, 2, 3, 3, 4, 1},
							{1, 1, 2, 4, 4, 3, 3, 2, 4, 3},
							{1, 3, 2, 3, 4, 2, 3, 1, 4, 2},
							{1, 3, 2, 3, 3, 2, 3, 1, 4, 2},
							{2, 3, 3, 3, 3, 2, 4, 1, 4, 2},
							{3, 4, 4, 2, 4, 1, 2, 1, 4, 2} };	
	int answer[N]={1, 3, 2, 3, 4, 2, 3, 1, 4, 2};			
	int total[STUDENT]= {0}, id[STUDENT], rank[STUDENT];	
	int i, j, u, std, pass, temp, swap;

	for (i=0; i<STUDENT; i++)
	{
		id[i]=i+1;
	}	
	
	printf("\n\t ■ 문항별 채점 결과 ■ \n");	
	printf("=====================================================\n");
	printf(" 문항");
	for (i=0; i<N; i++)
		printf("%4d", i);
	printf("   점수");	
	printf("\n=====================================================\n");

	for (std=0; std<STUDENT; std++)
	{
		printf("%3d번 ", std+1);	

		for (i=0; i<N; i++)
			if (paper[std][i] == answer[i])
			{
				total[std]++;
				printf("  ○");	
			}
			else 
				printf("  ×");  

		printf(" %3d점 \n", total[std]);
	}
	printf("=====================================================\n");

		
	for (pass=1; pass<STUDENT; pass++) 
	{
		swap=NO;
		for (i=0; i<STUDENT-pass; i++)
		     if (total[i] < total[i+1])
		     {
			  	
				temp = total[i];
			  	total[i] = total[i+1];
			  	total[i+1] = temp;
				
				
				temp = id[i];
			  	id[i] = id[i+1];
			  	id[i+1] = temp;

				swap=YES;
		     }
			 
		
		if (swap==NO) break;
	}
	
	
	for (i=0; i<STUDENT; i++)
	{
		rank[i] = 1;	
		for (u=0; u<STUDENT; u++)
			if (total[i] < total[u])	
				rank[i]++;							
	}	

	printf("\n\t ■ 정렬 및 석차 ■ \n");
	printf("\t ===================\n");
	printf("\t  번호  점수  석차 \n");
	printf("\t ===================\n");
	for ( i = 0 ;  i< STUDENT; i++ )
		 printf("\t  %2d번  %2d점 %2d등 \n", id[i], total[i], rank[i]);	
	printf("\t ===================\n\n");

	return 0;
}
