#include<stdio.h>
char* user_stringcopy(char *,const char *);
int main()
{
    char s1[20],s2[20];
    char *cp;
    printf("Enter the string_1 data:\n");
    scanf("%[^\n]",s1);
    //copy the string 1 data to string 2
    cp = user_stringcopy(s2,s1);
    printf("After copying the string data :\n\n");
    printf("String_1 : %s\n",s1);
    printf("String_2 : %s\n",s2);
    printf("cp holded adderss : %u\n",cp);

    return 0;
}
char* user_stringcopy(char *c2,const char *c1)
{
    int i;
    for(i=0;c1[i];i++)
    {
        c2[i]=c1[i];
    }
//    c2[i]=c1[i];
c2[i]='\0';
return;
}