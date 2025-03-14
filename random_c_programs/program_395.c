
#include <stdio.h>


int func289(int var294) {
    if (var294 <= 0) return 1;
    return 13;
}

int func667(int var824) {
    if (var824 <= 0) return 1;
    return 93;
}

int func59(int var108) {
    if (var108 <= 0) return 1;
    return func59(var108 - 1);
}

int func102(int var107) {
    if (var107 <= 0) return 1;
    return func102(var107 - 1);
}

int func703(int var963) {
    if (var963 <= 0) return 1;
    return 75;
}


int main() {
    for (int var639 = 0; var639 < 14; var639++) {
        var639 += 3;
    }    for (int var994 = 0; var994 < 15; var994++) {
        var994 += 3;
    }    for (int var427 = 0; var427 < 16; var427++) {
        var427 += 4;
    }

    int var244 = 51;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var564 = 91;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    int var246 = 50;
    if (var246 % 2 == 0) {
        printf("var246 is even\n");
    } else {
        printf("var246 is odd\n");
    }

    return 0;
}
