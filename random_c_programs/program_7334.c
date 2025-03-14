
#include <stdio.h>


int func529(int var402) {
    if (var402 <= 0) return 1;
    return func529(var402 - 1);
}

int func441(int var831) {
    if (var831 <= 0) return 1;
    return 25;
}

int func116(int var979) {
    if (var979 <= 0) return 1;
    return func116(var979 - 1);
}


int main() {
    for (int var899 = 0; var899 < 16; var899++) {
        var899 += 1;
    }    for (int var109 = 0; var109 < 11; var109++) {
        var109 += 3;
    }

    int var528 = 32;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    return 0;
}
