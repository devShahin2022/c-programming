#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int EachRound[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&EachRound[i][j]);
        }
    }
    int tigerRes=0, pathanRes=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            if(EachRound[i][0] > EachRound[i][1]){
                tigerRes++;
            }else if(EachRound[i][0] < EachRound[i][1]){
                pathanRes++;
            }else{
                continue;
            }
        }
    }
    if(tigerRes > pathanRes){
        printf("Tiger\n");
    }else if(tigerRes < pathanRes){
        printf("Pathan\n");
    }else{
        printf("Draw\n");
    }
    return 0;
}