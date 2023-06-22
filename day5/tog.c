#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[300];
    int i;
    printf("enter string:");
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
        else if(islower(s[i])){
            s[i]=toupper(s[i]);
        }
    }
    printf("the output string is:%s",s);
    return 0;
}