#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 6

void menu();
void order();
void check();

char name[N][7] = { "", "노트", "연필","지우개","자","볼펜" };
int unit_cost[N] = { 0,1000,500,300,800,1500 };
int number[N] = { 0 };

int main()
{
	int x;

	do {
		menu();
		printf("원하는 서비스를 선택하세요. ");
		scanf("%d", &x);

		switch (x)
		{
		case 1:order(); break;
		case 2:check(); break;
		case 3:exit(0);
		}

		printf("\n계속 서비스를 원하시면 아무키나 누르세요.");
		getch();
		system("cls");
	} while (x != 3);

	return 0;
}

void menu()
{
	printf("환영합니다.\n");
	printf("=======================\n");
	printf("== 1. 상품 주문하기  ==\n");
	printf("== 2. 주문서 확인하기==\n");
	printf("== 3. 종료하기       ==\n");
	printf("=======================\n");
}

void order()
{
	int a, b;

	system("cls");
	printf(">> 상품 주문 서비스입니다.\n");
	printf("==========================\n");
	printf("    1. 노트      1000\n");
	printf("    2. 연필       500\n");
	printf("    3. 지우개     300\n");
	printf("    4. 자         800\n");
	printf("    5. 볼펜      1500\n");
	printf("==========================\n");

	printf("원하는 상품의 번호는? ");
	scanf("%d", &a);
	printf("%s을(를) 주문할 개수는? ", name[a]);
	scanf("%d", &b);

	number[a] += b;

	printf("\n\n 주문하신 %s %d개는 총 %d원입니다.\n", name[a], b, unit_cost[a] * b);

}

void check()
{
	int total = 0;
	system("cls");
	printf("  상품 주문 내역서\n");
	printf("========================\n");
	printf(" 상품명  개수    가격\n");
	printf("------------------------\n");
	for (int i = 1; i < 6; i++)
		if (number[i] != 0)
		{
			printf("  %s   %3d     %d\n", name[i], number[i], unit_cost[i] * number[i]);
			total += unit_cost[i] * number[i];
		}
	printf("========================\n");
	printf(" 총액          %7d원\n",total);
}