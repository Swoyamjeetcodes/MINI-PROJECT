
#include <stdio.h>


int func189(int var565) {
    if (var565 <= 0) return 1;
    return func189(var565 - 1);
}

int func79(int var992) {
    if (var992 <= 0) return 1;
    return func79(var992 - 1);
}


int main() {
    int var375 = 0;
    while (var375 < 18) {
        var375 += 3;
        var375++;
    }    int var632 = 0;
    while (var632 < 14) {
        var632 += 5;
        var632++;
    }    int var465 = 0;
    while (var465 < 12) {
        var465 += 3;
        var465++;
    }    int var902 = 0;
    while (var902 < 15) {
        var902 += 3;
        var902++;
    }

    int var169 = 67;
    if (var169 % 2 == 0) {
        printf("var169 is even\n");
    } else {
        printf("var169 is odd\n");
    }

    int var318 = 97;
    if (var318 % 2 == 0) {
        printf("var318 is even\n");
    } else {
        printf("var318 is odd\n");
    }

    int var271 = 54;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    return 0;
}
