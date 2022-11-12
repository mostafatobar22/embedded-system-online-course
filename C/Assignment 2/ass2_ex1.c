/*
 ============================================================================
 Name        : ass2_ex1.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=2;
	int y=0;
	int c=0;
	printf("Enter an integer you want to check : ");
	fflush(stdout);
	scanf("%d",&y);
	c=y%x;

	if(c==1){
		printf("%d is odd",y);
	}
	else{
		printf("%d is even",y);

	};

	return EXIT_SUCCESS;
}
