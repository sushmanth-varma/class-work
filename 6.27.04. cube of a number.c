#include <stdio.h>

int cube(int num) {
    int result = num * num * num;
    return result;
}

int main() {
    int number = 3;
    int cube_number = cube(number);
    printf("The cube of %d is %d", number, cube_number);
    return 0;
}
