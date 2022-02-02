/*
 * Sum_of_Natural_Numbers_Using_Recursion.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int add(int n){
	if(n!=0){
		return n+add(n-1);
	}
	else
		return n;
}
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int num,result;
	printf("Enter the number here:");
	scanf("%d",&num);
	result = add(num);

	printf("\nSum of %d natural numbers are : %d",num,result);

	return 0;
}

