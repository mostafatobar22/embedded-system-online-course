/*
 ============================================================================
 Name        : ass1_ex4.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x ;
	float y;
	float product;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f" , &x );
	scanf("%f" , &y );
	product=x*y;
	printf("product = %f" , product);

	return EXIT_SUCCESS;
}
