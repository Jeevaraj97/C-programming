//strchr()  : user defined function
// char * strchr(const char*,char)

#include<stdio.h>
char * user_stringCharacter(const char*,char);
int main()
{
    char s[30];
    char c,*cp;
    printf("Enter the string data:\n");
    scanf("%[^\n]",s);
    printf("Enter the searching character:\n ");
    scanf(" %c",&c);
    cp = user_stringCharacter(s,c);
    printf("starting address of string array : %u\n",s);
    if(cp == 0)
    printf("The character '%c' not found in this string data\n",c);
    else
    printf("The character '%c' found in address : %u\n",c,cp);
    return 0;

}
char * user_stringCharacter(const char*p,char ch)
{
    int i;
    for(i=0;p[i];i++){
        if(p[i]==ch){
            return p+i;
        }
    }
    return 0;
}
