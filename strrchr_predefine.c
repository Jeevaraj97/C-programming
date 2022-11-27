//strrchr(): predefine function

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char c;
    char *res;
    printf("starting address of string array :%u\n",s1);
    printf("Enter the string data:\n");
    scanf("%[^\n]",s1);
    printf("Enter the character for searching:\n");
    scanf(" %c",&c);
    res = strrchr(s1,c);
    if(res == 0)
    printf("The given character '%c' is not in this string:\n",c);
    else
    printf("The given character '%c' is placed in %u location:\n",c,res);

return 0;
}