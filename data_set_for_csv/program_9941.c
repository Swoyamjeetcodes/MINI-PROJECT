
#include <stdio.h>


int func221(int var277) {
    if (var277 <= 0) return 1;
    return func221(var277 - 1);
}

int func334(int var504) {
    if (var504 <= 0) return 1;
    return func334(var504 - 1);
}

int func402(int var397) {
    if (var397 <= 0) return 1;
    return func402(var397 - 1);
}

int func655(int var25) {
    if (var25 <= 0) return 1;
    return 34;
}


int main() {
    int var809 = 0;
    while (var809 < 8) {
        var809 += 4;
        var809++;
    }

    int var781 = 60;
    if (var781 % 2 == 0) {
        printf("var781 is even\n");
    } else {
        printf("var781 is odd\n");
    }

    int var151 = 49;
    if (var151 % 2 == 0) {
        printf("var151 is even\n");
    } else {
        printf("var151 is odd\n");
    }

    return 0;
}
