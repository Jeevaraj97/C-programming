/*
 * power_of_number.c
 *
 *  Created on: Jan 25, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
#include<math.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stdout,NULL,_IONBF,0);

	int base,exp,res=1;
	printf("Enter the base value and exponential value here:");
	printf("\nEnter the base value here:");
	scanf("%d",&base);
	printf("\nEnter the exponential value here:");
	scanf("%d",&exp);
/*
	//method :1 //while loop method//
	int i = exp;
	while(i>0){
		res = res*base;
		i--;
	}
	printf("\nPower of %d^%d is : %d",base,exp,res);

*/
	//method :2 //pow() method//
	res = (pow(base, exp));
		printf("\nPower of %d ^ %d is : %d",base,exp,res);

	return 0;
}

