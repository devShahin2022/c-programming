#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int s=1;
    int l = n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<s; j++){
            printf(" ");
        }
        for(int k=1; k<=l; k++){
            printf("*");
        }
        l-=2;
        s++;
        printf("\n");
    }
    return 0;
}