
#include <stdio.h>


int func536(int var894) {
    if (var894 <= 0) return 1;
    return 21;
}

int func904(int var530) {
    if (var530 <= 0) return 1;
    return 52;
}

int func294(int var741) {
    if (var741 <= 0) return 1;
    return func294(var741 - 1);
}

int func84(int var637) {
    if (var637 <= 0) return 1;
    return func84(var637 - 1);
}

int func896(int var556) {
    if (var556 <= 0) return 1;
    return 25;
}


int main() {
    int var354 = 0;
    while (var354 < 9) {
        var354 += 2;
        var354++;
    }    int var607 = 0;
    while (var607 < 8) {
        var607 += 3;
        var607++;
    }    for (int var165 = 0; var165 < 6; var165++) {
        var165 += 1;
    }

    int var255 = 59;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    int var860 = 69;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
