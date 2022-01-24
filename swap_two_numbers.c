/*
 * swap_two_numbers.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
# include <stdio.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num_1,num_2;
	printf("Enter the numbers here : ");
	scanf("%d %d",&num_1,&num_2);

	printf("\n numbers_1 : %d ",num_1);
	printf("\n numbers_2 : %d ",num_2);


	printf("\n After swap process the value of the two numbers are : ");

	num_1 = num_1+num_2;
	num_2 = num_1-num_2;
	num_1 = num_1 - num_2;
	printf("\n numbers_1 : %d ",num_1);
	printf("\n numbers_2 : %d ",num_2);

	return 0;
}

