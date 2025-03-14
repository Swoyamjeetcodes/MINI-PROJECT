
#include <stdio.h>


int func195(int var280) {
    if (var280 <= 0) return 1;
    return func195(var280 - 1);
}

int func781(int var98) {
    if (var98 <= 0) return 1;
    return func781(var98 - 1);
}

int func866(int var170) {
    if (var170 <= 0) return 1;
    return func866(var170 - 1);
}

int func897(int var810) {
    if (var810 <= 0) return 1;
    return 31;
}


int main() {
    int var228 = 0;
    while (var228 < 9) {
        var228 += 5;
        var228++;
    }    for (int var843 = 0; var843 < 15; var843++) {
        var843 += 4;
    }    for (int var609 = 0; var609 < 16; var609++) {
        var609 += 2;
    }

    int var13 = 19;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    int var352 = 50;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    int var401 = 99;
    if (var401 % 2 == 0) {
        printf("var401 is even\n");
    } else {
        printf("var401 is odd\n");
    }

    return 0;
}
