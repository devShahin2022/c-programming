
#include<stdio.h>
int pass_by_value(int num){
    num = 20;
    return num;
}
int main(){
    int userVal = 50;
    int res = pass_by_value(userVal);

    printf("%d\n", res); // redeclare userVal from pass_by_value function
    printf("%d\n", userVal); 
    return 0;
}


#include<stdio.h>
int pass_by_reference(int*uservalAddr){
    *uservalAddr = 100;
    return *uservalAddr;
}
int main(){
    int userVal = 50;
    printf("%d \n",pass_by_reference(&userVal)); // user value change here
    printf("%d \n",userVal);
    return 0;
}
