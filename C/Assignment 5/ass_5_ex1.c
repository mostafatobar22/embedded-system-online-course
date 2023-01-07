/*
 ============================================================================
 Name        : ass_5_ex1.c
 Author      : tobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct  Sstudent
{
	char name[50];
	int roll ;
	float marks ;

};

int main(void) {
	struct Sstudent data;
	printf("Enter information of students : \n");
	printf("Enter name :  ");
	fflush(stdout); fflush(stdin);
	scanf("%s",&data.name);
	printf("Enter roll number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&data.roll);
	printf("Enter marks  : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&data.marks);
	printf("Displying Information : \n");
	printf("name : %s \n Roll : %d \n Marks : %.2f ",data.name,data.roll,data.marks);
	return 1;
}
