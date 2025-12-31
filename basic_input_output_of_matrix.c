#include<stdio.h>
int main (){
    int colomb , row ;
    printf("enter the number of colomb in the matrix :");
    scanf("%d", &colomb);
    printf("enter the number of row in the matrix ");
    scanf("%d", &row);
    int matrix[colomb][row];
    for (int i = 0; i< colomb; i++){
        for (int j =0; j<row; j++){
             printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
        printf("\nThe matrix is : \n");
    for (int i = 0; i < colomb; i++) {
        printf("\n");
        for (int j = 0; j < row; j++)
            printf("%d\t", matrix[i][j]);
    }
    printf("\n\n");
}