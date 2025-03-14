
#include <stdio.h>


int func717(int var733) {
    if (var733 <= 0) return 1;
    return 59;
}

int func554(int var388) {
    if (var388 <= 0) return 1;
    return func554(var388 - 1);
}

int func791(int var299) {
    if (var299 <= 0) return 1;
    return func791(var299 - 1);
}

int func558(int var695) {
    if (var695 <= 0) return 1;
    return 67;
}

int func345(int var105) {
    if (var105 <= 0) return 1;
    return 86;
}


int main() {
    for (int var156 = 0; var156 < 13; var156++) {
        var156 += 5;
    }    for (int var507 = 0; var507 < 12; var507++) {
        var507 += 2;
    }

    int var559 = 81;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var939 = 94;
    if (var939 % 2 == 0) {
        printf("var939 is even\n");
    } else {
        printf("var939 is odd\n");
    }

    return 0;
}
