#include <stdio.h>
#include<string.h>

int is_palindrome(char str[]){
    int isPalindrome = 1;
    int strLen = strlen(str)-1;
    for(int i=0; i<strLen; i++){
            if(i < strLen){
                if(str[i] != str[strLen]){
                    isPalindrome = 0;
                    break;
                }else{
                    strLen--;
                }
            }else{
                break;
            }
    }
    return isPalindrome;
}
int main(){
    char str[10];
    scanf("%s",str);
    if(is_palindrome(str)){
        printf("Palindrome \n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}