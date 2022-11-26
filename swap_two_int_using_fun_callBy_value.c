#include<stdio.h>
void swap(int*,int*);
int main()
{
    int num1,num2;
    printf("Enter the number:1:\n");
    scanf("%d",&num1);
    printf("Enter the number:2:\n");
    scanf("%d",&num2);
    printf("Before swap num1: %d     num2: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swap num1: %d     num2: %d\n",num1,num2);
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t = *y;
    *y = *x;
    *x = t;
}