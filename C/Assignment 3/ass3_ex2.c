/*
 ============================================================================
 Name        : ass3_ex2.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int d=0;
float n[100];
float avr=0 ;

printf ("Enter the numbers of data :");
fflush(stdout); fflush(stdin);
scanf("%d",&d);

for(int i=0 ; i<d ;i++)
{

		printf("enter number ; ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&n[i]);
		avr=avr+n[i];

}
printf("Average = %f" , avr/6);
	return EXIT_SUCCESS;
}
