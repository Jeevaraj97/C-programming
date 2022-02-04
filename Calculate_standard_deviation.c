/*
 * Calculate_standard_deviation.c
 *
 *  Created on: Feb 4, 2022
 *      Author: JEEVA
 */
/*
 * standard deviation = sqrt((sum.of(x-mean)^2)/N)
 */

#include<stdio.h>
#include<math.h>
float std_Dev(float arr[],int n);
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int n;
	float SD;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	float arr[n];
	for(int i=0;i<n;i++){
		printf("\n%d.)Enter number:",i+1);
		scanf("%f",&arr[i]);
	}
	SD = std_Dev(arr,n);
	printf("\nStandard deviation of number : %.5f",SD);
	return 0;
}

float std_Dev(float arr[],int n)
{
	float sum=0.0,mean=0.0,Std=0.0;
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
	}
	mean = sum/n;
	for(int j=0;j<n;j++){
		Std = Std+pow((arr[j]-mean),2);
	}
	return sqrt(Std/n);
}
