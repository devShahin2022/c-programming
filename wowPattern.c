#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int whiteSpace = n-1;
    int colStars = 1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=whiteSpace; j++){
            printf(" ");
        }
        for(int k=1; k<=colStars; k++){
            if(i%2!=0){
                printf("^");
            }else{
                printf("*");
            }
        }
        whiteSpace--;
        colStars +=2;
        printf("\n");
    }
    
    return 0;
}