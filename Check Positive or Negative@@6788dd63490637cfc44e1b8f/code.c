// Your code here...
#include <stdio.h>

int main() {
    int num;
    
    // Input a single integer
    scanf("%d", &num);
    
    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    
    return 0;
}