
#include <stdio.h>


int func643(int var55) {
    if (var55 <= 0) return 1;
    return 19;
}

int func109(int var233) {
    if (var233 <= 0) return 1;
    return func109(var233 - 1);
}

int func449(int var217) {
    if (var217 <= 0) return 1;
    return 54;
}

int func609(int var245) {
    if (var245 <= 0) return 1;
    return func609(var245 - 1);
}

int func975(int var37) {
    if (var37 <= 0) return 1;
    return func975(var37 - 1);
}


int main() {
    int var402 = 0;
    while (var402 < 8) {
        var402 += 4;
        var402++;
    }

    int var462 = 2;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    int var941 = 64;
    if (var941 % 2 == 0) {
        printf("var941 is even\n");
    } else {
        printf("var941 is odd\n");
    }

    return 0;
}
