/*
 ============================================================================
 Name        : ass6_ex4.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[15],a,i;
	int *p ;
	p = &arr[0];
	printf("Input the number of elements to store in the array (max 15) : ") ;
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	 for(i=0;i<a;i++){
		 printf("element %d : ",i+1 );
		 fflush(stdout); fflush(stdin);
		 scanf("%d", p);
		 p++;
	 }
p--;

	printf("The elements of array in reverse order are :\n ");
	for(i=a;i>0;i--){
		printf("element %d : %d \n ",i ,*p);
		p--;



	}

	return EXIT_SUCCESS;
}
