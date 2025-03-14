
#include <stdio.h>


int func58(int var509) {
    if (var509 <= 0) return 1;
    return func58(var509 - 1);
}

int func39(int var808) {
    if (var808 <= 0) return 1;
    return func39(var808 - 1);
}

int func764(int var649) {
    if (var649 <= 0) return 1;
    return 90;
}


int main() {
    for (int var247 = 0; var247 < 12; var247++) {
        var247 += 3;
    }    for (int var521 = 0; var521 < 18; var521++) {
        var521 += 2;
    }

    int var277 = 10;
    if (var277 % 2 == 0) {
        printf("var277 is even\n");
    } else {
        printf("var277 is odd\n");
    }

    int var476 = 19;
    if (var476 % 2 == 0) {
        printf("var476 is even\n");
    } else {
        printf("var476 is odd\n");
    }

    int var146 = 46;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    return 0;
}
