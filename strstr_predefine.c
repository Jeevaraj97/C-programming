//strstr()  : predefine function

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[20];
    char *cp;
    printf("Enter the string data (source):\n");
    scanf("%[^\n]",s1);
    printf("Enter the string data (search):\n");
    scanf(" %[^\n]",s2);
    cp = strstr(s1,s2);
    if(cp==0)
    printf("String is not found \n");
    else
    printf("String is found in address:%u\n",cp);
    
    return 0;
}