//matrix right diagonal sum in this code
// what dose this code is sum of right diagonal 
// wht does the right diagonal means suppose 
// 1  2  3
// 4  5  6
// 7  8  9
// Right diagonal elements are:

// 3 (top-right)

// 5 (middle)

// 7 (bottom-left)
// sum of the right diagonal sumis the sum of 3+5+7;
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
    int  sum =0;
    for(int i=0; i<colomb_row;i++){
        sum = sum +matrix[i][colomb_row -1 -i];
        }
    printf("the sum of the right diagonal element is %d", sum );
    


}