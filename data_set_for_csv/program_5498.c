
#include <stdio.h>


int func297(int var548) {
    if (var548 <= 0) return 1;
    return 75;
}

int func701(int var944) {
    if (var944 <= 0) return 1;
    return func701(var944 - 1);
}

int func180(int var991) {
    if (var991 <= 0) return 1;
    return 96;
}


int main() {
    int var143 = 0;
    while (var143 < 5) {
        var143 += 2;
        var143++;
    }    int var987 = 0;
    while (var987 < 13) {
        var987 += 3;
        var987++;
    }    int var1 = 0;
    while (var1 < 5) {
        var1 += 3;
        var1++;
    }

    int var165 = 19;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    int var193 = 57;
    if (var193 % 2 == 0) {
        printf("var193 is even\n");
    } else {
        printf("var193 is odd\n");
    }

    int var486 = 11;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    return 0;
}
