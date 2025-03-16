
#include <stdio.h>


int func825(int var5) {
    if (var5 <= 0) return 1;
    return 53;
}

int func929(int var110) {
    if (var110 <= 0) return 1;
    return 58;
}

int func466(int var640) {
    if (var640 <= 0) return 1;
    return func466(var640 - 1);
}

int func440(int var665) {
    if (var665 <= 0) return 1;
    return func440(var665 - 1);
}

int func306(int var165) {
    if (var165 <= 0) return 1;
    return 70;
}


int main() {
    for (int var202 = 0; var202 < 16; var202++) {
        var202 += 5;
    }    int var831 = 0;
    while (var831 < 13) {
        var831 += 3;
        var831++;
    }    for (int var566 = 0; var566 < 9; var566++) {
        var566 += 4;
    }

    int var614 = 73;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    int var471 = 75;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    int var929 = 92;
    if (var929 % 2 == 0) {
        printf("var929 is even\n");
    } else {
        printf("var929 is odd\n");
    }

    return 0;
}
