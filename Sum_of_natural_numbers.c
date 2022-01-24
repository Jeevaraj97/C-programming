/*
 * Sum_of_natural_numbers.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */

#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

		int num,sum=0;
		printf("Enter the number here :");
		scanf("%d",&num);
/*
		//for loop method //
		for(int i=1;i<=num;i++)
		{
			sum = sum+i;
		}
		printf("\nSum of natural number upto %d is : %d ",num,sum);
*/

		//while loop method //
 	 	 int i = 1;
		while(i<=num){
			sum = sum + i;
			i++;
		}
		printf("\nSum of natural number upto %d is : %d ",num,sum);


return 0;

}


