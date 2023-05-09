#include <stdio.h>  
int main()  
{
    int n1, n2, i , j, count = 0;
    printf("enter size of array 1 : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter elements of array 1 : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter size of array 2 : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter elements of array 2 : ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
                break;
            }
        }
    }
    if((count==n1)&&(count==n2))
    {
        printf("Arrays are same");
    }
    else
    {
        printf("Arrays are not same");
    }  
    return 0;
}
