/*
 ============================================================================
 Name        : ass2_ex8.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x =0;
	float a ,b ;
	float sum;
	printf("enter operator + , - , * , divide ");
	fflush(stdout);
	scanf("%c",&x);
	printf("enter two operands : ");
	fflush(stdout);
	scanf("%f",&a);
	scanf("%f",&b);
	switch(x)
	{
	case '+':
		{
			sum=a+b;
			printf("%f + %f = %f", a,b,sum);
		}break;
	case '-':
			{
			sum=a-b;
			printf("%f - %f = %f" , a,b,sum);
			}break;
	case '*':
			{
			sum=a*b;
			printf("%f * %f = %f" , a,b,sum);
			}break;
	case '/':
			{
			sum=a/b;
			printf("%f / %f = %f" , a,b,sum);
			}break;
	}
	return EXIT_SUCCESS;
}
