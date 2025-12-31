#include<stdio.h>
int main (){
    int colomb , row ;
    printf("enter the number of colomb in the matrix :");
    scanf("%d", &colomb);
    printf("enter the number of row in the matrix ");
    scanf("%d", &row);
    int matrix1[row][colomb];
    for (int i = 0; i< colomb; i++){
        for (int j =0; j<row; j++){
             printf("element  of matrix 1- [%d],[%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
        printf("\nThe matrix is 1 : \n");
    for (int i = 0; i < colomb; i++) {
        printf("\n");
        for (int j = 0; j < row; j++)
            printf("%d\t", matrix1[i][j]);
    }
    printf("\n\n");
    
    int matrix2[row][colomb];
     for (int i = 0; i< colomb; i++){
        for (int j =0; j<row; j++){
             printf("element of matrix 2 - [%d],[%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
        printf("\nThe matrix is 2 : \n");
    for (int i = 0; i < colomb; i++) {
        printf("\n");
        for (int j = 0; j < row; j++)
            printf("%d\t", matrix2[i][j]);
    }
    int matrix3[row][colomb];
    for (int i = 0; i< colomb; i++){
        for (int j =0; j<row; j++){
            matrix3[i][j] = matrix1[i][j]+ matrix2[i][j];
        }
    }
      for (int i = 0; i < colomb; i++) {
        printf("\n");
        printf("-------------------------------------------------- \n ");
        for (int j = 0; j < row; j++)
            printf("%d\t", matrix3[i][j]);
    }      
}
