/*
 ============================================================================
 Name        : ass1_ex6.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,d;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f" , &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f" , &b);
	c=a;
	d=b;
	printf("After swapping, value of a = %f \n"  , d);
	printf("After swapping, value of b = %f"  , c);
	return EXIT_SUCCESS;
}
