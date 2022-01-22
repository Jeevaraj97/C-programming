/*
 * Add_Two_integers.c
 *
 *  Created on: Jan 22, 2022
 *      Author: JEEVA
 */

# include <stdio.h>
int main()
{
	setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF,0);

	int a=0;
		while(a==0){
			int num_1,num_2,sum;
				printf("Enter the value here : ");
				scanf("%d %d",&num_1,&num_2);

			printf("Result = %d",(sum=num_1+num_2));
		printf("\n Do you continue the process : if 'yes' mean press '0' or if 'no' mean press '1'\n\n");
		scanf("%d",&a);
	}

	return 0;
}


