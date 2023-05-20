#include<stdio.h>
int count_before_zero(int numArr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(numArr[i] == 0){
           return count; 
        }
        count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    int numArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &numArr[i]);
    }
    printf("%d\n", count_before_zero(numArr, n));
    return 0;
}