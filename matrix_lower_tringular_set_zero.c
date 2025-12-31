    #include<stdio.h>
    int main (){
        int colomb_row;
        printf("enter the size of the square matrix :");
        scanf("%d", &colomb_row);
        int matrix[colomb_row][colomb_row];
        for (int i = 0; i< colomb_row; i++){
                    for (int j =0; j<colomb_row; j++){
                        printf("element - [%d],[%d] : ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }
        for (int i = 0; i < colomb_row; i++) {
                printf("\n");
                for (int j = 0; j < colomb_row; j++)
                    printf("%d\t", matrix[i][j]);
            }
            printf("\n\n");
        for (int i =0; i< colomb_row;i++){
            for (int j =0; j<colomb_row;j++){
                if (i>j){
                    matrix[i][j]=0;
                }
            }
        }
        for (int i = 0; i < colomb_row; i++) {
                printf("\n");
                for (int j = 0; j < colomb_row; j++)
                    printf("%d\t", matrix[i][j]);
            }
            printf("\n\n");
}