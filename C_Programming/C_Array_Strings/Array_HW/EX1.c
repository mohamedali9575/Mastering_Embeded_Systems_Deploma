/*
 ============================================================================
 Name        : Array_HW.c
 Author      : Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float matrix1[2][2], matrix2[2][2];
	printf("Enter the element of 1st matrix:\n");
	fflush(stdin);  fflush(stdout);

	for(int r=0; r<2;r++)
	{
		for(int c=0;c<=1;c++)
		{
			printf("enter a%d%d",r+1,c+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&matrix1[r][c]);
		}
	}
	printf("Enter the element of 2nd matrix:\n");
	for(int r=0; r<2;r++)
		{
			for(int c=0;c<=1;c++)
			{
				printf("enter b%d%d",r+1,c+1);
				fflush(stdin);  fflush(stdout);
				scanf("%f",&matrix2[r][c]);
			}
		}
	printf("Sum of matrix: \n");
	for(int r=0;r<=1;r++){
		for(int c=0; c<=1;c++){
			printf("%.3f   	",matrix1[r][c]+matrix2[r][c]);

		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
