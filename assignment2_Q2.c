/*
1.Write a program which accept one number from user and print that number of
even numbers on screen.
Input : 7
Output: 2
4
6
8
10
12
14
*/

#include<stdio.h>

void PrintEven(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}
	
	int iCnt = 0;
	for(int i = 0; i < iNo; i++)
	{
		iCnt += 2;
		printf("%d \t",iCnt);
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);

	PrintEven(iNo);
	return 0;
}
