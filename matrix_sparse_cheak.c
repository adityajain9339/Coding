// A sparse martix is matrix which has more zero elements than nonzero elements
#include<stdio.h>
int main (){
    int colomb, row ;
    printf("Enter the number of colomb in  1 :");
    scanf("%d",&colomb);
     printf("Enter the number of row in  1 :");
    scanf("%d",&row);

        
            int matrix[row][colomb];
            for (int i = 0; i< row; i++){
                for (int j =0; j<colomb; j++){
                    printf("element - [%d],[%d] : ", i, j);
                    scanf("%d", &matrix[i][j]);
                }
            }
        int cheak=0 ,non_number;
        for (int i =0 ; i<row;i++){
            for(int j =0; j< colomb;j++){
                if (matrix[i][j] ==0) cheak = cheak+1;
            }
        }
        non_number= (row*colomb)-cheak;
        if (cheak> non_number) printf("the matrix is sparse martix ");
        else printf("the matrix is not sparse martix ");


}