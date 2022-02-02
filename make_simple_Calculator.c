/*
 * make_simple_Calculator.c
 *
 *  Created on: Feb 2, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
#include<math.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	double n1,n2,res=0;
	char cal;
	printf("Calculate:(+,-,*,/)");
	int i=1;
	while(i){
		scanf("%lf%c%lf",&n1,&cal,&n2);
		switch(cal){
		case '+':printf("%.2lf%c%.2lf=%.2lf",n1,cal,n2,(res=n1+n2));
					break;
		case '-':printf("%.2lf%c%.2lf=%.2lf",n1,cal,n2,(res=n1-n2));
					break;
		case '*':printf("%.2lf%c%.2lf=%.2lf",n1,cal,n2,(res=n1*n2));
					break;
		case '/':printf("%.2lf%c%.2lf=%.2lf",n1,cal,n2,(res=n1/n2));
					break;
		default :
				printf("\nerror: undefined operator ");
				break;
		}

		printf("\nIf do you want to continue press '1' else press '0' :");
		scanf("%d",&i);
	}

	return 0;

}

