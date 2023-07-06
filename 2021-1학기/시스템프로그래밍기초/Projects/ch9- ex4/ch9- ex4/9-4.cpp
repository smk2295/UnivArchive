#include <stdio.h>
#include <stdlib.h>		// exit, system 함수를 위한 헤더 파일
#include <conio.h>		// getch 함수를 위한 헤더 파일
#define PASS 1			// 비밀번호가 일치할 때의 반환 값 1을 매크로 상수로 정의
#define FAIL 0			// 비밀번호가 다를 때의 반환 값 0을 매크로 상수로 정의

void display_menu();				// 서비스 목록 표시
int check_PW();						// 비밀번호 확인 서비스
void check_balance(int balance);	// 잔액 조회 서비스
int deposit(int balance);			// 입금 서비스, ★ 입금후 main의 잔액을 수정해야 하므로 잔액을 반환함
int withdraw(int balance);			// 출금 서비스, ★ 출금후 main의 잔액을 수정해야 하므로 잔액을 반환함


int main()
{		
	int balance = 0;				// ★ 계좌의 현재 잔액을 저장하는 지역 변수, 자동 초기화가 안되므로 0으로 초기화해야 함
	int service;					// 사용자가 원하는 서비스 번호

	printf("우리 시스템을 방문해 주셔서 감사합니다.");

	// 사용자가 그만두기를 원하지 않는 한 서비스를 계속 제공하기
	do
	{
		display_menu();				// 사용자에게 제공하는 서비스 목록 표시
		printf("원하는 서비스를 선택하세요. "); 
		scanf("%d", &service);		// 사용자가 원하는 서비스 번호 입력받기 
		
		switch (service)
		{
			case 1: check_balance(balance); break;		// 잔액 조회
			case 2: balance = deposit(balance); break;	// 입금 처리, ★ 잔액(지역변수)을 수정해야 함
			case 3: balance = withdraw(balance); break;	// 출금 처리, ★ 잔액(지역변수)을 수정해야 함
			case 4: exit(0);							// 프로그램 종료
		}

		/* 사용자가 서비스 결과 화면을 확인한 후 
		   아무 키나 누르면 현재 화면을 지우고 새 화면에서 다시 시작하기 */
		printf("\n계속 서비스를 원하시면 아무키나 누르세요.");
		getch();
		system("cls");
	} while (service != 4);			// 4. 그만두기를 선택하지 않는 한 계속 반복하기

	return 0;
}

// 잔액 조회 서비스 함수
void check_balance(int balance)
{
	if (check_PW() == PASS)
		printf("\n현재 잔액: %d원 \n", balance);
}

// 입금  서비스 함수 ★ 수정된 잔액을 반환해야 함
int deposit(int balance)
{
	int amount;
	
	printf("\n입금하실 금액은? "); scanf("%d", &amount);

	balance += amount;
	printf("\n입금 후 현재 잔액: %d원\n", balance);

	return balance;
}

// 출금 서비스 함수 ★ 수정된 잔액을 반환해야 함
int withdraw(int balance)
{
	int amount;
	
	if (check_PW() == PASS)
	{
		printf("출금하실 금액은? "); scanf("%d", &amount);
		if (balance < amount)
			printf("\n잔액이 부족합니다. 현재 잔액 %d원 \n", balance);
		else
		{
			balance -= amount;
			printf("\n출금 후 현재 잔액: %d원 \n", balance);
		}
	}

	return balance;
}

// 사용자의 비밀번호와 시스템 비밀번호를 비교해 일치 여부 반환하기
int check_PW()
{
	static int count = 0;	// 이 함수에서 발생한 비밀번호 오류 횟수를 저장하는 정적 지역 변수
	int system_PW = 1111;	// 정해진 시스템 서비스 비밀번호
	int limit = 3;			// 비밀번호 오류 제한 횟수
	int input_PW;			// 사용자가 입력한 비밀번호
	
	printf("\n시스템 비밀번호를 입력하세요.");
	scanf("%d", &input_PW);

	if (input_PW == system_PW)	// 비밀번호가 맞는 경우
		return PASS;
	else						// 비밀번호가 틀린 경우 
	{
		count++;				// 비밀번호 오류 발생 횟수를 1증가
		if (count == limit)		// 비밀번호 오류가 3회 발생한 경우
		{
			printf("비밀번호 오류 3회 발생! \n");
			printf("신분증을 가지고 서비스센터를 방문하세요. \n");
			exit(0);			// 프로그램 실행 종료
		}
		else					// 비밀번호 오류가 발생했으나 오류 발생이 아직 3회가 아닌 경우
		{
			printf("비밀번호가 틀렸습니다. 총 %d회 오류!\n", count);
			return FAIL;
		}
	}
}

void display_menu()
{
	printf("\n\n");
	printf("==================\n");
	printf("== 1. 잔액 조회 ==\n");
	printf("== 2. 입금      ==\n");
	printf("== 3. 출금      ==\n");
	printf("== 4. 그만하기  ==\n");
	printf("==================\n");
}