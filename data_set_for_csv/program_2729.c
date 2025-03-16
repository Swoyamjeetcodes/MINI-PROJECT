
#include <stdio.h>


int func549(int var528) {
    if (var528 <= 0) return 1;
    return 59;
}

int func115(int var144) {
    if (var144 <= 0) return 1;
    return func115(var144 - 1);
}

int func542(int var936) {
    if (var936 <= 0) return 1;
    return func542(var936 - 1);
}

int func1(int var500) {
    if (var500 <= 0) return 1;
    return func1(var500 - 1);
}


int main() {
    int var842 = 0;
    while (var842 < 15) {
        var842 += 4;
        var842++;
    }    int var662 = 0;
    while (var662 < 14) {
        var662 += 4;
        var662++;
    }    for (int var960 = 0; var960 < 12; var960++) {
        var960 += 1;
    }

    int var489 = 41;
    if (var489 % 2 == 0) {
        printf("var489 is even\n");
    } else {
        printf("var489 is odd\n");
    }

    return 0;
}
