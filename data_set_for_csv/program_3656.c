
#include <stdio.h>


int func891(int var852) {
    if (var852 <= 0) return 1;
    return 5;
}

int func380(int var882) {
    if (var882 <= 0) return 1;
    return func380(var882 - 1);
}


int main() {
    for (int var598 = 0; var598 < 13; var598++) {
        var598 += 5;
    }    for (int var26 = 0; var26 < 18; var26++) {
        var26 += 4;
    }

    int var512 = 83;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    int var61 = 86;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    int var131 = 26;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    int var469 = 98;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    int var494 = 32;
    if (var494 % 2 == 0) {
        printf("var494 is even\n");
    } else {
        printf("var494 is odd\n");
    }

    return 0;
}
