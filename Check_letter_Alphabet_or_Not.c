/*
 * Check_letter_Alphabet_or_Not.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int a = 0;

	while(a==0)
	{
		char ch;
		printf("Enter the character here :");
		scanf("%c %c",&ch,&ch);

		if(ch>=65 && ch<=91){
			printf("\nThe character %c is an Alphabet ",ch);
		}
		else if(ch>=97 && ch<=123){
			printf("\nThe character %c is an small letter ",ch);
		}
		else {
			printf("\nThe character %c is an special character ",ch);
		}

	printf("\nIf do you continue the process press '0' else press '1' :");
	scanf("%d",&a);

	}

return 0;

}


