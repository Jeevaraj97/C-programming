/*
 * Generate_multilication_table.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

		int table,upto;
		printf("Which table you want : ");
		scanf("%d",&table);
		printf("\nUpto : ");
		scanf("%d",&upto);
		printf("\nThis is %d s table upto %d \n",table,upto);
		for(int i=1;i<=upto;i++)
		{
			printf("\n%d * %d = %d",i,table,(i*table));
		}

return 0;
}

