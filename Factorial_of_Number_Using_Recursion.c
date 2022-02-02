/*
 * Factorial_of_Number_Using_Recursion.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int factorial(int n){
	if(n!=1){
		return n*factorial(n-1);
	}
	else
		return n;
}
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num,ans;
	printf("Enter the factorial of number :");
	scanf("%d",&num);
	ans = factorial(num);

	printf("\nFactorial of number %d! = %d",num,ans);
	return 0;
}

