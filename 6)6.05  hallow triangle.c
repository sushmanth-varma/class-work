#include<stdio.h>
 
int main() {
    int i, space, rows, star=0;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
 
    /* printing one row in every iteration */
    for(i = 0; i < rows-1; i++) {
        /* Printing spaces */
        for(space = 1; space < rows-i; space++) {
            printf(" ");
        }
        /* Printing stars */
        for (star = 0; star <= 2*i; star++) {
            if(star==0 || star==2*i)
                printf("*");
            else
                printf(" ");
        }
        /* move to next row */
        printf("\n");
    }
    /* print last row */
    for(i=0; i<2*rows-1; i++){
        printf("*");
    }
    return 0;
}
