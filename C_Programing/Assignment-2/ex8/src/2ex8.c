/*
 ============================================================================
 Name        : 2ex8.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char op;
	float num1,num2;
	printf("Enter an operator either +/-/*/divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&op);
	printf("Enter the two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(op){
	case '+':
		printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
		break;
	default:
		printf("Ypu entered a wrong operator");

	}

}
