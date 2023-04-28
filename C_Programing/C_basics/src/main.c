/*
 ============================================================================
 Name        : C_Programing.c
 Author      : Ziad Osama Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, max;
	printf("Enter three values : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("The largest number = %d", max);

	return 0;
}
