/*
 ============================================================================
 Name        : ass3_ex1.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
float sum[2][2];
float a[2][2] ;
float b[2][2] ;
printf ("Enter the elements of 1st matrix \n ");
for(int i=0 ; i<2 ;i++)
{
	for(int j=0 ; j<2 ;j++)
		{
		printf("enter a%d%d : ",i,j);
		fflush(stdout); fflush(stdin);
		scanf("%f",&a[i][j]);
		}
}
printf ("Enter the elements of 2nd matrix \n ");
for(int c=0 ; c<2 ; c++)
{
	for(int d=0 ; d<2 ;d++)
	{
		printf("enter b%d%d : ",c,d);
		fflush(stdout); fflush(stdin);
		scanf("%f",&b[c][d]);
	}
}
for(int h=0 ; h<2 ;h++)
{
	for(int f=0 ; f<2 ;f++)
	{
		printf("sum 0f matrix:\n");
		sum[h][f]=a[h][f]+b[h][f];
	}
}
for(int h=0 ; h<2 ;h++)
{
	for(int f=0 ; f<2 ;f++)
	{
		printf("%2.2f\t" , sum[h][f]);
	}
	printf("\r\n");
}
	return EXIT_SUCCESS;
}
