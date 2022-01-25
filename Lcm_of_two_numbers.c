/*
 * Lcm_of_two_numbers.c
 *
 *  Created on: Jan 25, 2022
 *      Author: JEEVA
 */
/* Formula of lcm:
 * lcm = (num_1 * num_2)/GCD
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
/*
 *  method 1:
	int n1,n2,gcd,lcm;
	printf("Enter the two numbers here: ");
	scanf("%d %d",&n1,&n2);
	//find GCD of two numbers//
	for(int i=1;i<=n1 && i<=n2;i++){
		if(n1%i == 0 && n2%i == 0){
			gcd = i;
		}
	}
	lcm  = (n1 * n2)/gcd ;
	printf("\nLCM of  two numbers (%d and %d) is: %d",n1,n2,lcm);
*/
	int n1,n2,max;
	printf("Enter the two numbers here: ");
	scanf("%d %d",&n1,&n2);
	max = (n1>n2)?n1:n2;

	while(1){
		if(max%n1 == 0 && max%n2 == 0){
			printf("\nLCM of  two numbers (%d and %d) is: %d",n1,n2,max);
			break;
		}
		max++;
	}

	return 0;
}
