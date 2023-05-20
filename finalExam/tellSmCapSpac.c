#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    fgets(str,1001,stdin);
    int counting[3] = {0};
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            counting[0]++;
        }else if(str[i] == 32){
            counting[2]++;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            counting[1]++;
        }
    }
    printf("Capital - %d\n",counting[0]);
    printf("Small - %d\n",counting[1]);
    printf("Spaces - %d\n",counting[2]);
    return 0;
}