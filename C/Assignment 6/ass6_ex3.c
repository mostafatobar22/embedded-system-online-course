/*
 ============================================================================
 Name        : ass6_ex3.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[100];
	char *p=str;
	int x ,y ;

	printf("Input a string : ");
	fflush(stdout); fflush(stdin);
	scanf("%s",str);

	for(x=0 ; x<99 ; x++){
		if (str[x] != 0){
			y++;
		}
		else
			break ;
	}

	p=p+y;
	printf("Reverse of the string is : ");
	for(x=y ; x>=0 ; x--){
		printf("%c" , *p);
		p--;
	}

	return EXIT_SUCCESS;
}
