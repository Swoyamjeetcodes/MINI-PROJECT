
#include <stdio.h>


int func541(int var889) {
    if (var889 <= 0) return 1;
    return 45;
}

int func865(int var223) {
    if (var223 <= 0) return 1;
    return func865(var223 - 1);
}


int main() {
    for (int var811 = 0; var811 < 14; var811++) {
        var811 += 4;
    }    for (int var812 = 0; var812 < 9; var812++) {
        var812 += 1;
    }

    int var443 = 69;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    int var266 = 6;
    if (var266 % 2 == 0) {
        printf("var266 is even\n");
    } else {
        printf("var266 is odd\n");
    }

    int var755 = 70;
    if (var755 % 2 == 0) {
        printf("var755 is even\n");
    } else {
        printf("var755 is odd\n");
    }

    return 0;
}
