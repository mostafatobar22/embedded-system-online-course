/*
 ============================================================================
 Name        : ass1_ex7.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
		printf("Enter value of a: ");
		fflush(stdout);
		scanf("%f" , &a);
		printf("Enter value of b: ");
		fflush(stdout);
		scanf("%f" , &b);
		a=a-b;
		b=a+b;
		a=b-a;
				printf("After swapping, value of a = %f \n"  , a);
					printf("After swapping, value of b = %f"  , b);
	return EXIT_SUCCESS;
}
