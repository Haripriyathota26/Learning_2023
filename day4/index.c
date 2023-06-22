#include<stdio.h>
#include<string.h>
int fun(int n,int a[]);
int main(){
    int n,a[50],i,a;
    printf("enter n value:");
    scanf("%d",&n);
    printf("enter elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    a= fun(n,a);
    printf("the difference is:%d",a);
}
int fun(int n,int a[]){
    int i,e=0,o=0,d;
    for(i=0;i<n;i++){
        if(i%2==0){
            e+= a[i];
        }
        else{
            o+= a[i];
        }

    }
    if(e>o){
        d=e-o;
    }
    else{
        d=o-e;
    }
    return d;
}