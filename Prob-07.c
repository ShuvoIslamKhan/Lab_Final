#include <stdio.h>
int main() {
    int n, coefficient = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 0; k < i; k++) {
            printf("%4d", coefficient);
            coefficient++;
        }
        printf("\n");
    }
    return 0;
}
