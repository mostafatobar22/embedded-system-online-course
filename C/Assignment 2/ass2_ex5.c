/*
 ============================================================================
 Name        : ass2_ex5.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("enter a character : ");
	fflush(stdout);
	scanf("%c",&x);

	int c =0;
	c=x;
	if(c>=65)
	{
		printf("%c is an alphabet",x);

	}
	else
	{
		printf("%c is not an alphabet",x);
	}

	return EXIT_SUCCESS;
}
