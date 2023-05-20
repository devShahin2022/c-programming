#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int loopLimit = n*2 - 1;
    int whiteSpace = n-1;
    int lineLimit = 1;
    for(int i=1; i<=loopLimit; i++){
        for(int j=1; j<=whiteSpace; j++){
            printf(" ");
        }
        for(int k=1; k<=lineLimit; k++){
            printf("%d", k);
        }
        if(i < n){
            whiteSpace --;
            lineLimit +=2;
        }else{
            whiteSpace ++;
            lineLimit -=2;
        }
        printf("\n");
    }
    return 0;
}