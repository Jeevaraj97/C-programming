/*
 * febonaci_series.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */

#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

		int num_1,num_2,end,num_3;
		printf("Enter the initial two number :");
		scanf("%d %d",&num_1,&num_2);
		printf("Enter the end number :");
		scanf("%d",&end);

		printf(" febonaci series : %d %d",num_1,num_2);

		for(int i=3;i<=end;i++)
		{
			num_3 = num_1+num_2;
			printf(" %d",num_3);
			num_1 = num_2;
			num_2 = num_3;

		}


return 0;

}



