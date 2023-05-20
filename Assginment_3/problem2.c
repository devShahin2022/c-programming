#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int whiteSpace = n-1;
    int dynamicNum = 1;
    for(int i=1; i<=n; i++){
        for(int k = 1; k<=whiteSpace;k++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", dynamicNum);
        }
        whiteSpace --;
        dynamicNum++;
        printf("\n");
    }
    return 0;
}