
#include <stdio.h>


int func371(int var78) {
    if (var78 <= 0) return 1;
    return func371(var78 - 1);
}

int func833(int var526) {
    if (var526 <= 0) return 1;
    return func833(var526 - 1);
}

int func490(int var58) {
    if (var58 <= 0) return 1;
    return func490(var58 - 1);
}

int func252(int var94) {
    if (var94 <= 0) return 1;
    return func252(var94 - 1);
}

int func622(int var460) {
    if (var460 <= 0) return 1;
    return 34;
}


int main() {
    for (int var666 = 0; var666 < 16; var666++) {
        var666 += 3;
    }

    int var719 = 38;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    return 0;
}
