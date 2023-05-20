#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int capLetter = 0, smLetter = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]< 'a'){
            capLetter++;
        }else{
            smLetter++;
        }
    }
    printf("%d %d\n", capLetter, smLetter);
    return 0;
}