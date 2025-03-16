
#include <stdio.h>


int func876(int var875) {
    if (var875 <= 0) return 1;
    return 17;
}

int func314(int var70) {
    if (var70 <= 0) return 1;
    return 72;
}

int func704(int var468) {
    if (var468 <= 0) return 1;
    return 75;
}

int func532(int var766) {
    if (var766 <= 0) return 1;
    return func532(var766 - 1);
}

int func371(int var465) {
    if (var465 <= 0) return 1;
    return 51;
}


int main() {
    for (int var510 = 0; var510 < 14; var510++) {
        var510 += 2;
    }    for (int var366 = 0; var366 < 11; var366++) {
        var366 += 5;
    }

    int var721 = 91;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    int var83 = 48;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    return 0;
}
