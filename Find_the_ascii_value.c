/*
 * Find_the_ascii_value.c
 *
 *  Created on: Jan 22, 2022
 *      Author: JEEVA
 */

# include <stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int n = 0;
	while(n == 0){
		char a;
		printf("Enter the required ASCII value of element here :");
		scanf("%c %c",&a,&a);
		printf("\nthe ASCII value of %c is : %d",a,a);
		printf("\nIf do you want to continue the process click '0'");
		scanf("%d",&n);

	}
	return 0;

}
