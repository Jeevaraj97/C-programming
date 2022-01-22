/*
 * Multiply_the_floatingPoint_Value.c
 *
 *  Created on: Jan 22, 2022
 *      Author: JEEVA
 */

# include<stdio.h>
float multiply(float x,float y)
{
	float a;
	a = x * y;
	return a;
}
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int n=0;
	while(n==0){
		float num_1,num_2,product;
		printf("Enter the value here : ");
		scanf("%f %f",&num_1,&num_2);
			product = multiply(num_1,num_2);
		printf("product of two numbers = %.3f",product);
		printf("\nIf Do you continue the process click '0' ");
		scanf("%d",&n);

	}
	return 0;
}

