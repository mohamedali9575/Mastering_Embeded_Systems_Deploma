/*
 * EX2.c
 *
 *  Created on: ???/???/????
 *      Author:  Shams
 */



#include<stdio.h>


void main(){
	char s[200], counter=0;

	printf("Enter a string: ");
	fflush(stdout);  fflush(stdin);
	gets(s);
	for(int i=0; i<200;i++){
	    if(s[i]!=0)
	      counter++;
	    else
		   break;

	}
	printf("Length of string: %d",counter);
}
