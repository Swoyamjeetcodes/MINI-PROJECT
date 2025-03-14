
#include <stdio.h>


int func480(int var834) {
    if (var834 <= 0) return 1;
    return 99;
}

int func703(int var786) {
    if (var786 <= 0) return 1;
    return func703(var786 - 1);
}

int func990(int var627) {
    if (var627 <= 0) return 1;
    return 74;
}

int func281(int var67) {
    if (var67 <= 0) return 1;
    return 44;
}

int func323(int var86) {
    if (var86 <= 0) return 1;
    return func323(var86 - 1);
}


int main() {
    int var305 = 0;
    while (var305 < 5) {
        var305 += 3;
        var305++;
    }    for (int var975 = 0; var975 < 18; var975++) {
        var975 += 1;
    }    for (int var618 = 0; var618 < 20; var618++) {
        var618 += 3;
    }

    int var323 = 75;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    int var847 = 38;
    if (var847 % 2 == 0) {
        printf("var847 is even\n");
    } else {
        printf("var847 is odd\n");
    }

    return 0;
}
