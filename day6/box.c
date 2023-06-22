#include <stdio.h>

struct Box {
    double l;
    double w;
    double h;
};

void Box_a_v(struct Box *box) {
    double vol = (*box).l * (*box).w * (*box).h;
    double surfaceArea = 2 * ((*box).l * (*box).w + (*box).l * (*box).h + (*box).w * (*box).h);
    
    printf("Volume: %.2f\n", vol);
    printf("Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box *Ptr = &myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &(*Ptr).l);
    
    printf("Enter the width of the box: ");
    scanf("%lf", &(*Ptr).w);
    
    printf("Enter the height of the box: ");
    scanf("%lf", &(*Ptr).h);

    Box_a_v(Ptr);

    return 0;
}