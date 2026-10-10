#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n;

    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    printf("Number of digits in %d = %d\n", n, count);

    return 0;
}