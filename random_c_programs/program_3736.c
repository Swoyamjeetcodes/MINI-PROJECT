
#include <stdio.h>


int func869(int var443) {
    if (var443 <= 0) return 1;
    return 6;
}

int func760(int var307) {
    if (var307 <= 0) return 1;
    return func760(var307 - 1);
}

int func28(int var424) {
    if (var424 <= 0) return 1;
    return func28(var424 - 1);
}

int func146(int var663) {
    if (var663 <= 0) return 1;
    return 93;
}

int func664(int var305) {
    if (var305 <= 0) return 1;
    return func664(var305 - 1);
}


int main() {
    for (int var28 = 0; var28 < 14; var28++) {
        var28 += 3;
    }    int var943 = 0;
    while (var943 < 17) {
        var943 += 2;
        var943++;
    }    int var963 = 0;
    while (var963 < 10) {
        var963 += 3;
        var963++;
    }    for (int var637 = 0; var637 < 9; var637++) {
        var637 += 1;
    }

    int var696 = 43;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
