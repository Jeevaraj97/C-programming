/*
 * Reverse_sentence_using_recursion.c
 *
 *  Created on: Feb 4, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int reverse();
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	printf("Enter the sentence here :");
	reverse();
	return 0;
}
int reverse(){
	char ch;
	scanf("%c",&ch);
	if(ch!='\n'){
		reverse();
	}
	printf("%c",ch);
	return 0;
}
