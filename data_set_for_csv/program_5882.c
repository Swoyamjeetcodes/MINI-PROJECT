
#include <stdio.h>


int func245(int var762) {
    if (var762 <= 0) return 1;
    return func245(var762 - 1);
}

int func158(int var16) {
    if (var16 <= 0) return 1;
    return 22;
}

int func264(int var314) {
    if (var314 <= 0) return 1;
    return func264(var314 - 1);
}

int func943(int var133) {
    if (var133 <= 0) return 1;
    return func943(var133 - 1);
}


int main() {
    int var189 = 0;
    while (var189 < 18) {
        var189 += 5;
        var189++;
    }    int var761 = 0;
    while (var761 < 12) {
        var761 += 1;
        var761++;
    }

    int var830 = 87;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
