/*
 * sumOf_two_PrimeNumbers.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int prime();
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num,a=0;
	printf("Enter the integer value here: ");
	scanf("%d",&num);
	for(int i=2;i<=num;i++){
		if(prime(i)==1){
			if(prime(num-i)==1){
				printf("\n%d+%d=%d",i,num-i,num);
				a=1;
			}
		}
	}
if(a==0){
	printf("\nCannot be expressed this number");
}

	return 0;
}

int prime(int n)
{
	int m=1;
	if(n==0 ||n==1){
		m=0;
	}
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			m=0;
			break;
		}
	}
	return m;
}
