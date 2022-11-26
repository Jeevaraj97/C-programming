#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int n;
    printf("Enter string_1 data:\n");
    scanf("%s",s1);
    printf("Enter the n value for copy the character:\n");
    scanf("%d",&n);
    strncpy(s2,s1,n);
    printf("After copied the string data is:\n");
    printf("String_1 data: %s\n",s1);
    printf("string_2 data: %s\n",s2);
    return 0;
}
