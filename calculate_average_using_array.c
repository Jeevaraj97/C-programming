/*
 * calculate_average_using_array.c
 *
 *  Created on: Feb 4, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
float average(int n);
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	float n,total;
	printf("Enter the number of elements: ");
	scanf("%f",&n);
	total = average(n);

	printf("\nAverage of %.1f elements : %.3f",n,total);

	return 0;
}

float average(int n){
	float ave=0;
	float array[n];
	for(int i=0;i<n;i++){
		printf("\nEnter %d element : ",i+1);
		scanf("%f",&array[i]);
		ave = ave+array[i];
	}
	return ave/n;
}
