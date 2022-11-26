//strncpy() :user define
//char * strncpy(char* desttination,const char * source,size_t)

#include<stdio.h>
char * user_stringNcopy(char *,const char*,int);
int main()
{
    char s1[30],s2[30];
    char *cp;
    int n;
    printf("Enter the data for string_1:\n");
    scanf("%[^\n]",s1);
    printf("Enter howmany charactor copied to string_2:\n");
    scanf("%d",&n);
    cp = user_stringNcopy(s2,s1,n);
    printf("After copying the string_1 data to string_2:\n");
    printf("string_1 data:\n%s\n",s1);
    printf("String_2 data:\n%s\n",s2);
    return 0;
}
char * user_stringNcopy(char *p,const char*q,int a)
{   int i;
    for(i=0;i<a;i++)
    {   if(q[i]!='\0')
        p[i]=q[i];
        else
        p[i]='\0';
    }
    p[i]='\0';
return p;
}
