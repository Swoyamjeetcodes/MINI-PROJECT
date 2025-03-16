
#include <stdio.h>


int func14(int var10) {
    if (var10 <= 0) return 1;
    return 76;
}

int func633(int var638) {
    if (var638 <= 0) return 1;
    return func633(var638 - 1);
}

int func542(int var713) {
    if (var713 <= 0) return 1;
    return func542(var713 - 1);
}


int main() {
    for (int var28 = 0; var28 < 15; var28++) {
        var28 += 2;
    }

    int var211 = 16;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    return 0;
}
