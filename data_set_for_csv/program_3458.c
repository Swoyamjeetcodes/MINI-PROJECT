
#include <stdio.h>


int func11(int var271) {
    if (var271 <= 0) return 1;
    return func11(var271 - 1);
}

int func878(int var70) {
    if (var70 <= 0) return 1;
    return func878(var70 - 1);
}

int func749(int var842) {
    if (var842 <= 0) return 1;
    return func749(var842 - 1);
}


int main() {
    int var939 = 0;
    while (var939 < 16) {
        var939 += 4;
        var939++;
    }

    int var392 = 66;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    int var91 = 25;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    return 0;
}
