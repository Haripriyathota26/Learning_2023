#include <stdio.h>
void sm(int n){
    int s=9;
    int l=0;
    while(n!=0) {
        int d=n%10;
        if (d<s)
            s=d;
        if (d>l)
            l=d;
        n/=10;
    }
    printf("%d and %d\n",s,l);
}
int main()
{
    int n,a;
    printf("\nEnter the n value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n Enter numbers:");
        scanf("%d",&a);
        if(a>=0 && a<=9){
            printf("\nnot valid");
        }
        else{
            sm(a);
        }
    }
    
    return 0;
}
