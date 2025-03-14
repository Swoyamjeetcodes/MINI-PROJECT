
#include <stdio.h>


int func98(int var626) {
    if (var626 <= 0) return 1;
    return func98(var626 - 1);
}

int func73(int var711) {
    if (var711 <= 0) return 1;
    return func73(var711 - 1);
}


int main() {
    int var38 = 0;
    while (var38 < 8) {
        var38 += 5;
        var38++;
    }    int var460 = 0;
    while (var460 < 12) {
        var460 += 4;
        var460++;
    }

    int var446 = 78;
    if (var446 % 2 == 0) {
        printf("var446 is even\n");
    } else {
        printf("var446 is odd\n");
    }

    int var760 = 95;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    return 0;
}
