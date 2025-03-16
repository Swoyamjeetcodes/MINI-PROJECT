
#include <stdio.h>


int func561(int var235) {
    if (var235 <= 0) return 1;
    return func561(var235 - 1);
}

int func783(int var311) {
    if (var311 <= 0) return 1;
    return func783(var311 - 1);
}


int main() {
    int var27 = 0;
    while (var27 < 19) {
        var27 += 3;
        var27++;
    }    for (int var213 = 0; var213 < 12; var213++) {
        var213 += 1;
    }    for (int var43 = 0; var43 < 14; var43++) {
        var43 += 2;
    }

    int var731 = 24;
    if (var731 % 2 == 0) {
        printf("var731 is even\n");
    } else {
        printf("var731 is odd\n");
    }

    return 0;
}
