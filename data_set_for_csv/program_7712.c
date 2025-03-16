
#include <stdio.h>


int func529(int var93) {
    if (var93 <= 0) return 1;
    return func529(var93 - 1);
}

int func197(int var373) {
    if (var373 <= 0) return 1;
    return func197(var373 - 1);
}

int func974(int var92) {
    if (var92 <= 0) return 1;
    return func974(var92 - 1);
}


int main() {
    for (int var47 = 0; var47 < 15; var47++) {
        var47 += 4;
    }    for (int var786 = 0; var786 < 15; var786++) {
        var786 += 1;
    }    for (int var67 = 0; var67 < 13; var67++) {
        var67 += 5;
    }

    int var83 = 14;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    int var363 = 83;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    int var856 = 8;
    if (var856 % 2 == 0) {
        printf("var856 is even\n");
    } else {
        printf("var856 is odd\n");
    }

    int var817 = 34;
    if (var817 % 2 == 0) {
        printf("var817 is even\n");
    } else {
        printf("var817 is odd\n");
    }

    return 0;
}
