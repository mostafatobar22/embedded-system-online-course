/*
 ============================================================================
 Name        : ass_5_ex4.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct Sstudent
{
	int roll;
	char name[50];
	int marks;
};
int i =0 ;
int main(void) {
	printf("enter info of students : \n ");
	struct Sstudent members[10];



	for(i=0;i<2;i++){
		printf("for roll number : ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&members[i].roll);
		printf("enter name :");
		fflush(stdout); fflush(stdin);
		scanf("%s",members[i].name);
		printf("enter marks : ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&members[i].marks);
	}
	for(i=0;i<2;i++){
		printf("for roll number  :%d \n",members[i].roll);

		printf("enter name :%s \n",members[i].name);

		printf("enter marks :%d \n ",members[i].marks);
	}
	return EXIT_SUCCESS;
}
