#include <stdio.h>
#include <string.h>

int main(){
    int matrixOne[4][4];  
    int matrixTwo[4][4];
    int matrixThree[4][4];
    char operation[5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixOne[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixTwo[i][j]);
        }
    }

    scanf("%s", operation);
    if (strcmp(operation, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrixThree[i][j] = matrixOne[i][j] + matrixTwo[i][j];
            }
        }
        for (int i = 0; i < 4; i++) {
            printf("%4d", matrixThree[i][0]);
            for (int j = 1; j < 4; j++) {
                printf(" %*d", 3,matrixThree[i][j]);
            }
            printf("\n");
        }
    } else if (strcmp(operation, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrixThree[i][j] = matrixOne[i][j] - matrixTwo[i][j];
            }
        }
        for (int i = 0; i < 4; i++) {
            printf("%4d", matrixThree[i][0]);
            for (int j = 1; j < 4; j++) {
                printf(" %*d", 3,matrixThree[i][j]);
            }
            printf("\n");
        }
    } else if (strcmp(operation, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrixThree[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    matrixThree[i][j] += matrixOne[i][k] * matrixTwo[k][j];
                }
            }
        }
        for (int i = 0; i < 4; i++) {
            printf("%4d", matrixThree[i][0]);
            for (int j = 1; j < 4; j++) {
                printf(" %*d", 3,matrixThree[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
