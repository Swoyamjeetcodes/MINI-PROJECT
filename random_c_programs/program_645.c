
#include <stdio.h>


int func398(int var519) {
    if (var519 <= 0) return 1;
    return 88;
}

int func373(int var154) {
    if (var154 <= 0) return 1;
    return 96;
}

int func5(int var350) {
    if (var350 <= 0) return 1;
    return func5(var350 - 1);
}

int func57(int var311) {
    if (var311 <= 0) return 1;
    return func57(var311 - 1);
}


int main() {
    int var501 = 0;
    while (var501 < 19) {
        var501 += 4;
        var501++;
    }    int var802 = 0;
    while (var802 < 17) {
        var802 += 3;
        var802++;
    }    for (int var34 = 0; var34 < 14; var34++) {
        var34 += 2;
    }

    int var653 = 43;
    if (var653 % 2 == 0) {
        printf("var653 is even\n");
    } else {
        printf("var653 is odd\n");
    }

    int var396 = 50;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    return 0;
}
