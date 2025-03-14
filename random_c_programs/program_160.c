
#include <stdio.h>


int func855(int var963) {
    if (var963 <= 0) return 1;
    return 95;
}

int func58(int var151) {
    if (var151 <= 0) return 1;
    return func58(var151 - 1);
}

int func740(int var121) {
    if (var121 <= 0) return 1;
    return 63;
}

int func801(int var711) {
    if (var711 <= 0) return 1;
    return func801(var711 - 1);
}

int func313(int var846) {
    if (var846 <= 0) return 1;
    return func313(var846 - 1);
}


int main() {
    for (int var612 = 0; var612 < 10; var612++) {
        var612 += 2;
    }    for (int var387 = 0; var387 < 10; var387++) {
        var387 += 2;
    }    int var144 = 0;
    while (var144 < 6) {
        var144 += 4;
        var144++;
    }

    int var610 = 28;
    if (var610 % 2 == 0) {
        printf("var610 is even\n");
    } else {
        printf("var610 is odd\n");
    }

    return 0;
}
