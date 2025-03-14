
#include <stdio.h>


int func897(int var720) {
    if (var720 <= 0) return 1;
    return func897(var720 - 1);
}

int func37(int var265) {
    if (var265 <= 0) return 1;
    return func37(var265 - 1);
}


int main() {
    int var301 = 0;
    while (var301 < 11) {
        var301 += 4;
        var301++;
    }    int var387 = 0;
    while (var387 < 19) {
        var387 += 2;
        var387++;
    }

    int var135 = 13;
    if (var135 % 2 == 0) {
        printf("var135 is even\n");
    } else {
        printf("var135 is odd\n");
    }

    int var919 = 48;
    if (var919 % 2 == 0) {
        printf("var919 is even\n");
    } else {
        printf("var919 is odd\n");
    }

    return 0;
}
