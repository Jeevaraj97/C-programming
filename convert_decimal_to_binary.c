/*
 * convert_decimal_to_binary.c
 *
 *  Created on: Feb 3, 2022
 *      Author: JEEVA
 */
/*
#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int n,a,binary=0,m,i=1;
	printf("Enter the decimal value here : ");
	scanf("%d",&n);
	a = n;
	while(a!=0){
		m = a%2;
		binary = binary+ (m*i);
		i = i*10;
		a = a/2;
	}
	printf("\nBinary value of the given number is : %d",binary);

	return 0;

}
*/
//using function method//
#include<stdio.h>
int convertion();
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int n,binary=0;
	printf("Enter the decimal value here : ");
	scanf("%d",&n);
	binary = convertion(n);
	printf("\nBinary value of the given number is : %d",binary);

	return 0;

}

int convertion(int n){
	int a = n,m,bi,i=1;
		while(a!=0){
			m = a%2;
			bi = bi+ (m*i);
			i = i*10;
			a = a/2;
		}

return bi;
}

