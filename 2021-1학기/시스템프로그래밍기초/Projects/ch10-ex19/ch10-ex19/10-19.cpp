#include <stdio.h>
#include <string.h>
#define N 10

int search(char *name, char name_lsit[N][9]);	//	int search(char *name, char (*name_lsit)[9]);

int main()
{
	char who[9], name[N][9] = {"������", "������", "������", "���ǿ�", "������", 
                          "������", "�嵵��", "�����", "�̳���", "���ؼ�"};
	char phone[N][14] = {"010-5228-7889", "010-5211-1472", 
                     "010-1235-8765", "010-8282-8282", "010-5165-3483", 
                     "010-5232-1628", "010-3452-1676", "010-5210-5463",  
                     "010-5210-1234", "010-8255-8255"};
	double grade[N] = {4.3, 4.0, 3.2, 2.7, 3.2, 4.0, 4.4, 3.7, 4.2, 3.8};
	int index;		// who�� ���� �̸��� �л����� ������ ����

	printf("������ ã�� ���� �л��� �̸���? "); scanf("%s", who);
	
	// who�� �̸��� name �迭�� �ִ� ��, �ִٸ� �� ÷�ڸ� ���ϱ� ���� search �Լ� ȣ��
	index = search(who, name);
	if (index != -1)
	{
		printf("\n\n �̸�           ��ȭ       ���� \n");
		printf("--------------------------------\n");	
		printf("%-10s %-14s %5.1lf \n",  name[index], phone[index], grade[index]);
	}
	else
		printf("%s �л��� ã�� �� �����ϴ�.\n", who);	

	
	return 0;
}

int search(char *name, char name_list[N][9])	//	int search(char *name, char (*name_list)[9])
{
	int i;
	for (i=0; i<N; i++) 
		if (strcmp(name, name_list[i]) == 0) 		
			return i;
	
	// name�̶� �̸��� nanme_list �迭�� ���ٸ� 
	return -1;
}