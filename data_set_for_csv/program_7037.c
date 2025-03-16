
#include <stdio.h>


int func282(int var24) {
    if (var24 <= 0) return 1;
    return 45;
}

int func357(int var369) {
    if (var369 <= 0) return 1;
    return 49;
}

int func512(int var144) {
    if (var144 <= 0) return 1;
    return func512(var144 - 1);
}

int func991(int var381) {
    if (var381 <= 0) return 1;
    return func991(var381 - 1);
}

int func832(int var145) {
    if (var145 <= 0) return 1;
    return func832(var145 - 1);
}


int main() {
    int var312 = 0;
    while (var312 < 17) {
        var312 += 5;
        var312++;
    }    int var198 = 0;
    while (var198 < 9) {
        var198 += 3;
        var198++;
    }    for (int var871 = 0; var871 < 18; var871++) {
        var871 += 3;
    }

    int var918 = 68;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    int var56 = 70;
    if (var56 % 2 == 0) {
        printf("var56 is even\n");
    } else {
        printf("var56 is odd\n");
    }

    int var761 = 90;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    return 0;
}
