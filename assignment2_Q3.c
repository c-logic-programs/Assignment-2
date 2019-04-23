/*
3. Write a program which accept number from user and print even factors of that
number.
Input : 36
Output: 2
6
12
18
*/

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	
	for(int i = 1; i <= iNo/2; i++)
	{
		if(iNo % i == 0 && i % 2 == 0)
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

	DisplayEvenFactor(iNo);
	return 0;
}
