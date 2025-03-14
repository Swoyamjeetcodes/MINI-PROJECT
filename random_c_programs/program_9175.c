
#include <stdio.h>


int func111(int var340) {
    if (var340 <= 0) return 1;
    return func111(var340 - 1);
}


int main() {
    for (int var304 = 0; var304 < 18; var304++) {
        var304 += 2;
    }    for (int var515 = 0; var515 < 13; var515++) {
        var515 += 3;
    }    int var401 = 0;
    while (var401 < 8) {
        var401 += 5;
        var401++;
    }    int var445 = 0;
    while (var445 < 8) {
        var445 += 3;
        var445++;
    }    for (int var765 = 0; var765 < 14; var765++) {
        var765 += 2;
    }

    int var466 = 6;
    if (var466 % 2 == 0) {
        printf("var466 is even\n");
    } else {
        printf("var466 is odd\n");
    }

    int var33 = 19;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var910 = 86;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var740 = 84;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    int var259 = 72;
    if (var259 % 2 == 0) {
        printf("var259 is even\n");
    } else {
        printf("var259 is odd\n");
    }

    return 0;
}
