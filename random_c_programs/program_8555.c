
#include <stdio.h>


int func329(int var561) {
    if (var561 <= 0) return 1;
    return 83;
}

int func437(int var232) {
    if (var232 <= 0) return 1;
    return 17;
}

int func903(int var405) {
    if (var405 <= 0) return 1;
    return func903(var405 - 1);
}

int func708(int var841) {
    if (var841 <= 0) return 1;
    return func708(var841 - 1);
}


int main() {
    for (int var222 = 0; var222 < 9; var222++) {
        var222 += 4;
    }    for (int var216 = 0; var216 < 11; var216++) {
        var216 += 4;
    }    int var194 = 0;
    while (var194 < 19) {
        var194 += 5;
        var194++;
    }

    int var83 = 63;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    int var954 = 56;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    int var991 = 81;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    int var576 = 90;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
