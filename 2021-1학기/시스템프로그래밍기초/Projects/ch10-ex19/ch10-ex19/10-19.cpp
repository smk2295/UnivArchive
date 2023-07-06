#include <stdio.h>
#include <string.h>
#define N 10

int search(char *name, char name_lsit[N][9]);	//	int search(char *name, char (*name_lsit)[9]);

int main()
{
	char who[9], name[N][9] = {"나태희", "유현빈", "나원빈", "문건영", "소지법", 
                          "나보내", "장도건", "고수영", "이나라", "김해수"};
	char phone[N][14] = {"010-5228-7889", "010-5211-1472", 
                     "010-1235-8765", "010-8282-8282", "010-5165-3483", 
                     "010-5232-1628", "010-3452-1676", "010-5210-5463",  
                     "010-5210-1234", "010-8255-8255"};
	double grade[N] = {4.3, 4.0, 3.2, 2.7, 3.2, 4.0, 4.4, 3.7, 4.2, 3.8};
	int index;		// who와 같은 이름의 학생수를 저장할 변수

	printf("정보를 찾고 싶은 학생의 이름은? "); scanf("%s", who);
	
	// who란 이름이 name 배열에 있는 지, 있다면 행 첨자를 구하기 위해 search 함수 호출
	index = search(who, name);
	if (index != -1)
	{
		printf("\n\n 이름           전화       평점 \n");
		printf("--------------------------------\n");	
		printf("%-10s %-14s %5.1lf \n",  name[index], phone[index], grade[index]);
	}
	else
		printf("%s 학생은 찾을 수 없습니다.\n", who);	

	
	return 0;
}

int search(char *name, char name_list[N][9])	//	int search(char *name, char (*name_list)[9])
{
	int i;
	for (i=0; i<N; i++) 
		if (strcmp(name, name_list[i]) == 0) 		
			return i;
	
	// name이란 이름이 nanme_list 배열에 없다면 
	return -1;
}