#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int seekSum , isPossible=0;
    scanf("%d", &seekSum);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == seekSum){
                printf("yes");
                isPossible = 1;
                break;
            }
        }
    }
    if(!isPossible){
        printf("No");
    }
    return 0;
}