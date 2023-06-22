#include <stdio.h>

void bit(unsigned int n) {
    int i;
    unsigned int m= 1<<31;
    for(i=0;i<32;i++){
        if ((n&m)!=0)
            printf("1");
        else
            printf("0");
        m>>=1;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a 32-bit integer: ");
    scanf("%d",&n);
    printf("Bits of the 32-bit integer is: ");
    bit(n);
    return 0;
}
