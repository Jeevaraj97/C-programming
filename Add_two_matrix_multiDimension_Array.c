/*
 * Add_two_matrix_multiDimension_Array.c
 *
 *  Created on: Feb 4, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int row,column;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of column: ");
	scanf("%d",&column);
	int matone[row][column],mattwo[row][column],sum[row][column];
	//matrix : 1//
	printf("\nMatrix:1\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("Enter matrix_1 %d%d value:",i+1,j+1);
			scanf("%d",&matone[i][j]);
		}
	}
	printf("\nMatrix:2\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("Enter matrix_2 %d%d value:",i+1,j+1);
			scanf("%d",&mattwo[i][j]);
		}
	}
	printf("\nAfter added Two matrix :\nThe matrix are :\n");
	for(int i=0;i<row;i++){
			for(int j=0;j<column;j++){
				sum[i][j]=(matone[i][j])+(mattwo[i][j]);
				printf("%d  ",sum[i][j]);
			}
			printf("\n");
		}
	return 0;
}

