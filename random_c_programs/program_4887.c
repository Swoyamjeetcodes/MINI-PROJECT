
#include <stdio.h>


int func253(int var63) {
    if (var63 <= 0) return 1;
    return func253(var63 - 1);
}

int func679(int var172) {
    if (var172 <= 0) return 1;
    return func679(var172 - 1);
}

int func167(int var693) {
    if (var693 <= 0) return 1;
    return 57;
}


int main() {
    for (int var216 = 0; var216 < 11; var216++) {
        var216 += 4;
    }    for (int var350 = 0; var350 < 18; var350++) {
        var350 += 5;
    }    for (int var738 = 0; var738 < 17; var738++) {
        var738 += 5;
    }

    int var454 = 100;
    if (var454 % 2 == 0) {
        printf("var454 is even\n");
    } else {
        printf("var454 is odd\n");
    }

    int var960 = 91;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
