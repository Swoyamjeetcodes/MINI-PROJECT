
#include <stdio.h>


int func185(int var987) {
    if (var987 <= 0) return 1;
    return func185(var987 - 1);
}

int func132(int var831) {
    if (var831 <= 0) return 1;
    return 31;
}


int main() {
    int var525 = 0;
    while (var525 < 10) {
        var525 += 4;
        var525++;
    }    int var713 = 0;
    while (var713 < 5) {
        var713 += 4;
        var713++;
    }

    int var194 = 16;
    if (var194 % 2 == 0) {
        printf("var194 is even\n");
    } else {
        printf("var194 is odd\n");
    }

    int var925 = 47;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    int var576 = 37;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
