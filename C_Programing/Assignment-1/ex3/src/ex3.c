/*
 ============================================================================
 Name        : ex3.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	printf("Enter two integers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum: %d",x+y);
}
