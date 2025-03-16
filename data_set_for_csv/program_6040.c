
#include <stdio.h>


int func361(int var882) {
    if (var882 <= 0) return 1;
    return 81;
}

int func525(int var804) {
    if (var804 <= 0) return 1;
    return func525(var804 - 1);
}

int func34(int var937) {
    if (var937 <= 0) return 1;
    return 15;
}

int func298(int var945) {
    if (var945 <= 0) return 1;
    return 90;
}

int func998(int var224) {
    if (var224 <= 0) return 1;
    return 14;
}


int main() {
    for (int var664 = 0; var664 < 6; var664++) {
        var664 += 1;
    }

    int var595 = 81;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    int var502 = 65;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    return 0;
}
