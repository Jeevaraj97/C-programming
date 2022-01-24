/*
 * find_leap_year.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int year;
	printf("~ !!! This device is tell the year is leap year or normal year !!! ~");
	printf("\nPlease enter the year here :  ");
	scanf("%d",&year);

	if(year % 400 == 0){
		printf("\nThe year : %d is a leap year",year);
	}
	else if(year % 100 == 0){
		printf("\nThe year : %d is a normal year",year);
	}
	else if(year % 4 == 0){
		printf("\nThe year : %d is a leap year",year);
	}
	else{
		printf("\nThe year : %d is a normal year",year);
	}

	return 0;
}

