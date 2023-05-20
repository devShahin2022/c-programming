#include<stdio.h>
int main(){
    int step;
    scanf("%d",&step);
    int size[step];
    int found[step];
    int numbers[step][1000];
    int answers[step];
    for(int i=0; i<step; i++){
        scanf("%d", &size[i]);
        for(int j=0; j<size[i]; j++){
            scanf("%d",&numbers[i][j]);
        }
        scanf("%d",&found[i]);
    }
    for (int i = 0; i < step; i++){
        for(int j=0; j<size[i]; j++){
            if(numbers[i][j] == found[i]){
                answers[i] = j+1;
                break;
            }else{
                answers[i] = 0;
            }
        }
    }
    for (int i = 0; i < step; i++){
        if(answers[i] != 0){
            printf("Case %d: %d \n",i+1, answers[i]);
        }else{
            printf("Case %d: Not Found \n", i+1);
        }
    }
    return 0;
}