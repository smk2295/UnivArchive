#include <stdio.h>
#include <stdlib.h>		// exit, system �Լ��� ���� ��� ����
#include <conio.h>		// getch �Լ��� ���� ��� ����
#define PASS 1			// ��й�ȣ�� ��ġ�� ���� ��ȯ �� 1�� ��ũ�� ����� ����
#define FAIL 0			// ��й�ȣ�� �ٸ� ���� ��ȯ �� 0�� ��ũ�� ����� ����

void display_menu();				// ���� ��� ǥ��
int check_PW();						// ��й�ȣ Ȯ�� ����
void check_balance(int balance);	// �ܾ� ��ȸ ����
int deposit(int balance);			// �Ա� ����, �� �Ա��� main�� �ܾ��� �����ؾ� �ϹǷ� �ܾ��� ��ȯ��
int withdraw(int balance);			// ��� ����, �� ����� main�� �ܾ��� �����ؾ� �ϹǷ� �ܾ��� ��ȯ��


int main()
{		
	int balance = 0;				// �� ������ ���� �ܾ��� �����ϴ� ���� ����, �ڵ� �ʱ�ȭ�� �ȵǹǷ� 0���� �ʱ�ȭ�ؾ� ��
	int service;					// ����ڰ� ���ϴ� ���� ��ȣ

	printf("�츮 �ý����� �湮�� �ּż� �����մϴ�.");

	// ����ڰ� �׸��α⸦ ������ �ʴ� �� ���񽺸� ��� �����ϱ�
	do
	{
		display_menu();				// ����ڿ��� �����ϴ� ���� ��� ǥ��
		printf("���ϴ� ���񽺸� �����ϼ���. "); 
		scanf("%d", &service);		// ����ڰ� ���ϴ� ���� ��ȣ �Է¹ޱ� 
		
		switch (service)
		{
			case 1: check_balance(balance); break;		// �ܾ� ��ȸ
			case 2: balance = deposit(balance); break;	// �Ա� ó��, �� �ܾ�(��������)�� �����ؾ� ��
			case 3: balance = withdraw(balance); break;	// ��� ó��, �� �ܾ�(��������)�� �����ؾ� ��
			case 4: exit(0);							// ���α׷� ����
		}

		/* ����ڰ� ���� ��� ȭ���� Ȯ���� �� 
		   �ƹ� Ű�� ������ ���� ȭ���� ����� �� ȭ�鿡�� �ٽ� �����ϱ� */
		printf("\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������.");
		getch();
		system("cls");
	} while (service != 4);			// 4. �׸��α⸦ �������� �ʴ� �� ��� �ݺ��ϱ�

	return 0;
}

// �ܾ� ��ȸ ���� �Լ�
void check_balance(int balance)
{
	if (check_PW() == PASS)
		printf("\n���� �ܾ�: %d�� \n", balance);
}

// �Ա�  ���� �Լ� �� ������ �ܾ��� ��ȯ�ؾ� ��
int deposit(int balance)
{
	int amount;
	
	printf("\n�Ա��Ͻ� �ݾ���? "); scanf("%d", &amount);

	balance += amount;
	printf("\n�Ա� �� ���� �ܾ�: %d��\n", balance);

	return balance;
}

// ��� ���� �Լ� �� ������ �ܾ��� ��ȯ�ؾ� ��
int withdraw(int balance)
{
	int amount;
	
	if (check_PW() == PASS)
	{
		printf("����Ͻ� �ݾ���? "); scanf("%d", &amount);
		if (balance < amount)
			printf("\n�ܾ��� �����մϴ�. ���� �ܾ� %d�� \n", balance);
		else
		{
			balance -= amount;
			printf("\n��� �� ���� �ܾ�: %d�� \n", balance);
		}
	}

	return balance;
}

// ������� ��й�ȣ�� �ý��� ��й�ȣ�� ���� ��ġ ���� ��ȯ�ϱ�
int check_PW()
{
	static int count = 0;	// �� �Լ����� �߻��� ��й�ȣ ���� Ƚ���� �����ϴ� ���� ���� ����
	int system_PW = 1111;	// ������ �ý��� ���� ��й�ȣ
	int limit = 3;			// ��й�ȣ ���� ���� Ƚ��
	int input_PW;			// ����ڰ� �Է��� ��й�ȣ
	
	printf("\n�ý��� ��й�ȣ�� �Է��ϼ���.");
	scanf("%d", &input_PW);

	if (input_PW == system_PW)	// ��й�ȣ�� �´� ���
		return PASS;
	else						// ��й�ȣ�� Ʋ�� ��� 
	{
		count++;				// ��й�ȣ ���� �߻� Ƚ���� 1����
		if (count == limit)		// ��й�ȣ ������ 3ȸ �߻��� ���
		{
			printf("��й�ȣ ���� 3ȸ �߻�! \n");
			printf("�ź����� ������ ���񽺼��͸� �湮�ϼ���. \n");
			exit(0);			// ���α׷� ���� ����
		}
		else					// ��й�ȣ ������ �߻������� ���� �߻��� ���� 3ȸ�� �ƴ� ���
		{
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�. �� %dȸ ����!\n", count);
			return FAIL;
		}
	}
}

void display_menu()
{
	printf("\n\n");
	printf("==================\n");
	printf("== 1. �ܾ� ��ȸ ==\n");
	printf("== 2. �Ա�      ==\n");
	printf("== 3. ���      ==\n");
	printf("== 4. �׸��ϱ�  ==\n");
	printf("==================\n");
}