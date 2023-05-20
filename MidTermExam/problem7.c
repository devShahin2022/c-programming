#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int countArr[26] = {0};
    for (int i = 0; i < strlen(s); i++){
        int index = s[i] - 'a';
        countArr[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i+97, countArr[i]);
    }
    return 0;
}