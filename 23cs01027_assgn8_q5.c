#include <stdio.h>

void take_mat(int col, int mat[][col], int row){
    printf("Enter matrix: \n"); 
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}


void rotate(int col, int mat[][col], int row, int rot){
    int n = rot%4;
    switch(n){
        case 0:
            break;
        case 1:
            for (int j=0; j<col; j++){
                for(int i=row-1; i>=0; i--)
                {
                    printf("%d ", *(*(mat +i)+j));    
                }
                printf("\n");
            }
            break;
        case 2:
            for(int i=row-1; i>=0; i--){
                for (int j=col-1; j>=0; j--){
                    printf("%d ", *(*(mat +i)+j));
                }
                printf("\n");
            }
            break;  
        case 3:
            for (int j=col-1; j>=0; j--){
                for(int i=0; i<row; i++){
                    printf("%d ", *(*(mat +i)+j));
                }
                printf("\n");
            }
            break;
    }
}

int main(){
    int row, col, rot;
    printf("Enter dimensions for matrix: ");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    take_mat(col, mat, row);
    printf("No. of rotations: ");
    scanf("%d", &rot);
    rotate(col, mat, row, rot);
    return 0;
}