/*
 * find_Quotent_and_reminder.c
 *
 *  Created on: Jan 22, 2022
 *      Author: JEEVA
 */
# include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int num,divider,quot,rem;
	printf("Enter the dividend value here :");
	scanf("%d",&num);

	printf("Enter the divider value here :");
	scanf("%d",&divider);

	printf("\nQuotent of the %d/%d  is : %d",num,divider,(quot=num/divider));
	printf("\nReminder of the %d/%d  is : %d",num,divider,(rem=num%divider));

	return 0;
}

