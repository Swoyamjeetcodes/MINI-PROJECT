
#include <stdio.h>


int func974(int var513) {
    if (var513 <= 0) return 1;
    return func974(var513 - 1);
}

int func342(int var696) {
    if (var696 <= 0) return 1;
    return func342(var696 - 1);
}


int main() {
    for (int var766 = 0; var766 < 16; var766++) {
        var766 += 3;
    }    int var582 = 0;
    while (var582 < 15) {
        var582 += 3;
        var582++;
    }    int var970 = 0;
    while (var970 < 16) {
        var970 += 1;
        var970++;
    }

    int var751 = 42;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    int var935 = 97;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    int var348 = 42;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    return 0;
}
