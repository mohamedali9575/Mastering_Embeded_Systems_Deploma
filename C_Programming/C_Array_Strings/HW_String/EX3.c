/*
 * EX3.c
 *
 *  Created on: ???/???/????
 *      Author: Shams
 */

#include<stdio.h>
#include<string.h>


void main(){
	char word[200];

	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(word);

	printf("Reverse string is: ");
	for(int i = 1 ;i<=strlen(word);i++){
		printf("%c",word[strlen(word)-i]);
	}
}
