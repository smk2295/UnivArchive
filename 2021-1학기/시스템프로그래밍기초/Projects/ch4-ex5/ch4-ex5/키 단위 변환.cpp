#include <stdio.h>

int main()
{
	double cm;
	printf("Ű(cm)�� �Է��ϼ���:");
	scanf("%lf",&cm);

	printf("�Է��Ͻ� Ű %.2lf��Ƽ���ʹ� %.2lf��Ʈ�� %.2lf��ġ�� �ش�˴ϴ�.\n",cm,cm/2.54/12,cm/2.54);

	return 0;
}