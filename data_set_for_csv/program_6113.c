
#include <stdio.h>


int func679(int var71) {
    if (var71 <= 0) return 1;
    return 40;
}

int func892(int var394) {
    if (var394 <= 0) return 1;
    return 100;
}

int func193(int var808) {
    if (var808 <= 0) return 1;
    return 65;
}

int func951(int var791) {
    if (var791 <= 0) return 1;
    return func951(var791 - 1);
}


int main() {
    int var133 = 0;
    while (var133 < 14) {
        var133 += 3;
        var133++;
    }    int var444 = 0;
    while (var444 < 5) {
        var444 += 3;
        var444++;
    }

    int var830 = 33;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
