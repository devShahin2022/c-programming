// This is a simple recursion function
#include <stdio.h>
int print1To5(int i, int upLimit){
    if(i > upLimit) return i;
    print1To5(i+1, upLimit);
}
int main (){
    int sum = print1To5(1, 5);
    printf("sum %d \n", sum);
    printf("Iam from main function \n");
    return 0;
}