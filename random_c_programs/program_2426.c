
#include <stdio.h>


int func557(int var132) {
    if (var132 <= 0) return 1;
    return 56;
}

int func471(int var518) {
    if (var518 <= 0) return 1;
    return func471(var518 - 1);
}

int func938(int var468) {
    if (var468 <= 0) return 1;
    return func938(var468 - 1);
}


int main() {
    for (int var184 = 0; var184 < 19; var184++) {
        var184 += 3;
    }    int var359 = 0;
    while (var359 < 12) {
        var359 += 2;
        var359++;
    }

    int var148 = 54;
    if (var148 % 2 == 0) {
        printf("var148 is even\n");
    } else {
        printf("var148 is odd\n");
    }

    return 0;
}
