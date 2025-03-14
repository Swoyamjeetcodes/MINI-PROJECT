
#include <stdio.h>


int func683(int var502) {
    if (var502 <= 0) return 1;
    return func683(var502 - 1);
}

int func667(int var468) {
    if (var468 <= 0) return 1;
    return func667(var468 - 1);
}


int main() {
    for (int var396 = 0; var396 < 19; var396++) {
        var396 += 3;
    }    int var214 = 0;
    while (var214 < 13) {
        var214 += 5;
        var214++;
    }

    int var568 = 99;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    return 0;
}
