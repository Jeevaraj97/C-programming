/*
 * multily_two_matrix.c
 *
 *  Created on: Feb 17, 2022
 *      Author: JEEVA
 */

#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int row_1,col_1,row_2,col_2;
	printf("Enter number of rows & column in matrix 1 :");
	printf("\nEnter number of rows :");
	scanf("%d",&row_1);
	printf("\nEnter number of column :");
	scanf("%d",&col_1);

	printf("\nEnter number of rows & column in matrix 2 :");
	printf("\nEnter number of rows :");
	scanf("%d",&row_2);
	printf("\nEnter number of column :");
	scanf("%d",&col_2);
	printf("\nMatrix_1 :\n");
	int mat_1[row_1][col_1],mat_2[row_2][col_2],res[row_1][col_2];
	printf("\nEnter matrix 1 value :");
	for(int i=1;i<=row_1;i++){
		for(int j=1;j<=col_1;j++){
			printf("Enter value of matrix %d%d :",i,j);
			scanf("%d",&mat_1[i][j]);
		}

	}
	printf("\nMatrix_2 :\n");
	for(int i=1;i<=row_1;i++){
		for(int j=1;j<=col_1;j++){
			printf("Enter value of matrix %d%d :",i,j);
			scanf("%d",&mat_2[i][j]);
		}

	}
	printf("\nAfter multiplication of two matrix is:\n");
//Matrix multiplication//
	if(row_1 == col_2)
	{
	for(int i=1;i<=row_1;i++){
			for(int j=1;j<=col_2;j++){
				res[i][j]=0;
			}
		}

	for(int i=1;i<=row_1;i++){
			for(int j=1;j<=col_2;j++){
				for(int k=1;k<=col_1;k++){
					res[i][j]=res[i][j]+(mat_1[i][k]*mat_2[k][j]);
				}
			}
		}
	for(int i=1;i<=row_1;i++){
				for(int j=1;j<=col_2;j++){
					printf("%d ",res[i][j]);
				}
				printf("\n");
			}
	}
	return 0;
}
