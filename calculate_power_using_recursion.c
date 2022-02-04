/*
 * calculate_power_using_recursion.c
 *
 *  Created on: Feb 4, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int power();
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int base,n,ans;
	printf("Enter the base and power value here:");
	scanf("%d %d",&base,&n);
	ans = power(base,n);
	printf("\n%d^%d = %d",base,n,ans);

	return 0;
}

int power(int a,int b)
{
	if(b!=0){
		return (a*power(a,b-1));
	}
	else{
		return 1;
	}
}
