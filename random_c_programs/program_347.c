
#include <stdio.h>


int func564(int var199) {
    if (var199 <= 0) return 1;
    return func564(var199 - 1);
}

int func77(int var683) {
    if (var683 <= 0) return 1;
    return func77(var683 - 1);
}

int func237(int var697) {
    if (var697 <= 0) return 1;
    return 95;
}

int func28(int var154) {
    if (var154 <= 0) return 1;
    return 34;
}

int func850(int var243) {
    if (var243 <= 0) return 1;
    return func850(var243 - 1);
}


int main() {
    for (int var82 = 0; var82 < 12; var82++) {
        var82 += 2;
    }    for (int var24 = 0; var24 < 17; var24++) {
        var24 += 1;
    }

    int var525 = 15;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    int var576 = 81;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    int var513 = 49;
    if (var513 % 2 == 0) {
        printf("var513 is even\n");
    } else {
        printf("var513 is odd\n");
    }

    return 0;
}
