
#include <stdio.h>


int func139(int var651) {
    if (var651 <= 0) return 1;
    return func139(var651 - 1);
}

int func792(int var477) {
    if (var477 <= 0) return 1;
    return func792(var477 - 1);
}

int func841(int var803) {
    if (var803 <= 0) return 1;
    return 34;
}

int func84(int var314) {
    if (var314 <= 0) return 1;
    return 80;
}

int func888(int var681) {
    if (var681 <= 0) return 1;
    return func888(var681 - 1);
}


int main() {
    int var994 = 0;
    while (var994 < 13) {
        var994 += 3;
        var994++;
    }    int var551 = 0;
    while (var551 < 9) {
        var551 += 2;
        var551++;
    }    for (int var361 = 0; var361 < 19; var361++) {
        var361 += 5;
    }

    int var482 = 35;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    int var665 = 73;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    int var383 = 74;
    if (var383 % 2 == 0) {
        printf("var383 is even\n");
    } else {
        printf("var383 is odd\n");
    }

    return 0;
}
