#include<stdio.h>
int main()
{   char s1[20],s2[20];
    int i,j,t;
//read the string data
    printf("Enter the data for string_1:\n");
    scanf("%[^\n]",s1);
    printf("Enter the data for string_2:\n");
    scanf(" %[^\n]",s2);
//print the string data(initial)
printf("\nstring_1 data:\n%s",s1);
printf("\nString_2 data:\n%s",s2);

//remove all non-alphabet character from string 1

for(i=0;s1[i];i++){
if(s1[i]>='a' && s1[i]<='z' || s1[i]>='A' && s1[i]<='Z');
else{
for(j=i;s1[j];j++){
    s1[j]=s1[j+1];
}
i--;
}
}

//remove all non-alphabet character from string 2

for(i=0;s2[i];i++){
if(s2[i]>='a' && s2[i]<='z' || s2[i]>='A' && s2[i]<='Z');
else{
for(j=i;s2[j];j++){
    s2[j]=s2[j+1];}
i--;
}
}
printf("\nAfter removing the non-alphabet character:");
printf("\nstring_1 data:\n%s",s1);
printf("\nString_2 data:\n%s",s2);

//convert all characters in string in upper case
//string:1
for(i=0;s1[i];i++)
{
    if(s1[i]>='a' && s1[i]<='z'){
        s1[i]=s1[i]-32;
    }
}
//string:2
for(i=0;s2[i];i++)
{
    if(s2[i]>='a' && s2[i]<='z'){
        s2[i]=s2[i]-32;
    }
}
printf("\nAfter converting the smaller case to upper case:");
printf("\nstring_1 data:\n%s",s1);
printf("\nString_2 data:\n%s",s2);

//arrange in correct order
//sorting string : 1
for(i=0;s1[i];i++){
    for(j=i+1;s1[j];j++){
        if(s1[i]>s1[j]){
            t = s1[j];
            s1[j]=s1[i];
            s1[i]= t;
        }
    }
} 
//sorting string : 2
for(i=0;s2[i];i++){
    for(j=i+1;s2[j];j++){
        if(s2[i]>s2[j]){
            t = s2[j];
            s2[j]=s2[i];
            s2[i]= t;
        }
    }
} 
printf("\nAfter sorting the strings:\n");
printf("\nstring_1 data:\n%s",s1);
printf("\nString_2 data:\n%s",s2);

//comparing two string data:
for(i=0;s1[i];i++){
    if(s1[i]!=s2[i]){
        break;
    }    
}
if(s1[i]==s2[i]){
    printf("\nBoth strings data are same: So it is a anagram\n");
}
else
    printf("\nBoth strings data are not same: So it is not a anagram\n");

return 0;
}