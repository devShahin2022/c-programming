#include <stdio.h>
void print1To5(int i , int uplimit){
    if(i > uplimit) return;
    printf("%d\n", i);
    print1To5(i+1, uplimit);
}
int main(){
    
    print1To5(1, 10);
    return 0;
}