#include <stdio.h>

int main() {
    int num, first, last;
    
    // Input the number
    scanf("%d", &num);
    
    last = num % 10; // last digit
    
    // Loop to find the first digit
    while (num >= 10) {
        num /= 10;
    }
    first = num; // first digit
    
    // Output the sum
    printf("%d", first + last);
    
    return 0;
}
