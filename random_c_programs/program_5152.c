
#include <stdio.h>


int func884(int var311) {
    if (var311 <= 0) return 1;
    return func884(var311 - 1);
}


int main() {
    for (int var61 = 0; var61 < 8; var61++) {
        var61 += 2;
    }

    int var800 = 15;
    if (var800 % 2 == 0) {
        printf("var800 is even\n");
    } else {
        printf("var800 is odd\n");
    }

    int var173 = 43;
    if (var173 % 2 == 0) {
        printf("var173 is even\n");
    } else {
        printf("var173 is odd\n");
    }

    int var844 = 62;
    if (var844 % 2 == 0) {
        printf("var844 is even\n");
    } else {
        printf("var844 is odd\n");
    }

    return 0;
}
