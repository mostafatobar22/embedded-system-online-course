/*
 ============================================================================
 Name        : ass2_ex7.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n =0 ;
	int Factorial=1;

	printf("enter an integer : ");
	fflush(stdout);
	scanf("%d",&n);
	if(n>0)
	{

		for(int i=1;i<=n;i++)
		{
			Factorial=Factorial*i;

		}
		printf("Factorial = %d " ,Factorial);
	}
	else if (n==0)
	{
		printf("factorial for zero is = 1 ");
	}
	else
		printf("!!! ERROR  factorial for negative number does not exist ");

	return EXIT_SUCCESS;
}
