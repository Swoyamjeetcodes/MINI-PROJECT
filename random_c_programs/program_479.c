
#include <stdio.h>


int func509(int var775) {
    if (var775 <= 0) return 1;
    return func509(var775 - 1);
}


int main() {
    for (int var640 = 0; var640 < 16; var640++) {
        var640 += 3;
    }    int var418 = 0;
    while (var418 < 17) {
        var418 += 4;
        var418++;
    }

    int var230 = 51;
    if (var230 % 2 == 0) {
        printf("var230 is even\n");
    } else {
        printf("var230 is odd\n");
    }

    int var661 = 81;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    return 0;
}
