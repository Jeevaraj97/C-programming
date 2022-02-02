/*
 * find_GCD_using_recursion.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int gcd(int x1,int x2){
	if(x2!=0){
		return gcd(x2, x1%x2);
	}
	else
		return x1;

}
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int n1,n2,ans;
	printf("Enter the two values here :");
	scanf("%d %d",&n1,&n2);
	ans = gcd(n1,n2);
	printf("\nGCD of the given two values is: %d",ans);

	return 0;
}

