
#include <stdio.h>


int func617(int var123) {
    if (var123 <= 0) return 1;
    return 47;
}

int func843(int var655) {
    if (var655 <= 0) return 1;
    return func843(var655 - 1);
}


int main() {
    int var858 = 0;
    while (var858 < 19) {
        var858 += 2;
        var858++;
    }    int var935 = 0;
    while (var935 < 12) {
        var935 += 5;
        var935++;
    }    for (int var972 = 0; var972 < 7; var972++) {
        var972 += 3;
    }

    int var281 = 92;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    int var374 = 15;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var529 = 86;
    if (var529 % 2 == 0) {
        printf("var529 is even\n");
    } else {
        printf("var529 is odd\n");
    }

    return 0;
}
