/*
 * Binary_to_decimal_convertion.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
/*
#include<stdio.h>
#include<math.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	 int binary,decimal=0,n,a,count=0;
	printf("Enter the binary number here :");
	scanf("%d",&binary);
	n = binary;
	while(n!=0){
		a = n%10;
		if(a==1){
			decimal = decimal+(pow(2,count));
		}
		else
			decimal = decimal+0;
		count++;
		n = n/10;
	}

		printf("Binary value(%d) is = decimal value(%d)",binary,decimal);

	return 0;
}
*/

//using function method//
#include<stdio.h>
#include<math.h>
int conversion(int x);
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	 int binary,decimal=0;
	printf("Enter the binary number here :");
	scanf("%d",&binary);
	decimal = conversion(binary);

	printf("Binary value(%d) is = decimal value(%d)",binary,decimal);

	return 0;
}
int conversion(int x)
{
	int n = x,a,m=0,count=0;
	while(n!=0){
		a = n%10;
		if(a==1){
			m = m+(pow(2,count));
		}
		else
			m = m+0;
		count++;
		n = n/10;
	}
	return m;
}


