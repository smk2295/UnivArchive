#include <stdio.h>
#define SIZE 10

// 함수의 원형 선언
void print_arr(int arr[]);
int index_of_max(int arr[]);

// main 함수의 정의
int main()
{
	int quiz[SIZE] = {15, 4, 8, 9, 6, 13, 12, 10, 9, 11}; // 배열을 퀴즈 점수로 초기화하기
	int index;							// 최댓값원소의 배열 첨자

	// 최댓값의 배열 첨자 구하기
	index = index_of_max(quiz);

	// 배열 내용 출력하기
	printf(" 퀴즈 점수 목록:"); print_arr(quiz);

	// 최댓값 출력하기
	printf("\n 퀴즈 최고 점수 : quiz[%d]= %d \n", index, quiz[index]);

	return 0;
}

// 배열의 최댓값의 배열 첨자를 반환하는 함수
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

// 배열의 원소를 출력하는 함수
void print_arr(int arr[])
{
	int i;

	for (i=0; i<SIZE; i++)
		printf("%4d", arr[i]);
}
