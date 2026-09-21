#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%[^\n]", inputString); // Read the whole line, including spaces

    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}
