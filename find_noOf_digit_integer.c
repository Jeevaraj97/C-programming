/*
 * find_noOf_digit_integer.c
 *
 *  Created on: Jan 25, 2022
 *      Author: JEEVA
 */
# include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stdout,NULL,_IONBF,0);

	int num,digit=0;
	printf("Enter the Integer value here :");
	scanf("%d",&num);
	int i = num;
	while(i!=0){
		i = i/10;
		digit++;
	}
	printf("\nThe integer %d is %d digit number",num,digit);

	return 0;
}

