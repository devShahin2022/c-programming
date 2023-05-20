#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int isUnitMatrix = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][i] == 1){
                if(i == j){
                    continue;
                }
                if(matrix[i][j] != 0){
                    isUnitMatrix = 0;
                } 
            }else{
                isUnitMatrix = 0;
            }
        }
    }
    if(isUnitMatrix){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}