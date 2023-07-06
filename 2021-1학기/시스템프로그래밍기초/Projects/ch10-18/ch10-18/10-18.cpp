#include <stdio.h>
#define SIZE 10

// �Լ��� ���� ����
void print_arr(int arr[]);
int index_of_max(int arr[]);

// main �Լ��� ����
int main()
{
	int quiz[SIZE] = {15, 4, 8, 9, 6, 13, 12, 10, 9, 11}; // �迭�� ���� ������ �ʱ�ȭ�ϱ�
	int index;							// �ִ񰪿����� �迭 ÷��

	// �ִ��� �迭 ÷�� ���ϱ�
	index = index_of_max(quiz);

	// �迭 ���� ����ϱ�
	printf(" ���� ���� ���:"); print_arr(quiz);

	// �ִ� ����ϱ�
	printf("\n ���� �ְ� ���� : quiz[%d]= %d \n", index, quiz[index]);

	return 0;
}

// �迭�� �ִ��� �迭 ÷�ڸ� ��ȯ�ϴ� �Լ�
int index_of_max(int arr[])
{
	int i, index, max;

	max = arr[0];
	index = 0;
	for (i=1; i<SIZE; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	
	return index;
}

// �迭�� ���Ҹ� ����ϴ� �Լ�
void print_arr(int arr[])
{
	int i;

	for (i=0; i<SIZE; i++)
		printf("%4d", arr[i]);
}
