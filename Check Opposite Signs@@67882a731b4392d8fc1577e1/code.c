#include <stdio.h>

int main() {
    int num1, num2;

    // Taking two space-separated integers as input
    scanf("%d %d", &num1, &num2);

    // Checking if the numbers have opposite signs using the product approach
    if (num1 * num2 < 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
