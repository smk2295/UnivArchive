#include <stdio.h>
#include <string.h>
#define N 10

int main()
{
	char name[N][9] = {"ȫ�浿", "�̸���", "������", "��������", "�ָ�", 
                          "����ȭ", "��ȫ��", "ȫ�浿", "�����", "�����"};
	char phone[N][14] = {"010-5210-1234", "010-523-1628", 
                     "010-1235-8765", "010-345-1676", "010-5210-5463", 
                     "010-523-7979", "010-5210-1472", "010-8255-8255",  
                     "010-516-3483", "010-8282-8282"};
	double grade[N] = {4.2, 4.0, 3.2, 4.4, 3.7, 2.9, 4.0, 3.8, 3.2, 2.7};
	int order[N];				
	int index, temp, i, repeat;	
	char swap;					 

	for (i=0; i<N; i++)
		order[i] = i;	

	for (repeat=1; repeat<N; repeat++) 
	{
		swap = 'N';				
		for (i=0; i<N-repeat; i++) 
		{
			if (strcmp(name[order[i]], name[order[i+1]]) > 0) 		
		     {
				temp = order[i];	
			  	order[i] = order[i+1];
			  	order[i+1] = temp;

				swap = 'Y';		
		     }
		}
		if (swap == 'N')		
			break;				
	}

	printf(" �̸�       ��ȭ��ȣ       ���� \n");
	printf("================================\n");
	for (i=0; i<N; i++)
	{
		index = order[i];
		printf("%-10s %-14s %5.1lf \n",  name[index], phone[index], grade[index]);

		if ((i+1)%5 ==0)
			printf("--------------------------------\n");
	}
	
	return 0;
}