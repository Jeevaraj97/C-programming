/*
 * Print_A_to_Z.c
 *
 *  Created on: Jan 25, 2022
 *      Author: JEEVA
 */
# include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stdout,NULL,_IONBF,0);
	char ch;
	printf("Enter what you need? : (Alphabets or smaller case):");
	printf("\nIf you need Alphabets: press 'A' (or) you need small letters : press 'S' :" );
	scanf("%c",&ch);

	if(ch == 'A' || ch == 'a'){
		printf("\nYou ask Alphabets :\nAlphabets are : ");
		for(int i='A';i<='Z';i++){
			printf("%c ",i);
		}
	}
	else{
		printf("\nYou ask Small Letters :\nSmall letters are : ");
				for(int i='a';i<='z';i++){
					printf("%c ",i);
				}
	}

	return 0;

}

