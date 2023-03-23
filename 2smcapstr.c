#include<stdio.h>
#include<string.h>
int main()
{
    char stri[20], *p;
    printf("Enter the string:\n");
    scanf("%s",stri);
    p=stri;
    while(*p!='\0')
    {
        if(*p>=97&&*p<=122)
        *p=*p-32;
        p++;
    }
    printf("%s",stri);
    return 0;
}                    
