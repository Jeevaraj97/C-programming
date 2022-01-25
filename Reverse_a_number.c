/*
 * Reverse_a_number.c
 *
 *  Created on: Jan 25, 2022
 *      Author: JEEVA
 */
# include <stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num,sum=0,rem;
	printf("Enter the integer value here : ");
	scanf("%d",&num);

	while(num!=0){
		rem = num%10;
		sum = sum*10+rem;
		num = num/10;
	}
	printf("\nReverse value of given number is : %d",sum);

	return 0;
}

