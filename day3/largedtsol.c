#include <stdio.h>
int del(int n) {
    int l=0;
    int num=n;
    int d=1;
    while (d<=num) {
        int r= (num/(d*10))*d+ (num% d);
        if (r> l) {
            l = r;
        }
        divisor *= 10;
    }

    return l;
}
int main() {
    int n,l,lar;
    printf("Enter a n value: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("\nEnter 4 digit numbers:");
    scanf("%d",&l);
    if (l<1000||l>9999) {
    printf("\nNot a 4 digit number");
    }
    else{
        lar=del(l);
        printf("\nafter deleting: %d",lar);
    }
    }
    return 0;
}