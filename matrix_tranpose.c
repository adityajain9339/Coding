#include<stdio.h>
int main (){
    int colomb_a, row_a ;
    printf("Enter the number of row of matrix  1 :");
    scanf("%d",&colomb_a);
     printf("Enter the number of colomb of martix  1 :");
    scanf("%d",&row_a);
//      printf("Enter the number of row of matrix 2  :");
//     scanf("%d",&colomb2);  
//      printf("Enter the number of colomb of martix  2  :");
//     scanf("%d",&row2);
    int matrix[row_a][colomb_a];
    int matrix_transpose[colomb_a][row_a];
     for (int i = 0; i< row_a; i++){
                for (int j =0; j<colomb_a; j++){
                    printf("element - [%d],[%d] : ", i, j);
                    scanf("%d", &matrix[i][j]);
                }
            }
    for (int i =0 ; i< row_a;i++){
        for(int j =0; j<colomb_a;j++){
            matrix_transpose[j][i]= matrix[i][j];
        }
    }        printf("\nThe matrix is : \n");
        for (int i = 0; i < colomb_a; i++) {
            printf("\n");
            for (int j = 0; j < row_a; j++)
                printf("%d\t", matrix_transpose[i][j]);
        }
        printf("\n\n");


}