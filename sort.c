#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ages[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ages[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int tmpData = ages[i];
            if(ages[i] > ages[j]){
                ages[i] = ages[j];
                ages[j] = tmpData;
            }
        }
    }
    if(n%2 != 0){
        int num = (n+1)/2;
        printf("%d \n",ages[num-1]);
    }else{
        int num = n/2;
        printf("%d %d\n",ages[num-1],ages[num]);
    }
    return 0;
}