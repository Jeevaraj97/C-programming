//strrchr()  : user define function
//char* strrchr(const char*,char)

#include<stdio.h>
char* user_stringRchar(const char*,char);
int main()
{   char s[30];
    char c,*cp;
    printf("Enter the string data:\n");
    scanf("%[^\n]",s);
    printf("Enter your searching character:\n");
    scanf(" %c",&c);
    cp = user_stringRchar(s,c);
    printf("starting address of string array:%u\n",s);
    if(cp == 0)
    printf("The character '%c' is not found in the given string:\n",c);
    else 
    printf("The character '%c' is found in address :%u\n",c,cp);
    return 0;
}
char* user_stringRchar(const char*p,char ch)
{
    int i,j;
    for(i=0;p[i];i++);
    for(j=i-1;j>=0;j--)
    {
        if(p[j]==ch)
        return p+j;
    }
    return 0;
}
 