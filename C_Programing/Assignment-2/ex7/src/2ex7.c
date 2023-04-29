/*
 ============================================================================
 Name        : 2ex7.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,count;
	unsigned long int factor = 1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if(a<0)
		printf("ERROR!!! Factorial of negative number doesn't exist.");
	else{
		for(count = 1; count<=a;++count){
			factor *= count;
		}
		printf("Factorial = %lu", factor);
	}
	return 0;
}
