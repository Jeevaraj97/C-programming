/*
 * check_vowel_consonent.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char ch;
	printf("Enter the character here : ");
	scanf("%c",&ch);
	if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
	{
		printf("\nThe character '%c' is an vowel",ch);
	}
	else
		printf("\nThe character '%c' is a consonant",ch);

	return 0;
}

