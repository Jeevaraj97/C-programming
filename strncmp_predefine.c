//strncpy() : predefine function

#include<stdio.h>
#include<string.h>
int main()
{   char s1[30],s2[30];
    int t,n;
    printf("Enter string_1 data:\n");
    scanf("%[^\n]",s1);
    printf("Enter string_2 data:\n");
    scanf(" %[^\n]",s2);
    printf("Size of comparision:\n");
    scanf("%d",&n);
    t = strncmp(s1,s2,n);

    if(t==0)
    printf("Both string data's are same in given size\n");
    else
    printf("Both string data's are not same in given size\n");

    return 0;
}