
#include <stdio.h>


int func540(int var634) {
    if (var634 <= 0) return 1;
    return func540(var634 - 1);
}

int func683(int var546) {
    if (var546 <= 0) return 1;
    return 40;
}

int func380(int var942) {
    if (var942 <= 0) return 1;
    return 67;
}

int func456(int var661) {
    if (var661 <= 0) return 1;
    return func456(var661 - 1);
}


int main() {
    for (int var473 = 0; var473 < 18; var473++) {
        var473 += 5;
    }    int var463 = 0;
    while (var463 < 20) {
        var463 += 3;
        var463++;
    }

    int var8 = 19;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    int var170 = 15;
    if (var170 % 2 == 0) {
        printf("var170 is even\n");
    } else {
        printf("var170 is odd\n");
    }

    int var222 = 81;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
