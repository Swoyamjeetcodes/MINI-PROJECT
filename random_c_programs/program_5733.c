
#include <stdio.h>


int func86(int var772) {
    if (var772 <= 0) return 1;
    return 71;
}

int func472(int var699) {
    if (var699 <= 0) return 1;
    return func472(var699 - 1);
}


int main() {
    int var625 = 0;
    while (var625 < 5) {
        var625 += 3;
        var625++;
    }    int var77 = 0;
    while (var77 < 14) {
        var77 += 5;
        var77++;
    }    int var202 = 0;
    while (var202 < 19) {
        var202 += 1;
        var202++;
    }

    int var559 = 65;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var599 = 79;
    if (var599 % 2 == 0) {
        printf("var599 is even\n");
    } else {
        printf("var599 is odd\n");
    }

    int var765 = 75;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    return 0;
}
