/*
 ============================================================================
 Name        : ex2.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0;
	printf("Enter an Integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d", x);
}
