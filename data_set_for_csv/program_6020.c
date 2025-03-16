
#include <stdio.h>


int func845(int var733) {
    if (var733 <= 0) return 1;
    return func845(var733 - 1);
}

int func97(int var523) {
    if (var523 <= 0) return 1;
    return 35;
}

int func62(int var793) {
    if (var793 <= 0) return 1;
    return 93;
}

int func185(int var866) {
    if (var866 <= 0) return 1;
    return func185(var866 - 1);
}

int func470(int var830) {
    if (var830 <= 0) return 1;
    return func470(var830 - 1);
}


int main() {
    int var603 = 0;
    while (var603 < 11) {
        var603 += 1;
        var603++;
    }

    int var327 = 46;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    return 0;
}
