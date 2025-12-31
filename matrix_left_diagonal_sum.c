    // matrix left diagonal sum of the element
    // condion for the left diagonal  
    // row index == column index
    // i == j
    // 1  2  3
    // 4  5  6
    // 7  8  9
    // Left diagonal elements: 1, 5, 9
    // sum of the element is 1+5+9;
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
        int sum =0;
        for (int i =0; i<colomb_row;i++){
            for( int j =0; j<colomb_row;j++){
                if (i==j){
                    sum = sum+matrix[i][j];
                }
            }
        }
        printf("the sum of the left  diagonal element is %d", sum );

    }
