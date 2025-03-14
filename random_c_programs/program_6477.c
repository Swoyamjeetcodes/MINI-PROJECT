
#include <stdio.h>


int func53(int var177) {
    if (var177 <= 0) return 1;
    return 32;
}

int func136(int var780) {
    if (var780 <= 0) return 1;
    return func136(var780 - 1);
}

int func371(int var59) {
    if (var59 <= 0) return 1;
    return 20;
}


int main() {
    for (int var264 = 0; var264 < 12; var264++) {
        var264 += 3;
    }

    int var25 = 82;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var697 = 95;
    if (var697 % 2 == 0) {
        printf("var697 is even\n");
    } else {
        printf("var697 is odd\n");
    }

    int var544 = 47;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
