
#include <stdio.h>


int func704(int var572) {
    if (var572 <= 0) return 1;
    return func704(var572 - 1);
}

int func733(int var792) {
    if (var792 <= 0) return 1;
    return 76;
}


int main() {
    for (int var889 = 0; var889 < 16; var889++) {
        var889 += 5;
    }

    int var50 = 86;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    int var467 = 40;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var78 = 32;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    return 0;
}
