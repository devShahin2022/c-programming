#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = n;
    for(int i=1; i<=n; i++){
        if(i == 1 || i==n){
            for(int j=1; j<=star; j++){
                printf("* ");
            }
        }else{
            printf("*");
            for(int j=1; j<=n-2; j++){
                printf("  ");
            }
            printf(" *");
        }
        printf("\n");
    }
}