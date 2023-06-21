#include <stdio.h>
int numcount(int num) {
    int count = 0;
    while(num){
        count+=num&1;
        num>>=1;
    }
    return count;
}
int arrcount(int a[],int size) {
    int totalbits=0;
    for (int i=0;i<size;i++) {
        totalBits+=numcount(a[i]);
    }
    return totalbits;
}
int main() {
    int a[3]={0x1,0xF4,0x10001};
    int size=sizeof(a)/sizeof(a[0]);
    int total=arrcount(a,size);
    printf("The total number of set bits in array is %d\n",total);
    return 0;
}