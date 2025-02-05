#include <stdio.h>

int main() {
    int num1, num2;

    // Taking two space-separated integers as input
    scanf("%d %d", &num1, &num2);

    // Checking if the first number is less than the second
    if (num1 < num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
