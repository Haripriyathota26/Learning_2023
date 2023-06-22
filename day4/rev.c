#include<stdio.h>
#include<string.h>
void fun(int n,int a[]);
int main(){
    int n,a[50],i;
    printf("enter n value:");
    scanf("%d",&n);
    printf("enter elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(n,a);
    return 0;
}
void fun(int n,int a[]){
    int i,temp;
    for(i=0; i<n/2; i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
       
    }
    printf("the reverse array:");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}