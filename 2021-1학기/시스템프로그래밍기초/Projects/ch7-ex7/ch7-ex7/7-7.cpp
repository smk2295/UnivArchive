#include <stdio.h>
#define M 2		// ����� �� ������ ��ũ�� ����� ����
#define N 3		// ����� �� ������ ��ũ�� ����� ���� 

int main()
{
	int A[M][N], B[M][N], C[M][N];	// M��N ����� ������ �迭 �� �� ����
	int i, j;
                                                   
	// ��� A �Է�
	printf("\n��� A �Է� \n");
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
		{ 
			printf("%d�� %d��? ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}

	// ��� B �Է�
	printf("\n��� B �Է� \n");
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
		{ 
			printf("%d�� %d��? ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}

	// �� ����� ���� �迭 C�� ���ϱ�
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			C[i][j] = A[i][j] + B[i][j]; 
	
	// �� ����� ���� ��� ����ϱ�		
	printf("\n ��� A     + \t ��� B     = \t ��� C\n");
	for(i=0; i<M; i++)
	{	
		// ��� A�� �� �� ��� 
		printf(" [ ");
		for(j=0; j<N; j++)
			printf("%2d ", A[i][j]);
		printf("] \t");

		// ��� B�� �� �� ��� 
		printf(" [ ");
		for(j=0; j<N; j++)
			printf("%2d ", B[i][j]);
		printf("] \t");

		// ��� C�� �� �� ��� 
		printf(" [ ");
		for(j=0; j<N; j++)
			printf("%2d ", C[i][j]);
		printf("] \n");
	}

	return 0;
}