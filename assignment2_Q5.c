/*
5. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char CValue)
{
	BOOL bRet = FALSE;

	if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' || CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
	{
		bRet = TRUE;
	}

	return bRet;
	
}

void Display(BOOL boolean,char CValue)
{
	if(boolean)
	{
		printf("Character %c is Vowel \n",CValue);
	}
	else
	{
		printf("Character %c is not Vowel \n",CValue);
	}
	
}

int main()
{
	char CValue = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&CValue);

	BOOL bRet = ChkVowel(CValue);
	Display(bRet,CValue);

	return 0;
}
