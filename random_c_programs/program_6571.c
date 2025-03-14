
#include <stdio.h>


int func349(int var662) {
    if (var662 <= 0) return 1;
    return func349(var662 - 1);
}

int func96(int var580) {
    if (var580 <= 0) return 1;
    return func96(var580 - 1);
}

int func284(int var527) {
    if (var527 <= 0) return 1;
    return 30;
}

int func289(int var248) {
    if (var248 <= 0) return 1;
    return 26;
}

int func301(int var327) {
    if (var327 <= 0) return 1;
    return 85;
}

int func516(int var874) {
    if (var874 <= 0) return 1;
    return 68;
}

int func447(int var464) {
    if (var464 <= 0) return 1;
    return 37;
}

int func400(int var362) {
    if (var362 <= 0) return 1;
    return 99;
}

int func498(int var49) {
    if (var49 <= 0) return 1;
    return 3;
}


int main() {
    for (int var866 = 0; var866 < 19; var866++) {
        var866 += 4;
    }

    int var849 = 19;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    return 0;
}
