
#include <stdio.h>


int func420(int var310) {
    if (var310 <= 0) return 1;
    return 97;
}

int func662(int var633) {
    if (var633 <= 0) return 1;
    return func662(var633 - 1);
}

int func843(int var582) {
    if (var582 <= 0) return 1;
    return func843(var582 - 1);
}


int main() {
    int var163 = 0;
    while (var163 < 18) {
        var163 += 2;
        var163++;
    }    int var378 = 0;
    while (var378 < 10) {
        var378 += 3;
        var378++;
    }    for (int var443 = 0; var443 < 14; var443++) {
        var443 += 4;
    }    for (int var377 = 0; var377 < 12; var377++) {
        var377 += 3;
    }

    int var318 = 26;
    if (var318 % 2 == 0) {
        printf("var318 is even\n");
    } else {
        printf("var318 is odd\n");
    }

    return 0;
}
