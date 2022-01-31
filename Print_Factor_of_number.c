/*
 * Print_Factor_of_number.c
 *
 *  Created on: Jan 31, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num;
	printf("Enter the number here :");
	scanf("%d",&num);
	printf("\nFactor of given number(%d) is : ",num );
	for(int i = 1;i<=num;i++){
		if(num%i==0){
			printf("%d ",i);
		}
	}

	return 0;
}

