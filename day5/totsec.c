#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s[100];
    printf("enter time(H:M:S):");
    scanf("%s",s);
    char *t=strtok(s,":");
    int h,m,s,t;
    h=strtol(t,NULL,10);
    t=strtok(NULL,":");
    m=strtol(t,NULL,10);
    t=strtok(NULL,":");
    s=strtol(t,NULL,10);
    ts=h*3600+m*60+s;
    printf("Total seconds:%d",ts);
    return 0;
}