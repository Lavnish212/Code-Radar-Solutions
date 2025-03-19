#include<stdio.h>

int main() {
    int n, position, i = 0;
    scanf("%d %d", &n, &position);

    if (position >= 32) {
        printf("Invalid position\n");
        return 1;
    }

    int arr[32] = {0};
    while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    if (position >= i) {
        i = position + 1;  // Extend the number of bits if needed
    }
    arr[position] = 1;

    int sum = 0;
    int multiple = 1;
    for (int j = 0; j < i; j++) {
        sum = sum + multiple * arr[j];
        multiple = multiple * 2;
    }

    printf("%d\n", sum);
    return 0;
}
