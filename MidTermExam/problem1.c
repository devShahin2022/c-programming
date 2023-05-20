// #include<stdio.h>
// int main(){

//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0 ; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int sortArr[n];
//     int j = n-1;
//     int k = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2 == 0){
//             sortArr[j] = arr[i];
//             j--;
//         }else{
//             sortArr[k] = arr[i];
//             k++;
//         }
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ",sortArr[i]);
//     }
//     return 0;
// }




#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}