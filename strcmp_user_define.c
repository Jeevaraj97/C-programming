//strcmp()  :user define function 
//int strcmp(const char* source_1,const char* source_2)
#include<stdio.h>
int user_stringComparision(const char*,const char*);
int main()
{
    char s1[30],s2[30];
    int t;
    printf("Enter the string_1 data:");
    scanf("%[^\n]",s1);
    printf("Enter the string_2 data:");
    scanf(" %[^\n]",s2);
    t = user_stringComparision(s1,s2);
    printf("After comparing two strings:\n");
    printf("t=%d\n",t);
    if(t==0)
    printf("Both strings data's are same:\n");
    else
    printf("Both strings data's are not same:\n");

return 0;
}
int user_stringComparision(const char *p,const char *q)
{
    int i;
    for(i=0;p[i];i++){
        if(p[i]!=q[i])
        break;
    }
    if(p[i]==q[i])
    return 0;
    else{
    if(p[i]>q[i])
    return 1;
    else
    return -1;
    }
}
