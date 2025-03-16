
#include <stdio.h>


int func840(int var63) {
    if (var63 <= 0) return 1;
    return 49;
}

int func991(int var149) {
    if (var149 <= 0) return 1;
    return func991(var149 - 1);
}

int func652(int var25) {
    if (var25 <= 0) return 1;
    return func652(var25 - 1);
}


int main() {
    int var467 = 0;
    while (var467 < 13) {
        var467 += 2;
        var467++;
    }    int var380 = 0;
    while (var380 < 14) {
        var380 += 1;
        var380++;
    }

    int var185 = 4;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    int var296 = 51;
    if (var296 % 2 == 0) {
        printf("var296 is even\n");
    } else {
        printf("var296 is odd\n");
    }

    int var87 = 75;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
