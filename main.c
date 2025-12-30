#include <stdio.h>

int main(void) {
    
    // ‘Prompt the user with ‘Enter x: ’ and ‘Enter y: ’ (without a newline) to read two integers; if both are ≥0, print their sum; otherwise, repeat the prompts once more and print the sum if both ≥0, or print ‘invalid’ if either is negative; all prompts and outputs must match exactly, including spacing and newlines.’
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    if (x < 0 || y < 0) {
        printf("Enter x: ");
        scanf("%d", &x);
        printf("Enter y: ");
        scanf("%d", &y);
    }

    if (x < 0 || y < 0) {
        return 0;
    }

    printf("%d", x + y);

    return 0;
}
