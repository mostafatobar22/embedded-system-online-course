/*
 ============================================================================
 Name        : ass1_ex2.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0;
	printf("Enter a integer : "); /* prints !!!Hello World!!! */
	fflush(stdout);
	scanf("%d",&x);
	printf("you entered : %d " , x);
	return EXIT_SUCCESS;
}
