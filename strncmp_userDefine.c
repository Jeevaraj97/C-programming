//strncmp() : user define function
//int strncmp(const char* source_1,const char* source_2,size_t)

#include<stdio.h>
int user_stringNcomparision(const char*p,const char*q,int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        if(p[i]!=q[i])
        break;
    }
    if(i==a)
    return 0;
    else{
        if(p[i]>q[i])
        return 1;
        else
        return -1;
    }
}
int main()
{   char s1[20],s2[20];
    int t,n;
    printf("Enter the string_1 data:\n");
    scanf("%[^\n]",s1);
    printf("Enter the string_2 data:\n");
    scanf(" %[^\n]",s2);
    printf("Enter comparision size:\n");
    scanf("%d",&n);
    t = user_stringNcomparision(s1,s2,n);
    if(t==0)
    printf("Both strings are have same data in given size\n");
    else
    printf("Both strings are have not same data in given size\n");
    return 0;
}

