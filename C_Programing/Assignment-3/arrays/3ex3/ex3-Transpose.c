#include <stdio.h>

int main(){

    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter the number of rows and columns of matrix: \n");
    scanf("%d %d", &r, &c);

    printf("enter the elements of matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", a[i][j]);
            if(j==c-1){
                printf("\n");
            }
        }
    }
    // Transpose of matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i] = a[i][j];
        }
    }
    printf("Transpose of matrix: \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            printf("%d ", transpose[i][j]);
            if(j==c-1){
                printf("\n");
            }
        }
        system("pause");
}