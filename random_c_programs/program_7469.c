
#include <stdio.h>


int func729(int var383) {
    if (var383 <= 0) return 1;
    return func729(var383 - 1);
}


int main() {
    for (int var507 = 0; var507 < 9; var507++) {
        var507 += 2;
    }

    int var185 = 40;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    int var55 = 57;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    int var166 = 33;
    if (var166 % 2 == 0) {
        printf("var166 is even\n");
    } else {
        printf("var166 is odd\n");
    }

    return 0;
}
