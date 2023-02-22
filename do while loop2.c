#include <stdio.h>

int main() {
    int num, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        fact *= num;
        num--;
    } while (num > 0);

    printf("Factorial: %d\n", fact);
    return 0;
}

