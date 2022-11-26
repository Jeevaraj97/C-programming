#include<stdio.h>
int count_setbit(int);
int main()
{
    int num,a;
    printf("Enter the number here:\n");
    scanf("%d",&num);
    a = count_setbit(num);
    printf("Number of set bits in given number is %d : %d",num,a);
    return 0;
}

int count_setbit(int n)
{
    int i,c=0;
    for(i=sizeof(int)*8-1;i>=0;i--)
    {
        if(n>>i&1){
            c++;
        }
    } 
    return c;
}