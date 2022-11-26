#include<stdio.h>
int main()
{
    char s[20];
    int i,j,k;
    printf("Enter the string data:\n");
    gets(s);
    for(i=0;s[i];i++);
    for(j=0,k=i-1;k>j;j++,k--){
        if(s[j]!=s[k]){
            break;
        }
    }
    if(j==k){
        printf("\nThe given string %s is a palindrom\n",s);
    }
    else
        printf("\nThe given string %s is not a palindrom\n",s);

return 0;
}