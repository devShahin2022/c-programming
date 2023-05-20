#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int middle = (n+1)/ 2;
    for(int i=1; i<=n; i++){
        if(i == middle){
            for(int j=1; j<=n; j++)printf("#");
        }else{
            for(int j=1; j<=n; j++){
                if(j==middle){
                printf("#"); 
                }else{
                    printf("*"); 
                }
            }
        }
        printf("\n");
    }
    return 0;
}