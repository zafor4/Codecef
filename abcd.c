#include <stdio.h>

int main() {
    int n;
    printf("Enter the size  ");
    scanf("%d", &n);

    int m[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) { 
                sum += m[i][j];
            }
        }
    }

    printf("Sum of non-diagonal elements: %d\n", sum);

    return 0;
}
