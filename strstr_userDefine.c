//strstr()  :user define function
// char * strstr(const char*,const char*)

#include<stdio.h>
char * user_stringstr(const char *p,const char *q);
int main(){
char s1[30],s2[20];
char *cp;
printf("Enter the string_1 data(source):\n");
scanf("%[^\n]",s1);
printf("Enter the string_2 data:(search)\n");
scanf(" %[^\n]",s2);
cp = user_stringstr(s1,s2);
if(cp==0)
printf("String_2 data is not found in string_1 data\n");
else
printf("String_2 data is found in string_1 address:%u\n",cp);

return 0;
}
/*
logic :1
char * user_stringstr(const char *p,const char *q)
{
    int i,j,k,l,c=0;
    for(l=0;q[l];l++);
    for(i=0;p[i];i++)
    {   j=0;
        if(p[i]==q[j])
        {
            for(j=0,k=i;q[j];j++,k++){
                if(q[j]==p[k])
                c++;
                else
                break;
            }
            if(c==l)
            return (p+i);
        }    
    }
    return 0;
}
*/
//logic :2
char * user_stringstr(const char *p,const char *q)
{
     int i,j;
     for(i=0;p[i];i++){
        if(p[i]==q[0]){
            for(j=1;q[j];j++){
             if(q[j]!=p[i+j])
             break;
            }
        }
        if(q[j]=='\0')
        return p+i;
     }
     return 0;
}