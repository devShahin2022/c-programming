#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int numOfVowel = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            numOfVowel++;
        }
    }
    printf("%d",numOfVowel);
    return 0;
}