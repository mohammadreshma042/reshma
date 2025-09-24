#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("hihello\n");
    } else if (num % 3 == 0) {
        printf("hi\n");
    } else if (num % 5 == 0) {
        printf("hello\n");
    } else {
        // Optional: print something if not divisible by 3 or 5
        // printf("Not divisible by 3 or 5\n"); 
    }

    return 0;
}
