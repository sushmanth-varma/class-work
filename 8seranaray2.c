#include<stdio.h>
#define MAX 50
int main()
{
     int i, n, x;
     int a[MAX];
 
     printf("Enter the size of the array: ");
     scanf("%d", &n);
 
     printf("\nEnter %d elements:\n", n);
 
     for(i = 0; i < n; i++)
        scanf("%d\n", &a[i]);
 
     printf("\nEnter the element to search: ");
     scanf("%d", &x);
 
     for(i = 0; i < n; i++)
     {
         if(a[i] == x)
         {   
             printf("%d found at %d position.", x, i+1);
             return 0;
         }
     }
 
     printf("%d not found", x);
     return 0;
 
}
