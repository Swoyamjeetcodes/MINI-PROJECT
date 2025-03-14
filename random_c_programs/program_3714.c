
#include <stdio.h>


int func584(int var713) {
    if (var713 <= 0) return 1;
    return 19;
}

int func442(int var701) {
    if (var701 <= 0) return 1;
    return func442(var701 - 1);
}

int func259(int var20) {
    if (var20 <= 0) return 1;
    return func259(var20 - 1);
}


int main() {
    int var963 = 0;
    while (var963 < 17) {
        var963 += 4;
        var963++;
    }    int var271 = 0;
    while (var271 < 15) {
        var271 += 5;
        var271++;
    }    int var814 = 0;
    while (var814 < 5) {
        var814 += 1;
        var814++;
    }

    int var151 = 48;
    if (var151 % 2 == 0) {
        printf("var151 is even\n");
    } else {
        printf("var151 is odd\n");
    }

    return 0;
}
