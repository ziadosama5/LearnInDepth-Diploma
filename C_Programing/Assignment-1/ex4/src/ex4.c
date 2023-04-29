/*
 ============================================================================
 Name        : ex4.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	printf("Enter two numbers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y);
}
