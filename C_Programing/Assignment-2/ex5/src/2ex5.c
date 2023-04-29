/*
 ============================================================================
 Name        : 2ex5.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		printf("%c is an alphabet",c);
	}
		else
			printf("%c is not an alphabet",c);
	}

