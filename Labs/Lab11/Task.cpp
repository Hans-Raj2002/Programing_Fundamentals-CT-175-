#include <stdio.h>

int readInt() {
    int x;
    while (scanf("%d", &x) != 1)
{
        printf("Invalid input! Please enter an integer: ");
    }
    return x;
}

void inputMatrix(int m, int n, int matrix[m][n])
{
    for (int i = 0; i < m; i++)
{
        for (int j = 0; j < n; j++)
{
            printf("Element: ", matrix[]i,[]j);
            matrix[i][j] = readInt();
        }
    }
}

int check(int c1, int r2)
{
    return (c1 == r2) ? 1 : 0;
}

void product(int r1, int c1, int c2, int A[r1][c1], int B[c1][c2], int P[r1][c2])
{
    for (int i = 0; i < r1; i++)
{
        for (int j = 0; j < c2; j++)
{
            P[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                P[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int r, int c, int M[r][c])
{
    printf("Resulting Matrix:\n");
    for (int i = 0; i < r; i++)
{
        for (int j = 0; j < c; j++)
{
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows of Matrix A: ");
    r1 = readInt();
    printf("Enter columns of Matrix A: ");
    c1 = readInt();

    printf("Enter rows of Matrix B: ");
    r2 = readInt();
    printf("Enter columns of Matrix B: ");
    c2 = readInt();

    int A[r1][c1], B[r2][c2], P[r1][c2];

    printf("\n--- Input Matrix A ---\n");
    inputMatrix(r1, c1, A);

    printf("\n--- Input Matrix B ---\n");
    inputMatrix(r2, c2, B);

    if (!check(c1, r2)) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Because columns of A (%d) ? rows of B (%d)\n", c1, r2);
        return 0;
    }

    product(r1, c1, c2, A, B, P);

    displayMatrix(r1, c2, P);

    return 0;
}

