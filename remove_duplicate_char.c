#include<stdio.h>
int main()
{   char s[20];
    int i,j,k,t;
    printf("Enter the string data:\n");
    gets(s);
    for(i=0;s[i];i++){
        for(j=i+1;s[j];j++){
            if(s[i]==s[j]){
                if(s[j]==s[j+1]){
                    s[j]=s[j+1]=s[j+2];
                }
                else
                s[j]=s[j+1];
                j--;
            }
        }
    }
    printf("After removal :\n\n%s",s);
return 0;
}