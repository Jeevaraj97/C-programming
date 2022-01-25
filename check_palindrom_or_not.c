/*
 * check_palindrom_or_not.c
 *
 *  Created on: Jan 25, 2022
 *      Author: JEEVA
 */

#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num,rev=0,rem;
	printf("Enter the number here :");
	scanf("%d",&num);
	int i = num;
	while(num!=0){
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	if(i == rev){
		printf("\nThe given number %d is palindrom number",i);
	}
	else
		printf("\nThe given number %d is not a palindrom number",i);
return 0;
}
