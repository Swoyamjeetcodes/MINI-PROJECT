
#include <stdio.h>


int func919(int var612) {
    if (var612 <= 0) return 1;
    return func919(var612 - 1);
}

int func474(int var426) {
    if (var426 <= 0) return 1;
    return 46;
}

int func898(int var332) {
    if (var332 <= 0) return 1;
    return func898(var332 - 1);
}


int main() {
    for (int var151 = 0; var151 < 16; var151++) {
        var151 += 2;
    }    int var692 = 0;
    while (var692 < 15) {
        var692 += 2;
        var692++;
    }

    int var508 = 63;
    if (var508 % 2 == 0) {
        printf("var508 is even\n");
    } else {
        printf("var508 is odd\n");
    }

    int var516 = 94;
    if (var516 % 2 == 0) {
        printf("var516 is even\n");
    } else {
        printf("var516 is odd\n");
    }

    int var917 = 65;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
