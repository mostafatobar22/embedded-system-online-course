/*
 ============================================================================
 Name        : ass4_ex1.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int prime(int a );
int main(void) {
	int flag;
	int x;
	int y;
	printf("enter two numbers (intervals) : ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d", &x,&y);
	printf("prime number between %d and %d are : " , x,y);
	for(int i = x+1 ; i<y ; ++i){
		flag=prime(i);
		if (flag==0){
			printf("%d\n",i);
		}
	}

	return EXIT_SUCCESS;
}
int prime(int a ){
	int flag = 0;
	for(int j=2 ; j<=a/2 ; ++j){
		if(a%j==0){
			flag =1 ;
			break;
		}
	}
	return flag;
}

