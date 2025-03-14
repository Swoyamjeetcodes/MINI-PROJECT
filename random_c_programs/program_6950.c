
#include <stdio.h>


int func997(int var522) {
    if (var522 <= 0) return 1;
    return 20;
}

int func173(int var429) {
    if (var429 <= 0) return 1;
    return func173(var429 - 1);
}

int func556(int var388) {
    if (var388 <= 0) return 1;
    return 50;
}

int func337(int var471) {
    if (var471 <= 0) return 1;
    return 36;
}

int func756(int var107) {
    if (var107 <= 0) return 1;
    return 59;
}


int main() {
    for (int var642 = 0; var642 < 6; var642++) {
        var642 += 2;
    }    int var999 = 0;
    while (var999 < 12) {
        var999 += 2;
        var999++;
    }

    int var746 = 56;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    int var47 = 3;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    int var545 = 63;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
