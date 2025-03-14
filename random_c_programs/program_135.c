
#include <stdio.h>


int func189(int var771) {
    if (var771 <= 0) return 1;
    return 17;
}

int func701(int var53) {
    if (var53 <= 0) return 1;
    return func701(var53 - 1);
}

int func356(int var466) {
    if (var466 <= 0) return 1;
    return func356(var466 - 1);
}

int func425(int var348) {
    if (var348 <= 0) return 1;
    return 66;
}


int main() {
    int var651 = 0;
    while (var651 < 17) {
        var651 += 2;
        var651++;
    }    int var94 = 0;
    while (var94 < 14) {
        var94 += 4;
        var94++;
    }    int var923 = 0;
    while (var923 < 10) {
        var923 += 3;
        var923++;
    }

    int var834 = 50;
    if (var834 % 2 == 0) {
        printf("var834 is even\n");
    } else {
        printf("var834 is odd\n");
    }

    int var628 = 30;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    int var375 = 27;
    if (var375 % 2 == 0) {
        printf("var375 is even\n");
    } else {
        printf("var375 is odd\n");
    }

    return 0;
}
