
#include <stdio.h>


int func923(int var444) {
    if (var444 <= 0) return 1;
    return func923(var444 - 1);
}

int func452(int var6) {
    if (var6 <= 0) return 1;
    return func452(var6 - 1);
}

int func125(int var777) {
    if (var777 <= 0) return 1;
    return 41;
}

int func550(int var371) {
    if (var371 <= 0) return 1;
    return 61;
}


int main() {
    int var946 = 0;
    while (var946 < 11) {
        var946 += 2;
        var946++;
    }    int var883 = 0;
    while (var883 < 14) {
        var883 += 1;
        var883++;
    }    int var613 = 0;
    while (var613 < 18) {
        var613 += 2;
        var613++;
    }

    int var882 = 60;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    int var329 = 94;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    int var411 = 87;
    if (var411 % 2 == 0) {
        printf("var411 is even\n");
    } else {
        printf("var411 is odd\n");
    }

    return 0;
}
