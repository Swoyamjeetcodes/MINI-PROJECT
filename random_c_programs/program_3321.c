
#include <stdio.h>


int func891(int var666) {
    if (var666 <= 0) return 1;
    return func891(var666 - 1);
}

int func30(int var27) {
    if (var27 <= 0) return 1;
    return func30(var27 - 1);
}

int func121(int var209) {
    if (var209 <= 0) return 1;
    return 42;
}

int func98(int var766) {
    if (var766 <= 0) return 1;
    return func98(var766 - 1);
}

int func294(int var463) {
    if (var463 <= 0) return 1;
    return 87;
}

int func656(int var154) {
    if (var154 <= 0) return 1;
    return 96;
}

int func217(int var85) {
    if (var85 <= 0) return 1;
    return func217(var85 - 1);
}

int func550(int var64) {
    if (var64 <= 0) return 1;
    return 66;
}

int func902(int var915) {
    if (var915 <= 0) return 1;
    return func902(var915 - 1);
}


int main() {
    for (int var660 = 0; var660 < 14; var660++) {
        var660 += 3;
    }    for (int var475 = 0; var475 < 17; var475++) {
        var475 += 2;
    }    int var236 = 0;
    while (var236 < 17) {
        var236 += 4;
        var236++;
    }

    int var512 = 38;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    return 0;
}
