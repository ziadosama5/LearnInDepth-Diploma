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
	scanf("%d",&a);
	while(count<=a){
		sum += count;
		++count;
	}
	printf("Sum = %d \n", sum);
	system("pause");
	return 0;
}
