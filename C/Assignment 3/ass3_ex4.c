/*
 ============================================================================
 Name        : ass3_ex4.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100];
	arr[0]=0;
	int x;
	int b;
	int e;
	printf("enter no of element : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	for(int i=0 ; i<x ; i++ )
	{
		arr[i]=i+1;
	}
	for(int i=0 ; i<x ; i++ )
		{
			printf("%d\t",arr[i]);
		}
	printf("\n");
	printf("enter the element to be inserted: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&b);
	printf("enter the location:   ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&e);
	arr[e-1]=b;
	for(int i=e ; i<b ; i++ )
		{
		arr[i]=i+1;
		}
	for(int i=0 ; i<b ; i++ )
			{
				printf("%d\t",arr[i]);
			}
	return EXIT_SUCCESS;
}
