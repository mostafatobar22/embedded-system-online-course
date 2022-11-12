/*
 ============================================================================
 Name        : ass4_ex2.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int a);
int main(void) {
	int z;
	int y;

	printf("enter an postive number : " );
	fflush(stdout); fflush(stdin);
	scanf("%d",&z);
	y=factorial(z);
	printf(" factorial of %d is %d",z,y);
	return EXIT_SUCCESS;
}
int factorial(int a){


	if(a!=1)
	return a*factorial(a-1);
}
