
#include <stdio.h>


int func991(int var495) {
    if (var495 <= 0) return 1;
    return func991(var495 - 1);
}

int func891(int var613) {
    if (var613 <= 0) return 1;
    return func891(var613 - 1);
}

int func431(int var904) {
    if (var904 <= 0) return 1;
    return 91;
}


int main() {
    int var185 = 0;
    while (var185 < 14) {
        var185 += 2;
        var185++;
    }    for (int var283 = 0; var283 < 9; var283++) {
        var283 += 4;
    }

    int var656 = 51;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var810 = 42;
    if (var810 % 2 == 0) {
        printf("var810 is even\n");
    } else {
        printf("var810 is odd\n");
    }

    return 0;
}
