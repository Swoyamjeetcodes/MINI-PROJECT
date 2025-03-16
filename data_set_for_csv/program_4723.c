
#include <stdio.h>


int func129(int var600) {
    if (var600 <= 0) return 1;
    return 91;
}

int func374(int var141) {
    if (var141 <= 0) return 1;
    return func374(var141 - 1);
}

int func341(int var206) {
    if (var206 <= 0) return 1;
    return 97;
}


int main() {
    int var144 = 0;
    while (var144 < 7) {
        var144 += 2;
        var144++;
    }    for (int var695 = 0; var695 < 17; var695++) {
        var695 += 5;
    }    for (int var433 = 0; var433 < 17; var433++) {
        var433 += 3;
    }

    int var812 = 43;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    int var428 = 41;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    int var122 = 30;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    return 0;
}
