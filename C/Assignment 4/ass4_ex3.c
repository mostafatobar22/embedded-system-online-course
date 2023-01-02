/*
 ============================================================================
 Name        : ass4_ex3.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse();

int main(void) {



	reverse();
	return EXIT_SUCCESS;
}
void reverse (){
	char c;
	printf("enter a sentence : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);
	if(c != '\n')
	{
		reverse();
		printf("%c",c);
	}
}
