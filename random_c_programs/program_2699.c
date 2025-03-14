
#include <stdio.h>


int func502(int var685) {
    if (var685 <= 0) return 1;
    return func502(var685 - 1);
}

int func306(int var513) {
    if (var513 <= 0) return 1;
    return 32;
}

int func322(int var948) {
    if (var948 <= 0) return 1;
    return func322(var948 - 1);
}

int func595(int var694) {
    if (var694 <= 0) return 1;
    return 82;
}

int func458(int var987) {
    if (var987 <= 0) return 1;
    return func458(var987 - 1);
}

int func211(int var531) {
    if (var531 <= 0) return 1;
    return func211(var531 - 1);
}


int main() {
    int var208 = 0;
    while (var208 < 16) {
        var208 += 2;
        var208++;
    }    int var266 = 0;
    while (var266 < 16) {
        var266 += 5;
        var266++;
    }    int var446 = 0;
    while (var446 < 18) {
        var446 += 2;
        var446++;
    }    int var810 = 0;
    while (var810 < 11) {
        var810 += 5;
        var810++;
    }    int var122 = 0;
    while (var122 < 10) {
        var122 += 2;
        var122++;
    }    for (int var222 = 0; var222 < 20; var222++) {
        var222 += 4;
    }    for (int var382 = 0; var382 < 12; var382++) {
        var382 += 5;
    }

    int var877 = 30;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    int var198 = 68;
    if (var198 % 2 == 0) {
        printf("var198 is even\n");
    } else {
        printf("var198 is odd\n");
    }

    return 0;
}
