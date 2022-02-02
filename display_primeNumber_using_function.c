/*
 * display_primeNumber_using_function.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
#include<math.h>
int prime();
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int n1,n2,call;
	printf("Enter the starting and ending value :");
	scanf("%d %d",&n1,&n2);
	printf("\nPrime number between %d to %d are : ",n1,n2);
	for(int j=n1;j<=n2;j++){

		call = prime(j);
		if(call==1){
			printf("%d ",j);
		}
	}
	return 0;
}
int prime(int start){
		int k=0;
		for(int i=2;i<start;i++){
			if(start%i == 0){
				k=1;
			}
		}

		if(k==0){
			return 1;
		}
		else
			return 0;
}
