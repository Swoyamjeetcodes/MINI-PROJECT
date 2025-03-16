
#include <stdio.h>


int func892(int var470) {
    if (var470 <= 0) return 1;
    return 32;
}

int func548(int var239) {
    if (var239 <= 0) return 1;
    return 96;
}

int func616(int var744) {
    if (var744 <= 0) return 1;
    return 81;
}

int func587(int var638) {
    if (var638 <= 0) return 1;
    return func587(var638 - 1);
}

int func482(int var78) {
    if (var78 <= 0) return 1;
    return 3;
}


int main() {
    for (int var387 = 0; var387 < 11; var387++) {
        var387 += 4;
    }

    int var956 = 73;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    int var255 = 6;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    int var730 = 93;
    if (var730 % 2 == 0) {
        printf("var730 is even\n");
    } else {
        printf("var730 is odd\n");
    }

    return 0;
}
