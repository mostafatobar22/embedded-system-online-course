/*
 ============================================================================
 Name        : ass4_ex4.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int power (int a1 , int a2);
int main(void) {
	int y :
	int x;
	printf("enter a base number  : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("enter a number  : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&y);
	power(x , y);
	return EXIT_SUCCESS;
}
int power (int basee , int numm){

 	 if (numm!=0)
 	return (basee*power(basee,numm-1));
 	 else
 		 return 1;
}
