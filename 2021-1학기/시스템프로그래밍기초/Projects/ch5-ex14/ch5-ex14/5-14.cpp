#include <stdio.h>

int main()
{
	char unit;
	double length;
	printf("�Է� ������ cm�̸� 'c'�� 'C'��, inch�̸� 'i'�� 'I'�� �Է��ϼ���.\n");
	printf("�Է� ����:");
	scanf("%c",&unit);
	printf("�Է� ��:");
	scanf("%lf",&length);

	if(unit=='i' || unit=='I')
		printf("�Է��� %.2lfinch�� %.2lfcm�Դϴ�.\n",length,length*2.54);
	else if(unit=='c' || unit=='C')
		printf("�Է��� %.2lfcm�� %.2lfinch�Դϴ�.\n",length,length/2.54);
	else
		printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
}