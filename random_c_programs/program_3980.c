
#include <stdio.h>


int func147(int var117) {
    if (var117 <= 0) return 1;
    return func147(var117 - 1);
}


int main() {
    int var48 = 0;
    while (var48 < 6) {
        var48 += 2;
        var48++;
    }    for (int var47 = 0; var47 < 8; var47++) {
        var47 += 1;
    }    for (int var38 = 0; var38 < 11; var38++) {
        var38 += 1;
    }    int var456 = 0;
    while (var456 < 9) {
        var456 += 2;
        var456++;
    }    int var710 = 0;
    while (var710 < 14) {
        var710 += 2;
        var710++;
    }

    int var988 = 62;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    return 0;
}
