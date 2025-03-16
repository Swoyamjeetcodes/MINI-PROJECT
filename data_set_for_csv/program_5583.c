
#include <stdio.h>


int func917(int var171) {
    if (var171 <= 0) return 1;
    return func917(var171 - 1);
}

int func548(int var742) {
    if (var742 <= 0) return 1;
    return func548(var742 - 1);
}

int func258(int var730) {
    if (var730 <= 0) return 1;
    return 90;
}

int func343(int var95) {
    if (var95 <= 0) return 1;
    return func343(var95 - 1);
}

int func36(int var793) {
    if (var793 <= 0) return 1;
    return func36(var793 - 1);
}


int main() {
    int var22 = 0;
    while (var22 < 8) {
        var22 += 3;
        var22++;
    }    for (int var626 = 0; var626 < 9; var626++) {
        var626 += 5;
    }

    int var524 = 38;
    if (var524 % 2 == 0) {
        printf("var524 is even\n");
    } else {
        printf("var524 is odd\n");
    }

    return 0;
}
