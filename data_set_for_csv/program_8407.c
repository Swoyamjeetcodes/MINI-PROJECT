
#include <stdio.h>


int func243(int var129) {
    if (var129 <= 0) return 1;
    return func243(var129 - 1);
}

int func121(int var259) {
    if (var259 <= 0) return 1;
    return 78;
}

int func372(int var2) {
    if (var2 <= 0) return 1;
    return 64;
}

int func938(int var883) {
    if (var883 <= 0) return 1;
    return 99;
}

int func840(int var980) {
    if (var980 <= 0) return 1;
    return func840(var980 - 1);
}


int main() {
    int var942 = 0;
    while (var942 < 19) {
        var942 += 4;
        var942++;
    }

    int var588 = 72;
    if (var588 % 2 == 0) {
        printf("var588 is even\n");
    } else {
        printf("var588 is odd\n");
    }

    int var504 = 88;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    return 0;
}
