/*
 ============================================================================
 Name        : ass6_ex2.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[27];
	char *p = arr;
	int x ;
	for (x=0 ; x<26 ; x++){
		arr[x]='A'+x;
	}
	for (x=0 ; x<26 ; x++){
		printf("%c-" , *p);
			p++;
	}


	return EXIT_SUCCESS;
}
