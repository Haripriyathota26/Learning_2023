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
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    printf("the min element is:%d\n",a[0]);
    printf("the max element is:%d\n",a[n-1]);
}