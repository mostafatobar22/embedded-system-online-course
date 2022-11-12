/*
 ============================================================================
 Name        : ass2_ex2.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x=0;
	printf("Enter an alphabet : ");
	fflush(stdout);
	scanf("%c",&x);
	int c =0 ;
	c = x;
	if(c==97)
	{
		printf("%c is a vowel ",x);
	}
	else if (c==101)
		{
			printf("%c is a vowel ",x);
		}
	else if (c==105)
		{
			printf("%c is a vowel ",x);
		}
	else if (c==111)
		{
			printf("%c is a vowel ",x);
		}
	else if (c==117)
		{
			printf("%c is a vowel ",x);
		}
	else
		{
			printf("%c is a consonant ",x);
		}
	return EXIT_SUCCESS;
}
