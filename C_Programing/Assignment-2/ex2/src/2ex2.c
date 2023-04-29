/*
 ============================================================================
 Name        : 2ex2.c
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
	for (int i=0;i<2;i++){
		printf("Enter an alphabet: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
		((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')?
				printf("%c is a vowel \n",c): printf("%c is a Consonant \n",c) );
	}}
