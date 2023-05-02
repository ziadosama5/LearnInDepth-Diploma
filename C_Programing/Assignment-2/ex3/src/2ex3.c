/*
 ============================================================================
 Name        : 2ex3.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a ,b, c;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &a,&b,&c);
	if (a>=b && a>=c){
		printf("Largest number %.2f \n",a);
		system("pause");
	}
	else if (b>=c && b>=a){
			printf("Largest number %.2f \n",b);
			system("pause");
		}
	if (c>=a && c>=b){
			printf("Largest number %.2f \n",c);
			system("pause");
		}
	return 0;
	
}
