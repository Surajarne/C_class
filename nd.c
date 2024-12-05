#include <stdio.h>

int main() {
    int a[3][3] = {{3, 4, 5}, {6, 5, 7}, {4, 8, 6}};
    int b[3][3] = {{2, 5, 7}, {6, 7, 8}, {9, 6, 5}};
    int c[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)	{
		for(int k = 0; j < 3; j++)   {
            c[i][j] = a[i][k] * b[k][j]; 
		}
        }
    }

    printf("Matrix C after multiplicatiopn of A and B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

