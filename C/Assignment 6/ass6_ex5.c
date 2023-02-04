/*
 ============================================================================
 Name        : ass6_ex5.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct abc {
	char Eployee_Name[50];
	int Employee_ID;
};
int main(void) {
	//int arr[50];
	//int *p =arr;
	//int *s = &employee;
	//arr[0]= &s;
	static struct abc emp1={'Aimed',123} , emp2={"said",2345};
	struct abc (*arr[]) = {&emp1 ,&emp2} ;
	struct abc (*(*p)[2])=&arr;
	printf(" Exmployee Name : %s \n",(*(*p+1))->Eployee_Name);
	printf("employee id : %d \n ",(*(*p+1))-> Employee_ID);
	return EXIT_SUCCESS;
}
