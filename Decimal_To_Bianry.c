#include <stdio.h>
int main() {
    int n, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int temp = n;
    if (temp == 0) {
        printf("Binary equivalent of 0 = 0\n");
        return 0;
    }
    while (temp > 0) {
        binary[i] = temp % 2;
        temp /= 2;
        i++;
    }
    printf("Binary equivalent of %d = ", n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}