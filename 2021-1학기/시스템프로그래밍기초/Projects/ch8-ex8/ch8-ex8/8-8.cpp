#include <stdio.h>

#define FREE_VOICE 100			
#define FREE_TEXT 20			
#define BASIC_CHARGE 10000		
#define TEXT_RATE 20			


int voice_charge(int voice);
int text_charge(int text);

int main()
{
	int voice, text;		
	int V_charge, T_charge;	
	int charge;				
	

	printf("음성 통화 시간은(분)? "); scanf("%d", &voice);
	printf("문자 전송 건수는? "); scanf("%d", &text);
	
	V_charge = voice_charge(voice);	
	T_charge = text_charge(text);	

	charge = BASIC_CHARGE + V_charge + T_charge ;
		
	
	printf("\n\n");
	printf("휴대폰 사용 요금 청구서    \n");
	printf("============================================ \n");
	printf("음성 통화 시간 %2d분       \n", voice);
	printf("문자 전송 건수 %2d건       \n", text);
	printf("-------------------------------------------- \n");
	printf("기본요금                           %6d원 \n", BASIC_CHARGE);
	printf("음성 통화료 %3d분                  %6d원 \n", voice, V_charge );
	if (text >= FREE_TEXT)
		printf("문자 전송료 초과 %2d건(20건 무료)   %6d원 \n", text -  FREE_TEXT, T_charge);
	printf("-------------------------------------------- \n");
	printf("합계                               %6d원 \n", charge);
	printf("부가세(10%%)                        %6.0lf원 \n", charge * 0.1);
	printf("============================================ \n");
	printf("이번 달 요금                       %6.0lf원 \n", charge * 1.1);

	return 0;
}


int voice_charge(int voice)
{
	if (voice >= FREE_VOICE)
		return (FREE_VOICE * 100 + (voice - FREE_VOICE) * 80);
	else
		return (voice * 100);	
}


int text_charge(int text)
{
	if (text >= FREE_TEXT)
		return (text - FREE_TEXT) * 20;
	else
		return 0;
}