/*
 ============================================================================
 Name        : Students.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,st_number;
	float degree, sum;
	printf("Enter the number of Students: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &st_number);
	for ( i = 1, sum = 0; i <= st_number; i++) {
		printf("Enter Student(%d)degree",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&degree);
		sum+=degree;
		//return sum;
	}
	printf("The average Degree fot the total of Students= %.2f",sum/st_number);
}
