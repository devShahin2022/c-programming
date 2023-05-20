#include<stdio.h>
int main(){
    int ArrSize,findNum,numCount=0;
    scanf("%d",&ArrSize);
    int numArr[ArrSize];
    for(int i=0; i<ArrSize; i++){
        scanf("%d",&numArr[i]);
    }
    scanf("%d",&findNum);
    for (int i = 0; i < ArrSize; i++){
        if(numArr[i] == findNum){
            numCount++;
        }
    }
    printf("%d \n", numCount);
    
    return 0;
}