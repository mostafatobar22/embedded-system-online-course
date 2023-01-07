/*
 ============================================================================
 Name        : ass_5_ex2.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Sdistance
{
	int feet ;
	float inch ;

}x,y,sum;

int main(void) {

	printf("enter info for 1st distance\n");
	printf("enter feet : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x.feet);
	printf("enter inch : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x.inch);
	printf("enter info for 2nd distance\n");
	printf("enter feet : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&y.feet);
	printf("enter inch : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&y.inch);
	sum.feet=x.feet+y.feet;
	sum.inch=x.inch+y.inch;
	//1 feet =12 inch
	if (sum.inch >= 12){
		sum.feet++;
		sum.inch = sum.inch-12;
	}
	printf("sum of distance = %d'%.2f\" ",sum.feet,sum.inch);
	return EXIT_SUCCESS;
}
