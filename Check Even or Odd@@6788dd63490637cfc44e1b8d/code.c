#include <stdio.h>

int main() {
    int num;
    
    // Input a single integer
    scanf("%d", &num);
    
    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    
    return 0;
}
