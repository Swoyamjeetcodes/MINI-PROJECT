
#include <stdio.h>


int func403(int var33) {
    if (var33 <= 0) return 1;
    return 63;
}

int func853(int var635) {
    if (var635 <= 0) return 1;
    return func853(var635 - 1);
}

int func381(int var515) {
    if (var515 <= 0) return 1;
    return 55;
}

int func630(int var364) {
    if (var364 <= 0) return 1;
    return 17;
}

int func868(int var331) {
    if (var331 <= 0) return 1;
    return 3;
}


int main() {
    for (int var442 = 0; var442 < 11; var442++) {
        var442 += 4;
    }    for (int var746 = 0; var746 < 7; var746++) {
        var746 += 4;
    }    int var278 = 0;
    while (var278 < 15) {
        var278 += 5;
        var278++;
    }

    int var221 = 38;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    int var398 = 41;
    if (var398 % 2 == 0) {
        printf("var398 is even\n");
    } else {
        printf("var398 is odd\n");
    }

    return 0;
}
