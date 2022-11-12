/*
 ============================================================================
 Name        : ass2_ex6.c
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
	int sum=0;

	printf("enter an integer : ");
	fflush(stdout);
	scanf("%d",&n);

	for(int i=0;i<=n;i++)
	{
		sum = sum+i;

	}
	printf("sum = %d " ,sum);
	return EXIT_SUCCESS;
}
