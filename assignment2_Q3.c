/*
2. Write a program which accept number from user and print even factors of that
number.
Input : 24
Output: 1
2
4
6
8
12
*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	
	for(int i = 1; i <= iNo/2; i++)
	{
		if(iNo % i == 0)
		{
			printf("%d \t",i);
		}
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);

	DisplayFactor(iNo);
	return 0;
}
