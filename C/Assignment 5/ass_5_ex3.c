/*
 ============================================================================
 Name        : ass_5_ex3.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Scomplex
{
	float reel ;
	float imaginary;
}num1,num2;
void SUM (struct Scomplex  x1 , struct Scomplex  x2){
	struct Scomplex summ;
	summ.reel=x1.reel+x2.reel;
	summ.imaginary=x1.imaginary+x2.imaginary;
	printf("sum = %.2f+%.2f i",summ.reel,summ.imaginary);

}
int main(void) {
	printf("for 1st complex number \n"
			" enter real and imaginary respectively : ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f",&num1.reel,&num1.imaginary);
	fflush(stdout); fflush(stdin);
	printf("for 2nd complex number \n"
			" enter real and imaginary respectively : ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f",&num2.reel,&num2.imaginary);
	SUM(num1,num2);
	return EXIT_SUCCESS;
}
