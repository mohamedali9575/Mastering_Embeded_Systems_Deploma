/*
 * Ex2.c
 *
 *  Created on: 21 Jul 2023
 *      Author: moham
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float matrix1[200], sum=0.0;
	int num ;
	printf("Enter number of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);

	printf("Enter the element of matrix:\n");

	for(int r=0; r<num;r++)
	{
		printf("Enter the element:");
		fflush(stdin);  fflush(stdout);
		scanf("%f",&matrix1[r]);
	}
	for(int r=0; r<num; r++){

		sum+=matrix1[r];
	}
	printf("The average is %.3f ",sum/num);


	return EXIT_SUCCESS;
}
