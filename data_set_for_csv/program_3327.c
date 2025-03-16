
#include <stdio.h>


int func371(int var338) {
    if (var338 <= 0) return 1;
    return func371(var338 - 1);
}

int func740(int var69) {
    if (var69 <= 0) return 1;
    return func740(var69 - 1);
}

int func523(int var599) {
    if (var599 <= 0) return 1;
    return 43;
}

int func181(int var589) {
    if (var589 <= 0) return 1;
    return 21;
}

int func636(int var974) {
    if (var974 <= 0) return 1;
    return func636(var974 - 1);
}


int main() {
    for (int var301 = 0; var301 < 5; var301++) {
        var301 += 1;
    }    int var476 = 0;
    while (var476 < 13) {
        var476 += 4;
        var476++;
    }    int var130 = 0;
    while (var130 < 20) {
        var130 += 2;
        var130++;
    }

    int var932 = 59;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    return 0;
}
