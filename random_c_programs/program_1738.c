
#include <stdio.h>


int func281(int var100) {
    if (var100 <= 0) return 1;
    return 30;
}

int func795(int var5) {
    if (var5 <= 0) return 1;
    return func795(var5 - 1);
}

int func477(int var667) {
    if (var667 <= 0) return 1;
    return func477(var667 - 1);
}

int func42(int var410) {
    if (var410 <= 0) return 1;
    return 70;
}

int func821(int var588) {
    if (var588 <= 0) return 1;
    return func821(var588 - 1);
}

int func946(int var759) {
    if (var759 <= 0) return 1;
    return func946(var759 - 1);
}

int func24(int var617) {
    if (var617 <= 0) return 1;
    return func24(var617 - 1);
}

int func630(int var51) {
    if (var51 <= 0) return 1;
    return func630(var51 - 1);
}

int func99(int var366) {
    if (var366 <= 0) return 1;
    return 33;
}

int func705(int var367) {
    if (var367 <= 0) return 1;
    return func705(var367 - 1);
}


int main() {
    int var662 = 0;
    while (var662 < 6) {
        var662 += 3;
        var662++;
    }

    int var756 = 79;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    int var674 = 21;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
