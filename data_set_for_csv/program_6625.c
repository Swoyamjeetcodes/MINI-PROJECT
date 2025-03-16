
#include <stdio.h>


int func455(int var670) {
    if (var670 <= 0) return 1;
    return func455(var670 - 1);
}

int func119(int var933) {
    if (var933 <= 0) return 1;
    return func119(var933 - 1);
}

int func899(int var174) {
    if (var174 <= 0) return 1;
    return func899(var174 - 1);
}


int main() {
    for (int var11 = 0; var11 < 13; var11++) {
        var11 += 1;
    }    for (int var942 = 0; var942 < 6; var942++) {
        var942 += 1;
    }    for (int var424 = 0; var424 < 6; var424++) {
        var424 += 3;
    }    for (int var93 = 0; var93 < 19; var93++) {
        var93 += 2;
    }    int var40 = 0;
    while (var40 < 12) {
        var40 += 4;
        var40++;
    }

    int var184 = 53;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
