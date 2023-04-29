#include <stdio.h>
#include <string.h>

void sort(char *str) {
    int i, j, n = strlen(str);
    char temp;

    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char *str1, char *str2) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    if (n1 != n2) {
        return 0;
    }

    sort(str1);
    sort(str2);

    return strcmp(str1, str2) == 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
