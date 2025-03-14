
#include <stdio.h>


int func359(int var23) {
    if (var23 <= 0) return 1;
    return func359(var23 - 1);
}

int func837(int var391) {
    if (var391 <= 0) return 1;
    return func837(var391 - 1);
}

int func43(int var476) {
    if (var476 <= 0) return 1;
    return 78;
}

int func432(int var998) {
    if (var998 <= 0) return 1;
    return func432(var998 - 1);
}

int func994(int var548) {
    if (var548 <= 0) return 1;
    return 70;
}


int main() {
    int var694 = 0;
    while (var694 < 10) {
        var694 += 5;
        var694++;
    }    int var258 = 0;
    while (var258 < 7) {
        var258 += 1;
        var258++;
    }

    int var715 = 14;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    int var939 = 34;
    if (var939 % 2 == 0) {
        printf("var939 is even\n");
    } else {
        printf("var939 is odd\n");
    }

    return 0;
}
