#include <stdio.h>

int findBiggest(int a, int b, int c) {
    int biggest = a; // Assume 'a' is the biggest initially

    if (b > biggest) {
        biggest = b; // If 'b' is bigger, update 'biggest'
    }

    if (c > biggest) {
        biggest = c; // If 'c' is bigger, update 'biggest'
    }

    return biggest;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = findBiggest(num1, num2, num3);
    printf("The biggest number is: %d\n", result);

    return 0;
}
