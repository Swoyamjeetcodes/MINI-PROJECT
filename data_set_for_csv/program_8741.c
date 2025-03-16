
#include <stdio.h>


int func267(int var850) {
    if (var850 <= 0) return 1;
    return 40;
}

int func964(int var255) {
    if (var255 <= 0) return 1;
    return 68;
}

int func601(int var315) {
    if (var315 <= 0) return 1;
    return 98;
}

int func431(int var768) {
    if (var768 <= 0) return 1;
    return 18;
}

int func891(int var233) {
    if (var233 <= 0) return 1;
    return func891(var233 - 1);
}

int func804(int var943) {
    if (var943 <= 0) return 1;
    return func804(var943 - 1);
}

int func795(int var77) {
    if (var77 <= 0) return 1;
    return 53;
}

int func449(int var189) {
    if (var189 <= 0) return 1;
    return 97;
}


int main() {
    int var921 = 0;
    while (var921 < 5) {
        var921 += 3;
        var921++;
    }    int var100 = 0;
    while (var100 < 18) {
        var100 += 2;
        var100++;
    }    for (int var254 = 0; var254 < 12; var254++) {
        var254 += 2;
    }    for (int var528 = 0; var528 < 7; var528++) {
        var528 += 5;
    }    for (int var674 = 0; var674 < 6; var674++) {
        var674 += 1;
    }

    int var355 = 25;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    return 0;
}
