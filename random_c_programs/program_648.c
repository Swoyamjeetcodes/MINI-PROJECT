
#include <stdio.h>


int func927(int var624) {
    if (var624 <= 0) return 1;
    return func927(var624 - 1);
}

int func377(int var165) {
    if (var165 <= 0) return 1;
    return func377(var165 - 1);
}


int main() {
    for (int var458 = 0; var458 < 14; var458++) {
        var458 += 2;
    }    int var45 = 0;
    while (var45 < 11) {
        var45 += 5;
        var45++;
    }    for (int var855 = 0; var855 < 8; var855++) {
        var855 += 2;
    }    for (int var938 = 0; var938 < 13; var938++) {
        var938 += 4;
    }

    int var816 = 96;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    return 0;
}
