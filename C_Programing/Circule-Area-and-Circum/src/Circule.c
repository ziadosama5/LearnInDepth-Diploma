/*
 ============================================================================
 Name        : Circule.c
 Author      : Ziad Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {
	char choice;
	float radius, area, circum;
	printf("Enter Circule Radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &radius);
	printf(
			"Enter which operation u want to preform, press a for area /press c for circumfrence: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &choice);
	switch (choice) {
	case 'a':
	case 'A':
		area = 3.14 * radius * radius;
		printf("\n Area = %f \n", area);

		break;
	case 'c':
	case 'C':
		circum = 2 * 3.14 * radius;
		printf("\n Circumference = %f \n", circum);
		break;
	default:
		printf("Wrong choice \n");
		break;

	}

}
