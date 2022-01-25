/*
 * Find_GCD_of_two_numbers.c
 *
 *  Created on: Jan 25, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

		int num_1,num_2,gcd=0;
		printf("Enter the two numbers here :");
		scanf("%d %d",&num_1,&num_2);
/*
		//for loop method //
		for(int i=1;i<=num_1 && i<=num_2;i++)
		{
			if(num_1%i == 0 && num_2%i == 0){
				gcd = i;
			}
		}
		printf("\nGCD of two numbers is : %d ",gcd);

*/

		//while loop method //
 	 	 int i = 1;
		while(i<=num_1 && i<= num_2){
			if(num_1%i == 0 && num_2%i == 0){
				gcd = i;
			}
			i++;
		}
		printf("\nGCD of two numbers is : %d ",gcd);

return 0;

}


