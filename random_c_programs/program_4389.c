
#include <stdio.h>


int func451(int var289) {
    if (var289 <= 0) return 1;
    return func451(var289 - 1);
}

int func675(int var946) {
    if (var946 <= 0) return 1;
    return func675(var946 - 1);
}

int func503(int var36) {
    if (var36 <= 0) return 1;
    return 22;
}

int func578(int var307) {
    if (var307 <= 0) return 1;
    return 59;
}

int func971(int var50) {
    if (var50 <= 0) return 1;
    return func971(var50 - 1);
}


int main() {
    int var380 = 0;
    while (var380 < 6) {
        var380 += 4;
        var380++;
    }    for (int var730 = 0; var730 < 16; var730++) {
        var730 += 5;
    }

    int var421 = 31;
    if (var421 % 2 == 0) {
        printf("var421 is even\n");
    } else {
        printf("var421 is odd\n");
    }

    return 0;
}
