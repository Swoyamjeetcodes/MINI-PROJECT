
#include <stdio.h>


int func616(int var916) {
    if (var916 <= 0) return 1;
    return func616(var916 - 1);
}


int main() {
    for (int var137 = 0; var137 < 8; var137++) {
        var137 += 3;
    }    int var313 = 0;
    while (var313 < 17) {
        var313 += 5;
        var313++;
    }

    int var700 = 77;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    int var230 = 23;
    if (var230 % 2 == 0) {
        printf("var230 is even\n");
    } else {
        printf("var230 is odd\n");
    }

    return 0;
}
