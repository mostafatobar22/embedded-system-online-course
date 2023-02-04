/*
 ============================================================================
 Name        : ass6_ex1.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m =29;
	int *ab = &m;
	printf("Address of m : %x \n ", &m);
	printf("Value of m : %d \n",m);
	printf("Now ab is assigned with the address of m. \n");
	printf("Address of pointer ab : %x \n ", ab);
	printf("Content of pointer ab : %d \n ", *ab);
	printf("The value of m assigned to 34 now. \n ");
	m =34;
	printf("Address of pointer ab : %x \n ", ab);
	printf("Content of pointer ab : %d \n ", *ab);
	*ab =7 ;
	printf("Address of m : %x \n ", &m);
	printf("Value of m : %d \n",m);
	return EXIT_SUCCESS;
}
