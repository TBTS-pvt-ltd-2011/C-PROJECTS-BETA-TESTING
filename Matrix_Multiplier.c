
#include <stdio.h>

// Function to check matrix compatibility for multiplication
int checkCompatibility(int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Error: Incompatible matrix dimensions for multiplication.\n");
        printf("Number of columns in the first matrix (%" PRId32 ") must be equal to the number of rows in the second matrix (%" PRId32 ").\n", cols1, rows2);
        return 1; // Indicate error
    }
    return 0; // Indicate success
}

// Function to perform matrix multiplication
void multiplyMatrices(int m1[][10], int m2[][10], int result[][10], int rows1, int cols1, int rows2, int cols2) {
    if (checkCompatibility(rows1, cols1, rows2, cols2)) {
        return; // Handle potential error in compatibility check
    }

    printf("Resultant Matrix:\n");

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < rows2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
    int m2[2][3] = { { 1, 1, 1 }, { 2, 2, 2 } };
    int result[3][3]; // Adjusted size for compatibility

    if (checkCompatibility(3, 2, 2, 3)) {
        return 1; // Handle potential error from compatibility check
    }

    multiplyMatrices(m1, m2, result, 3, 2, 2, 3);

    return 0;
}
