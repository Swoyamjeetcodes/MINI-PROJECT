
#include <stdio.h>


int func195(int var470) {
    if (var470 <= 0) return 1;
    return func195(var470 - 1);
}

int func303(int var766) {
    if (var766 <= 0) return 1;
    return func303(var766 - 1);
}

int func178(int var96) {
    if (var96 <= 0) return 1;
    return func178(var96 - 1);
}

int func468(int var804) {
    if (var804 <= 0) return 1;
    return func468(var804 - 1);
}

int func27(int var322) {
    if (var322 <= 0) return 1;
    return func27(var322 - 1);
}


int main() {
    int var100 = 0;
    while (var100 < 13) {
        var100 += 3;
        var100++;
    }

    int var685 = 70;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    int var319 = 54;
    if (var319 % 2 == 0) {
        printf("var319 is even\n");
    } else {
        printf("var319 is odd\n");
    }

    return 0;
}
