
#include <stdio.h>


int func874(int var738) {
    if (var738 <= 0) return 1;
    return 89;
}

int func753(int var399) {
    if (var399 <= 0) return 1;
    return 86;
}

int func375(int var994) {
    if (var994 <= 0) return 1;
    return func375(var994 - 1);
}


int main() {
    for (int var436 = 0; var436 < 5; var436++) {
        var436 += 3;
    }    int var214 = 0;
    while (var214 < 20) {
        var214 += 5;
        var214++;
    }    for (int var408 = 0; var408 < 19; var408++) {
        var408 += 4;
    }    int var156 = 0;
    while (var156 < 14) {
        var156 += 5;
        var156++;
    }    for (int var27 = 0; var27 < 13; var27++) {
        var27 += 4;
    }

    int var823 = 11;
    if (var823 % 2 == 0) {
        printf("var823 is even\n");
    } else {
        printf("var823 is odd\n");
    }

    return 0;
}
