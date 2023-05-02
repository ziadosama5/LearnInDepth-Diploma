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
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char op;
	float num1,num2;
	printf("Enter an operator either +/-/*/divide: ");
	scanf("%c",&op);
	printf("Enter the two operands: ");
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
