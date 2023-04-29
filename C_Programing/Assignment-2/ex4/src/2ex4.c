/*
 ============================================================================
 Name        : 2ex4.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);
	if (a > 0) {
		printf("%.2f is positive", a);
	}
	else if (a==0) {
		printf("You entered zero");
	}
	else  {
		printf("%.2f is negative", a);
	}
}
