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
	

	printf("���� ��ȭ �ð���(��)? "); scanf("%d", &voice);
	printf("���� ���� �Ǽ���? "); scanf("%d", &text);
	
	V_charge = voice_charge(voice);	
	T_charge = text_charge(text);	

	charge = BASIC_CHARGE + V_charge + T_charge ;
		
	
	printf("\n\n");
	printf("�޴��� ��� ��� û����    \n");
	printf("============================================ \n");
	printf("���� ��ȭ �ð� %2d��       \n", voice);
	printf("���� ���� �Ǽ� %2d��       \n", text);
	printf("-------------------------------------------- \n");
	printf("�⺻���                           %6d�� \n", BASIC_CHARGE);
	printf("���� ��ȭ�� %3d��                  %6d�� \n", voice, V_charge );
	if (text >= FREE_TEXT)
		printf("���� ���۷� �ʰ� %2d��(20�� ����)   %6d�� \n", text -  FREE_TEXT, T_charge);
	printf("-------------------------------------------- \n");
	printf("�հ�                               %6d�� \n", charge);
	printf("�ΰ���(10%%)                        %6.0lf�� \n", charge * 0.1);
	printf("============================================ \n");
	printf("�̹� �� ���                       %6.0lf�� \n", charge * 1.1);

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