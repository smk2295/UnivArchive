#include <stdio.h>

int main()
{
	char ch;

	printf("문자를 입력하세요.:");
	scanf("%c",&ch);

	printf("%c의 ASCII코드 값은 %d입니다.\n",ch,ch);

	return 0;
}