
#include <stdio.h>


int func269(int var269) {
    if (var269 <= 0) return 1;
    return func269(var269 - 1);
}

int func147(int var749) {
    if (var749 <= 0) return 1;
    return func147(var749 - 1);
}

int func111(int var271) {
    if (var271 <= 0) return 1;
    return 10;
}

int func32(int var53) {
    if (var53 <= 0) return 1;
    return 67;
}


int main() {
    int var365 = 0;
    while (var365 < 10) {
        var365 += 4;
        var365++;
    }    for (int var452 = 0; var452 < 7; var452++) {
        var452 += 3;
    }    int var399 = 0;
    while (var399 < 16) {
        var399 += 1;
        var399++;
    }

    int var4 = 9;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    int var152 = 71;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    int var528 = 33;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    return 0;
}
