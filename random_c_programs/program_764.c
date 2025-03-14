
#include <stdio.h>


int func119(int var299) {
    if (var299 <= 0) return 1;
    return 49;
}

int func691(int var606) {
    if (var606 <= 0) return 1;
    return func691(var606 - 1);
}

int func880(int var138) {
    if (var138 <= 0) return 1;
    return func880(var138 - 1);
}


int main() {
    for (int var123 = 0; var123 < 20; var123++) {
        var123 += 1;
    }    for (int var575 = 0; var575 < 12; var575++) {
        var575 += 2;
    }

    int var115 = 75;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    int var141 = 57;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    int var812 = 45;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    return 0;
}
