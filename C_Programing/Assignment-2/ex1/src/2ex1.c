/*
 ============================================================================
 Name        : 2ex1.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter and integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	(num%2==0 ? printf("%d is Even",num): printf("%d is Odd",num));

}
