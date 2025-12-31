#include<stdio.h>
int main (){
    int colomb1, row1 ,colomb2,row2;
    printf("Enter the number of colomb in  1 :");
    scanf("%d",&colomb1);
     printf("Enter the number of row in  1 :");
    scanf("%d",&row1);
     printf("Enter the number of colomb in 2  :");
    scanf("%d",&colomb2);  
     printf("Enter the number of row in 2  :");
    scanf("%d",&row2);
        if (colomb1==row2){
            int matrix1[row1][colomb1];
            for (int i = 0; i< row1; i++){
                for (int j =0; j<colomb1; j++){
                    printf("element - [%d],[%d] : ", i, j);
                    scanf("%d", &matrix1[i][j]);
                }
            }
            int matrix2[row2][colomb2];
            for (int i = 0; i< row2; i++){
                for (int j =0; j<colomb2; j++){
                    printf("element - [%d],[%d] : ", i, j);
                    scanf("%d", &matrix2[i][j]);
                }}
            int martrix_result[row1][colomb2];
            for (int i =0 ;i < row1;i++){
                for(int j =0; j < colomb2;j++){
                    int sum =0;
                    for(int k =0; k< colomb1 ;k++){
                        sum+= matrix1[i][k] * matrix2[k][j];
                        martrix_result[i][j]= sum;
                    }
                }
            }
    
        printf("\nThe matrix is : \n");
        for (int i = 0; i < row1; i++) {
            printf("\n");
            for (int j = 0; j < colomb2; j++)
                printf("%d\t", martrix_result[i][j]);
        }
        printf("\n\n");
    }
    else{
        printf("the matrix  mulpipliction is not posible make comlomb 1 is equal to row 2  ");
    }
}