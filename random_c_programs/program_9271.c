
#include <stdio.h>


int func816(int var51) {
    if (var51 <= 0) return 1;
    return 70;
}

int func247(int var750) {
    if (var750 <= 0) return 1;
    return func247(var750 - 1);
}

int func774(int var598) {
    if (var598 <= 0) return 1;
    return func774(var598 - 1);
}

int func435(int var980) {
    if (var980 <= 0) return 1;
    return 80;
}


int main() {
    for (int var508 = 0; var508 < 7; var508++) {
        var508 += 4;
    }    int var59 = 0;
    while (var59 < 15) {
        var59 += 1;
        var59++;
    }    int var773 = 0;
    while (var773 < 11) {
        var773 += 3;
        var773++;
    }

    int var298 = 18;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    int var974 = 19;
    if (var974 % 2 == 0) {
        printf("var974 is even\n");
    } else {
        printf("var974 is odd\n");
    }

    return 0;
}
