#include<stdio.h>
int main(){
// descening order
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                int vartualData = arr[j];
                arr[j] = arr[i];
                arr[i] = vartualData;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d \n", arr[i]);
    }

    return 0;
}