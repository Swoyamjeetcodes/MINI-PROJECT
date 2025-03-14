
#include <stdio.h>


int func480(int var512) {
    if (var512 <= 0) return 1;
    return func480(var512 - 1);
}

int func767(int var675) {
    if (var675 <= 0) return 1;
    return 83;
}

int func745(int var223) {
    if (var223 <= 0) return 1;
    return 53;
}

int func53(int var834) {
    if (var834 <= 0) return 1;
    return func53(var834 - 1);
}

int func552(int var652) {
    if (var652 <= 0) return 1;
    return 13;
}


int main() {
    for (int var773 = 0; var773 < 16; var773++) {
        var773 += 4;
    }    int var204 = 0;
    while (var204 < 20) {
        var204 += 4;
        var204++;
    }    for (int var905 = 0; var905 < 18; var905++) {
        var905 += 2;
    }

    int var636 = 41;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    int var774 = 84;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    int var387 = 41;
    if (var387 % 2 == 0) {
        printf("var387 is even\n");
    } else {
        printf("var387 is odd\n");
    }

    return 0;
}
