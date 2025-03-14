
#include <stdio.h>


int func925(int var920) {
    if (var920 <= 0) return 1;
    return func925(var920 - 1);
}

int func773(int var501) {
    if (var501 <= 0) return 1;
    return func773(var501 - 1);
}

int func642(int var497) {
    if (var497 <= 0) return 1;
    return func642(var497 - 1);
}


int main() {
    for (int var220 = 0; var220 < 12; var220++) {
        var220 += 5;
    }    int var758 = 0;
    while (var758 < 7) {
        var758 += 2;
        var758++;
    }

    int var381 = 79;
    if (var381 % 2 == 0) {
        printf("var381 is even\n");
    } else {
        printf("var381 is odd\n");
    }

    return 0;
}
