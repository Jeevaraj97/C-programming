/*
 * find_largest_Number_array.c
 *
 *  Created on: Feb 4, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
#include<math.h>
int large();
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int n,high;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	high = large(n);
	printf("\nLargest number : %d",high);

	return 0;
}
int large(int n)
{	int max=0;
	int array[n];
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	max = array[0];
	for(int i=1;i<n;i++){
		if(array[i]>max){
			max = array[i];
		}
	}
	return max;
}
