#include <stdio.h>

int main() {
    double num, square, cube;

    // prompt user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%lf", &num);

    // calculate square and cube using standard method
    square = num * num;
    cube = num * num * num;

    // display results
    printf("Square Number: %.3lf\n", square);
    printf("Cube Number: %.3lf\n", cube);

    return 0;
}
