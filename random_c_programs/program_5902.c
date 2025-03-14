
#include <stdio.h>


int func47(int var882) {
    if (var882 <= 0) return 1;
    return 70;
}

int func870(int var902) {
    if (var902 <= 0) return 1;
    return func870(var902 - 1);
}

int func954(int var458) {
    if (var458 <= 0) return 1;
    return 8;
}

int func558(int var821) {
    if (var821 <= 0) return 1;
    return func558(var821 - 1);
}

int func333(int var104) {
    if (var104 <= 0) return 1;
    return func333(var104 - 1);
}

int func836(int var329) {
    if (var329 <= 0) return 1;
    return func836(var329 - 1);
}

int func23(int var44) {
    if (var44 <= 0) return 1;
    return func23(var44 - 1);
}


int main() {
    int var468 = 0;
    while (var468 < 5) {
        var468 += 2;
        var468++;
    }    int var17 = 0;
    while (var17 < 9) {
        var17 += 4;
        var17++;
    }    for (int var531 = 0; var531 < 6; var531++) {
        var531 += 5;
    }

    int var317 = 64;
    if (var317 % 2 == 0) {
        printf("var317 is even\n");
    } else {
        printf("var317 is odd\n");
    }

    int var537 = 19;
    if (var537 % 2 == 0) {
        printf("var537 is even\n");
    } else {
        printf("var537 is odd\n");
    }

    int var981 = 13;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    return 0;
}
