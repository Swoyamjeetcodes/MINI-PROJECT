
#include <stdio.h>


int func258(int var519) {
    if (var519 <= 0) return 1;
    return 97;
}

int func808(int var321) {
    if (var321 <= 0) return 1;
    return 45;
}

int func652(int var684) {
    if (var684 <= 0) return 1;
    return 33;
}

int func598(int var502) {
    if (var502 <= 0) return 1;
    return func598(var502 - 1);
}


int main() {
    int var476 = 0;
    while (var476 < 12) {
        var476 += 1;
        var476++;
    }    int var306 = 0;
    while (var306 < 19) {
        var306 += 4;
        var306++;
    }    int var188 = 0;
    while (var188 < 18) {
        var188 += 2;
        var188++;
    }

    int var241 = 57;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    return 0;
}
