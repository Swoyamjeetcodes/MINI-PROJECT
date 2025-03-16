
#include <stdio.h>


int func891(int var522) {
    if (var522 <= 0) return 1;
    return func891(var522 - 1);
}

int func900(int var810) {
    if (var810 <= 0) return 1;
    return 66;
}


int main() {
    for (int var99 = 0; var99 < 14; var99++) {
        var99 += 3;
    }    int var157 = 0;
    while (var157 < 6) {
        var157 += 2;
        var157++;
    }

    int var136 = 41;
    if (var136 % 2 == 0) {
        printf("var136 is even\n");
    } else {
        printf("var136 is odd\n");
    }

    int var457 = 77;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    int var577 = 37;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    return 0;
}
