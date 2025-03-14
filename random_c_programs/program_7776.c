
#include <stdio.h>


int func234(int var519) {
    if (var519 <= 0) return 1;
    return func234(var519 - 1);
}

int func196(int var481) {
    if (var481 <= 0) return 1;
    return func196(var481 - 1);
}

int func644(int var311) {
    if (var311 <= 0) return 1;
    return 49;
}


int main() {
    for (int var449 = 0; var449 < 6; var449++) {
        var449 += 3;
    }    int var195 = 0;
    while (var195 < 7) {
        var195 += 5;
        var195++;
    }    for (int var501 = 0; var501 < 6; var501++) {
        var501 += 2;
    }    for (int var194 = 0; var194 < 8; var194++) {
        var194 += 5;
    }    for (int var422 = 0; var422 < 12; var422++) {
        var422 += 1;
    }

    int var408 = 46;
    if (var408 % 2 == 0) {
        printf("var408 is even\n");
    } else {
        printf("var408 is odd\n");
    }

    int var215 = 69;
    if (var215 % 2 == 0) {
        printf("var215 is even\n");
    } else {
        printf("var215 is odd\n");
    }

    return 0;
}
