/*
 * check_armstrong_number.c
 *
 *  Created on: Jan 31, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
#include<math.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int num,a,sum=0,count=0;
	printf("Enter a number here: ");
	scanf("%d",&num);
	int i = num;
	while(num!=0){
		count ++;
		num = num/10;
		}
	num=i;
	while(num!=0){
		a = num%10;
		sum = sum+(pow(a,count));
		num = num/10;
	}
	if(i == sum){
		printf("\nThe given number %d is an armstrong number %d",i,sum);
	}
	else{
		printf("\nThe given number %d is not a armstrong number %d",i,sum);
	}
return 0;
}

