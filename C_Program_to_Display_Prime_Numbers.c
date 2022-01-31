/*
 * C_Program_to_Display_Prime_Numbers.c
 *
 *  Created on: Jan 31, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main(){

	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int start,end,a=0;
	printf("Enter the interval here : ");
	scanf("%d %d",&start,&end);
	printf("\nThe prime number between two intervals(%d to %d) are : ",start,end);

	while(start <= end)
	{
		a = 0;
		if(start<=1)
		{
			start++;
			continue;
		}
		for(int i=2;i<=start/2;i++){
			if(start%i == 0){
				a = 1;
			}
		}
		if(a==0)
			printf("%d ",start);
		start++;
	}
	return 0;
}
