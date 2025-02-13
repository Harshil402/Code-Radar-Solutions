#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input three space-separated integers
    scanf("%d %d %d", &a, &b, &c);
    
    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    
    return 0;
}
