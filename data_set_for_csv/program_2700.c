
#include <stdio.h>


int func622(int var56) {
    if (var56 <= 0) return 1;
    return func622(var56 - 1);
}

int func296(int var766) {
    if (var766 <= 0) return 1;
    return func296(var766 - 1);
}


int main() {
    int var689 = 0;
    while (var689 < 13) {
        var689 += 5;
        var689++;
    }

    int var268 = 99;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    int var494 = 90;
    if (var494 % 2 == 0) {
        printf("var494 is even\n");
    } else {
        printf("var494 is odd\n");
    }

    return 0;
}
