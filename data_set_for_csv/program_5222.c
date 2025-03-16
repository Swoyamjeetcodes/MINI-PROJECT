
#include <stdio.h>


int func403(int var884) {
    if (var884 <= 0) return 1;
    return func403(var884 - 1);
}

int func994(int var72) {
    if (var72 <= 0) return 1;
    return 3;
}

int func931(int var598) {
    if (var598 <= 0) return 1;
    return 10;
}

int func36(int var576) {
    if (var576 <= 0) return 1;
    return 93;
}


int main() {
    int var588 = 0;
    while (var588 < 5) {
        var588 += 2;
        var588++;
    }

    int var244 = 2;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    return 0;
}
