#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum;
    printf("Enter the row and column of matrix_1:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of matrix_2:\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){
        printf("Both matrix 1 and matrix 2 row and column are different\n It is invalid operation\n");
    return ;
    }
    int m1[r1][c1],m2[r2][c2];
    int res[r1][c2];
    printf("Enter the elements of matrix:1:\n");
    for(i=0;i<r1;i++)
    { for(j=0;j<c1;j++)
        scanf("%d",&m1[i][j]);
    }
    printf("Enter the elements of matrix:2:\n");
    for(i=0;i<r2;i++)
    { for(j=0;j<c2;j++)
        scanf("%d",&m2[i][j]);
    }
    printf("After multiply of two matrix the result is:\n");
    for(i=0;i<r1;i++)
    { 
        for(j=0;j<c2;j++)
        {sum=0;
            for(k=0;k<r2;k++)
            {
              sum = sum+(m1[i][k]*m2[k][j]);
            }
            res[i][j]=sum;
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
        printf("%d  ",res[i][j]);

        printf("\n");
    }
    return 0;
}