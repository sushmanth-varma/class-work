#include <stdio.h>
int main() {
	int age;
	printf("Please enter age:");
	scanf("%d", &age);
	if (age <= 0) {
		printf("Invalid input");
	} else if (age >= 1 && age <= 5) {
		printf("child");
       } else if (age >= 6 && age <= 10) {
               printf("teenager");
	} else {
		printf("Adult");
	}
}
