/*
 * check_positive_negative_num.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
#include<math.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int a = 0;

	while(a==0)
	{
		int num;
		printf("Enter the number here :");
		scanf("%d",&num);

		if(num>0){
			printf("\nThe number %d is a positive number",num);
		}
		else if(num == 0){
			printf("\nThe number %d is zero",num);
		}
		else {
			printf("\nThe number %d is a negative number",num);
		}

	printf("\nIf do you continue the process press '0' else press '1' :");
	scanf("%d",&a);

	}

return 0;

}
