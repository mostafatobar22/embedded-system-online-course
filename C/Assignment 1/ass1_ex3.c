/*
 ============================================================================
 Name        : ass1_ex3.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ;
	int y;
	int sum;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d" , &x );
	scanf("%d" , &y );
	sum=x+y;
	printf("sum = %d" , sum);

	return EXIT_SUCCESS;
}
