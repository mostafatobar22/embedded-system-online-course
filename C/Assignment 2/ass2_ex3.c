/*
 ============================================================================
 Name        : ass2_ex3.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float x =0;
    float y=0;
    float z=0;
    printf("enter 3 numbers :  ");
    fflush(stdout);
    scanf("%f", &x);
    fflush(stdout);
    scanf("%f", &y);
    fflush(stdout);
    scanf("%f", &z);
    if(x>y)
    {
    	if(y>z)
    	{
    		printf("largest number is %f ",x);
    	}
    }
    else if (y>z)
		{
    		printf("largest number is %f " , y);
		}
    else
		{
			printf("largest number is %f " , z);
		}

	return EXIT_SUCCESS;
}
