/*
 * find_the_root_quadratic_equ.c
 *
 *  Created on: Jan 24, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
#include<math.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	double a,b,c,root_1,root_2,dis,real,image;
	printf("Enter the equ. value here : (a , b ,c) :");
	scanf("%lf %lf %lf",&a,&b,&c);

	dis = ((b*b)-(4*a*c));

	if(dis < 0){
		root_1 = ((-b+sqrt(dis))/(2*a));
		root_2 = ((-b-sqrt(dis))/(2*a));
		printf("\nRoot 1 and Root 2 of the quad. equ is :\nRoot 1 = %.2lf\nRoot 2 = %.2lf",root_1,root_2);
	}
	else if(dis == 0){
		root_1 = root_2 = (-b/(2*a));
		printf("\nRoot 1 and Root 2 of the quad. equ is :\nRoot 1 = %.2lf\nRoot 2 = %.2lf",root_1,root_2);
	}
	else
	{
		real = (-b/(2*a));
		image = ((sqrt(-dis))/(2*a));
		printf("\nRoot 1 and Root 2 of the quad. equ is :\nRoot 1 = %.2f + %.2f i\nRoot 2 = %.2f-%.2f i",real,image,real,image);
	}
return 0;
}

