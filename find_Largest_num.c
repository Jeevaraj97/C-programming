/*
 * find_Largest_num.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int num_1,num_2,num_3,high=0,low=0;
	printf("Enter the Ist number here :");
	scanf("%d",&num_1);
	printf("\nEnter the IInd number here :");
	scanf("%d",&num_2);
	printf("\nEnter the IIIrd number here :");
	scanf("%d",&num_3);
	if(num_1>num_2 && num_1>num_3){
		high  = num_1;
	}
	 if(num_2>num_1 && num_2>num_3){
		high = num_2;
	}
	 if(num_3>num_1 && num_3>num_2){
		high = num_3;
	}
	 if(num_1<num_2 && num_1<num_3){
		low  = num_1;
	}
	if(num_2<num_1 && num_2<num_3){
		low  = num_2;
	}
	if(num_3<num_2 && num_3<num_1){
		low  = num_3;
	}
	printf("\nThe largest value of the given three number is : %d ",high);
	printf("\nThe smallest value of the given three number is : %d ",low);


return 0;

}

