//string comparition program using predefine function
//strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    int t;
    printf("Enter the string_1 data:\n");
    scanf("%[^\n]",s1);
    printf("Enter the string_2 data:\n");
    scanf(" %[^\n]",s2);
    t = strcmp(s1,s2);
    if(t==0)
    printf("Both string data are same:\n");
    else
    printf("Both string data are not same:\n");
return 0;
}

