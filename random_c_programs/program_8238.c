
#include <stdio.h>


int func224(int var423) {
    if (var423 <= 0) return 1;
    return 74;
}

int func304(int var346) {
    if (var346 <= 0) return 1;
    return func304(var346 - 1);
}

int func30(int var982) {
    if (var982 <= 0) return 1;
    return 78;
}

int func764(int var131) {
    if (var131 <= 0) return 1;
    return 32;
}


int main() {
    for (int var191 = 0; var191 < 13; var191++) {
        var191 += 5;
    }

    int var843 = 81;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    int var202 = 27;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    int var205 = 69;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    return 0;
}
