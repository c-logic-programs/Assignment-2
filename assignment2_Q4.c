/*
4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/

#include<stdio.h>

void DisplayConvert(char CValue)
{
	if(CValue >= 'a' && CValue <= 'z')
	{
		printf("%c",CValue-32);
	}
	else if(CValue >= 'A' && CValue <= 'Z')
	{
		printf("\n%c\n",CValue+32);
	}
}

int main()
{
	char CValue = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&CValue);

	DisplayConvert(CValue);
	return 0;
}
