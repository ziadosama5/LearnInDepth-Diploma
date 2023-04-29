/*
 ============================================================================
 Name        : 2ex6.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,sum = 0,count = 1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	while(count<=a){
		sum += count;
		++count;
	}
	printf("Sum = %d", sum);
	return 0;
}
