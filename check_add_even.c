/*
 * check_add_even.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int fun(int x);
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int num,check;
	printf("Enter the value here: ");
	scanf("%d",&num);
	check = fun(num);
	if(check == 1)
		printf("\nThe number : %d is an even number",num);
	else
		printf("\nThe number : %d is an odd number",num);

return 0;
}


int fun(int x){
	int n=0;
	if(x%2 == 0){
		n = 1;
	}
	else
		n=0;

	return n;
}
