#include<stdio.h>
int main(){
    int row;
    scanf("%d", &row);
    int misingAnswers[row];
    int matrix[row][4];
    for(int i=0;i<row;i++){
        for(int j=0; j<4;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int tmpSum = 0;
    for(int i=0; i<row; i++){
        for(int j=1; j<4; j++){
            tmpSum+=matrix[i][j];
        }
        misingAnswers[i] = matrix[i][0] - tmpSum;
        tmpSum = 0;
    }
    for(int i=0; i<row; i++){
        printf ("%d\n", misingAnswers[i]);
    }
    return 0;
}