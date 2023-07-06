#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 6

void menu();
void order();
void check();

char name[N][7] = { "", "��Ʈ", "����","���찳","��","����" };
int unit_cost[N] = { 0,1000,500,300,800,1500 };
int number[N] = { 0 };

int main()
{
	int x;

	do {
		menu();
		printf("���ϴ� ���񽺸� �����ϼ���. ");
		scanf("%d", &x);

		switch (x)
		{
		case 1:order(); break;
		case 2:check(); break;
		case 3:exit(0);
		}

		printf("\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������.");
		getch();
		system("cls");
	} while (x != 3);

	return 0;
}

void menu()
{
	printf("ȯ���մϴ�.\n");
	printf("=======================\n");
	printf("== 1. ��ǰ �ֹ��ϱ�  ==\n");
	printf("== 2. �ֹ��� Ȯ���ϱ�==\n");
	printf("== 3. �����ϱ�       ==\n");
	printf("=======================\n");
}

void order()
{
	int a, b;

	system("cls");
	printf(">> ��ǰ �ֹ� �����Դϴ�.\n");
	printf("==========================\n");
	printf("    1. ��Ʈ      1000\n");
	printf("    2. ����       500\n");
	printf("    3. ���찳     300\n");
	printf("    4. ��         800\n");
	printf("    5. ����      1500\n");
	printf("==========================\n");

	printf("���ϴ� ��ǰ�� ��ȣ��? ");
	scanf("%d", &a);
	printf("%s��(��) �ֹ��� ������? ", name[a]);
	scanf("%d", &b);

	number[a] += b;

	printf("\n\n �ֹ��Ͻ� %s %d���� �� %d���Դϴ�.\n", name[a], b, unit_cost[a] * b);

}

void check()
{
	int total = 0;
	system("cls");
	printf("  ��ǰ �ֹ� ������\n");
	printf("========================\n");
	printf(" ��ǰ��  ����    ����\n");
	printf("------------------------\n");
	for (int i = 1; i < 6; i++)
		if (number[i] != 0)
		{
			printf("  %s   %3d     %d\n", name[i], number[i], unit_cost[i] * number[i]);
			total += unit_cost[i] * number[i];
		}
	printf("========================\n");
	printf(" �Ѿ�          %7d��\n",total);
}