/*
 ============================================================================
 Name        : ass3_ex5.c
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
	int b;
	int x;
	printf("enter no of element : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	for(int i=1 ; i<=x ; i++ )
		{
			arr[i-1]=i*11;
		}
		for(int i=0 ; i<x ; i++ )
			{
				printf("%d\t",arr[i]);
			}
		printf("\n");
	printf("enter no of element : ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&b);
	for(int i=0 ; i<x ; i++ )
	{
		if(arr[i]==b)
		{
			printf("%d",i+1);
		}

	}
	return EXIT_SUCCESS;
}
