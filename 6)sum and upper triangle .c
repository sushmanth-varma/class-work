#include <stdio.h>

int main()
{
    int m,n;                 //Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   //Matrix Size Initialization
    int arr[10][10];        //Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)    //Matrix Initialization
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     //Print the matrix
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if(m==n)               //If number of rows and columns equal
    {
       int upsum=0;
       for(int i=0;i<m;i++)
       {
          for(int j=0;j<n;j++)
          {
               if(i<=j)          //Traverse only in the upper triangle
               upsum=upsum+arr[i][j];    //Add the elements 
          }
        }
        //Print the sum of upper triangular elements
        printf("\nThe sum of upper triangular matrix is %d",upsum);
    }
    else
    {                   //Not possible to declare upper triangular elements 
        printf("Not Possible to display lower triangular elements sum");
    }
    return 0;
}
