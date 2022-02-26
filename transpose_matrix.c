/*
 * transpose_matrix.c
 *
 *  Created on: Feb 26, 2022
 *      Author: JEEVA
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int row,column;
	printf("Enter number of rows and columns in matrix: ");
	printf("\nEnter rows:");
	scanf("%d",&row);
	printf("\nEnter columns:");
	scanf("%d",&column);
	int mat[row][column],trans[column][row];
	printf("\nEnter the matrix value here:\n ");

	for(int i=1;i<=row;i++){
		for(int j=1;j<=column;j++){
			printf("Enter matrix %d%d :",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nInput matrix is :\n");
	for(int i=1;i<=row;i++){
			for(int j=1;j<=column;j++){
				printf("%d  ",mat[i][j]);
			}
			printf("\n");
		}


	printf("\nAfter transpose the matrix the values are :\n");

	for(int i=1;i<=column;i++){
		for(int j=1;j<=row;j++){
			trans[i][j] = mat[j][i];
			printf("%d  ",trans[i][j]);
		}
		printf("\n");
	}
		return 0;
}

