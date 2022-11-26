#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter string data s1:\n");
    scanf("%s",s1);
    strcpy(s2,s1);
    printf("String_1 data:\n%s\n",s1);
    printf("String_2 data:\n%s\n",s2);
return 0;
}