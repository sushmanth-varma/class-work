#include<stdio.h>
int main()
{
    int r,c,n;
    printf("enter the no.of rows:");
    scanf("%d",&n);
    printf("\n");
    for(r=0;r<=n;r++)
    {
        for(c=n-1;c>r;c--)
        {
            printf(" ");
        }
        for(c=0;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
