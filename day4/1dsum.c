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
    int i,sum=0;
    float a;
    for(i=0;i<n;i++){
        sum+=a[i];

    }
    a=(float)sum/n;
    printf("the sum is:%d\n", sum);
    printf("the average is:%.2f\n",a);
}