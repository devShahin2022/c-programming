#include<stdio.h>
int main(){
    int numOfStd;
    scanf("%d",&numOfStd);
    int markArr[numOfStd],markDisArr[numOfStd];
    for(int i=0; i<numOfStd; i++){
        scanf("%d", &markArr[i]);
    }
    int maxNum = markArr[0];
    for(int i=1; i<numOfStd;i++){
        if(maxNum > markArr[i] || maxNum == markArr[i]){
           continue;
        }else{
           maxNum = markArr[i];
        }
    }
    for(int i=0; i<numOfStd; i++){
        markDisArr[i] = maxNum - markArr[i];
    }
    for(int i=0; i<numOfStd; i++){
        printf("%d ",markDisArr[i]);
    }
}