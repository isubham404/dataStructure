// Name : Subham Kar
// Date : 23/04/2026
// Problem : Diagonal Swap in the matrix

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    int **a;

    printf("Enter rows & cols: ");
    scanf("%d %d", &m, &n);

    a = (int**)malloc(m * sizeof(int*));
    for(i = 0; i < m; i++)
        a[i] = (int*)malloc(n * sizeof(int));

    printf("Enter matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < m; i++) {
        int temp = a[i][i];
        a[i][i] = a[i][n-i-1];
        a[i][n-i-1] = temp;
    }

    printf("Result:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}