
#include <stdio.h>


int func443(int var490) {
    if (var490 <= 0) return 1;
    return func443(var490 - 1);
}

int func79(int var985) {
    if (var985 <= 0) return 1;
    return 68;
}

int func924(int var160) {
    if (var160 <= 0) return 1;
    return 99;
}

int func24(int var357) {
    if (var357 <= 0) return 1;
    return func24(var357 - 1);
}


int main() {
    for (int var184 = 0; var184 < 20; var184++) {
        var184 += 2;
    }    int var998 = 0;
    while (var998 < 16) {
        var998 += 1;
        var998++;
    }    int var844 = 0;
    while (var844 < 9) {
        var844 += 4;
        var844++;
    }

    int var568 = 40;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    return 0;
}
