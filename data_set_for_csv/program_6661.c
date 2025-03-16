
#include <stdio.h>


int func891(int var875) {
    if (var875 <= 0) return 1;
    return 25;
}

int func873(int var704) {
    if (var704 <= 0) return 1;
    return func873(var704 - 1);
}

int func739(int var575) {
    if (var575 <= 0) return 1;
    return func739(var575 - 1);
}


int main() {
    int var754 = 0;
    while (var754 < 9) {
        var754 += 3;
        var754++;
    }    for (int var302 = 0; var302 < 7; var302++) {
        var302 += 3;
    }

    int var388 = 69;
    if (var388 % 2 == 0) {
        printf("var388 is even\n");
    } else {
        printf("var388 is odd\n");
    }

    int var593 = 80;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    return 0;
}
