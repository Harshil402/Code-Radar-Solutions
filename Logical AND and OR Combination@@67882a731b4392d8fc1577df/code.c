#include <stdio.h>

int main() {
    int num1, num2;

    // Taking two space-separated integers as input
    scanf("%d %d", &num1, &num2);

    // Checking the condition using AND (&&) and OR (||) operators
    if ((num1 > 0 && num2 < 0) || (num1 == 0 && num2 == 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
