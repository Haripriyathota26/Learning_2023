#include <stdio.h>
struct time {
    int h;
    int m;
    int s;
};
struct time Timediff(struct time t1, struct time t2) {
    struct Time diff;
    int sec1, sec2, timediff;
    sec1 = t1.h * 3600 + t1.m * 60 + t1.s;
    sec2 = t2.h * 3600 + t2.m * 60 + t2.s;
    timediff = sec2 - sec1;
    if (timediff < 0)
        timediff += 24 * 3600;
    timediff = timediff % 3600;
    diff.m = timediff / 60;
    diff.s = timediff % 60;
    return diff;
}
int main() {
    struct time t1, t2, diff;
    printf("Enter time1 (hours minutes seconds): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);
    printf("Enter time2 (hours minutes seconds): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);
    diff =Timediff(t1, t2);
    printf("Time difference: %2d:%2d:%2d\n", diff.h, diff.m, diff.s);
    return 0;
}
