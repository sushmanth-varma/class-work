#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the digits of the number
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    // Move the last digit to the first position and vice versa
    int last_digit = rev % 10;
    rev /= 10;
    int first_digit = rev;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    int new_num = last_digit;
    while (rev > 0) {
        digit = rev % 10;
        new_num = new_num * 10 + digit;
        rev /= 10;
    }
    new_num = new_num * 10 + first_digit;

    printf("Reverse Number: %d\n", new_num);

    return 0;
}
