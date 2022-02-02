/*
 * check_primeNumber_Armstrong_num.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
/*In this program we are using one of the user defined function for
  checking the number is prime number or armstrong number*/

#include<stdio.h>
#include<math.h>
void Primenum(int n);
void armstrong(int x);
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num;
	printf("Enter the integer value here :");
	scanf("%d",&num);
	Primenum(num);
	armstrong(num);

	return 0;
}
void Primenum(int n)
{
	int k = 0;
	for(int i=2;i<n;i++){
		if(n%i == 0){
			k=1;
		}
	}
	if(k == 0){
		printf("\nThe number %d is a prime number",n);
	}
	else{
		printf("\nThe number %d is not a prime number",n);
	}

}
void armstrong(int x)
{	int a,m = x,sum=0,count=0;
	int p = x;
	while(p!=0)
	{		count++;
			p = p/10;
		}
	while(m!=0){
		a = m%10;
		sum = sum+pow(a,count);
		m = m/10;
	}
	if(x == sum){
		printf("\nThe number %d is an armstrong number",x);
	}
	else{
		printf("\nThe number %d is not an armstrong number",x);
	}
}
