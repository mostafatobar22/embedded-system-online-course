/*
 ============================================================================
 Name        : ass3_ex3.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100][100];
	int t[100][100];
	int i,j;
	printf("enter rows and column of matrix :"  );
	fflush(stdout); fflush(stdin);
	scanf("%d%d",&i,&j);

	for(int h=0 ; h<i ;h++)
	{
		for(int f=0 ; f<j ;f++)
		{
			printf("enter elements of matrix a%d%d : " ,h,f   );
			fflush(stdout); fflush(stdin);
			scanf("%d" , &a[h][f]);
		}

	}
	printf("enterd matrix\n");
	for(int h=0 ; h<i ;h++)
		{
			for(int f=0 ; f<j ;f++)
			{
				printf("%d \t",a[h][f]);

			}
			printf("\r\n");
		}
	printf ("transpose of  matrix \n ");
	for(int c=0 ; c<j ; c++)
	{
		for(int d=0 ; d<i ;d++)
		{
			t[c][d]=a[d][c];
		}
	}
	for(int h=0 ; h<j ;h++)
			{
				for(int f=0 ; f<i ;f++)
				{
					printf("%d \t",t[h][f]);

				}
				printf("\r\n");
			}
	return EXIT_SUCCESS;
}
