
#include <stdio.h>


int func777(int var635) {
    if (var635 <= 0) return 1;
    return func777(var635 - 1);
}

int func23(int var389) {
    if (var389 <= 0) return 1;
    return 31;
}

int func91(int var119) {
    if (var119 <= 0) return 1;
    return func91(var119 - 1);
}

int func799(int var585) {
    if (var585 <= 0) return 1;
    return 14;
}

int func50(int var649) {
    if (var649 <= 0) return 1;
    return 27;
}


int main() {
    for (int var21 = 0; var21 < 14; var21++) {
        var21 += 3;
    }

    int var652 = 96;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    int var428 = 82;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    int var470 = 73;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    return 0;
}
