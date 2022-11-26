#include<stdio.h>
int main()
{
    char s[20];
    int i,j;
    printf("Enter the string data:");
    gets(s);
    for(i=0;s[i];i++)
    {   
        if(s[i]==' '&& s[i+1]==' ')
        {
          for(j=i;s[j];j++){
            s[j] = s[j+1];
            }
            i--;
        }
    }
    printf("After removing the concecutive spaces in given string :\n %s",s);
    return 0;
}