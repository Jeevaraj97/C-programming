#include<stdio.h>
void print_binary(int);
int main(){
    int num;
    printf("Enter the number here:\n");
    scanf("%d",&num);
    print_binary(num);
    return 0;
}

void print_binary(int n){
    int i;
    printf("The equalent binary of the given number : %d :\n\n",n);
    for(i=sizeof(int)*8-1;i>=0;i--){
        printf("%d",(n>>i)&1);
    }
    return ;
}