
#include <stdio.h>


int func424(int var919) {
    if (var919 <= 0) return 1;
    return func424(var919 - 1);
}

int func869(int var93) {
    if (var93 <= 0) return 1;
    return func869(var93 - 1);
}

int func849(int var548) {
    if (var548 <= 0) return 1;
    return func849(var548 - 1);
}


int main() {
    int var435 = 0;
    while (var435 < 14) {
        var435 += 3;
        var435++;
    }    int var517 = 0;
    while (var517 < 15) {
        var517 += 1;
        var517++;
    }    for (int var570 = 0; var570 < 11; var570++) {
        var570 += 1;
    }

    int var398 = 16;
    if (var398 % 2 == 0) {
        printf("var398 is even\n");
    } else {
        printf("var398 is odd\n");
    }

    int var681 = 37;
    if (var681 % 2 == 0) {
        printf("var681 is even\n");
    } else {
        printf("var681 is odd\n");
    }

    int var777 = 31;
    if (var777 % 2 == 0) {
        printf("var777 is even\n");
    } else {
        printf("var777 is odd\n");
    }

    return 0;
}
