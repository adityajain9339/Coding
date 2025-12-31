// The sum or rows and columns of the matrix is:
//    5   6    =  11                                                                                              
//    7   8   =   15                                                                                              
//     =   =                                                                                                       
//   12  14 
#include<stdio.h>
int main(){
        int colomb1, row1 ;
    printf("Enter the number of colomb in  1 :");
    scanf("%d",&colomb1);
     printf("Enter the number of row in  1 :");
    scanf("%d",&row1);
    int matrix1[row1][colomb1];
    for (int i = 0; i< row1; i++){
         for (int j =0; j<colomb1; j++){
              printf("element - [%d],[%d] : ", i, j);
               scanf("%d", &matrix1[i][j]);
               }
    }
            for (int i = 0; i < row1; i++) {
                printf("\n");
                for (int j = 0; j < colomb1; j++)
                    printf("%d\t", matrix1[i][j]);
            }
            printf("\n\n");
        for (int i = 0; i < row1; i++) {
            int sum = 0;         
            for (int j = 0; j < colomb1; j++) {
                sum += matrix1[i][j];
            }
            printf("Sum of row %d = %d\n", i, sum);
        }
        for (int j = 0; j < colomb1; j++) {   
            int sum_colomb = 0;               
            for (int i = 0; i < row1; i++) {  
                sum_colomb += matrix1[i][j];  
            }
            printf("Sum of column %d = %d\n", j, sum_colomb);
        }
}




        

 

