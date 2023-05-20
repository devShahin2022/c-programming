// ________________________________
// 1. Has Return + Parameter
//_________________________________
#include <stdio.h>
int sumTwoInt(int a, int b){
    return a+b;
}
int main(){
    printf("%d \n",sumTwoInt(3,5));
    return 0;
}


// ________________________________
// 2. Has Return + No Parameter
//_________________________________


#include <stdio.h>
int sendYear(){
    return 2022;
}
int main(){
    printf("%d \n",sendYear());
    return 0;
}



// ________________________________
// 3. Has Return + No Parameter
// ________________________________

#include <stdio.h>
void oddOrEven(int num){
    if((num%2)==0){
        printf("even");
    }else{
        printf("odd");
    }
}
int main(){
    oddOrEven(3);
    return 0;
}



// ________________________________
// 4. No Return + No Parameter
// ________________________________


#include <stdio.h>
void simpleFun(){
    printf("Hello World!");
}
int main(){
    simpleFun();
}