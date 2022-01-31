/*
 * check_armstrong_between_Two_Interval.c
 *
 *  Created on: Jan 31, 2022
 *      Author: JEEVA
 */
# include<stdio.h>
# include<math.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int start,end,count=0,sum=0;
	printf("Enter the interval values : \n");
	scanf("%d %d",&start,&end);
	printf("The armstrong numbers are : \n");

	for(int i = start;i<=end;i++)
	{
		int j = i;
		int k = i;
		count = 0;
		while(j!=0){
			count++;
			j = j/10;
		}
		int a = 0;
		sum = 0;
		while(k != 0){
			a = k%10;
			sum = sum+(pow(a,count));
			k = k/10;
		}
		if(i == sum)
			printf("%d ",i);
	}
	return 0;
}

