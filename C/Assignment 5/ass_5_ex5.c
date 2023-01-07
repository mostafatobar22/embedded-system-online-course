/*
 ============================================================================
 Name        : ass_5_ex5.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.1415
#define area(r) (pi*(r)*(r))
int main(void) {
	float radius;
	float area;
	printf("enter the radius : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&radius);
	area=area(radius);
	printf("Area=%.2f",area);
	return EXIT_SUCCESS;
}
