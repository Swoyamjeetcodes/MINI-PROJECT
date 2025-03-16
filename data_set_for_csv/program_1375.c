
#include <stdio.h>


int func431(int var244) {
    if (var244 <= 0) return 1;
    return func431(var244 - 1);
}

int func191(int var769) {
    if (var769 <= 0) return 1;
    return func191(var769 - 1);
}

int func266(int var653) {
    if (var653 <= 0) return 1;
    return func266(var653 - 1);
}

int func570(int var64) {
    if (var64 <= 0) return 1;
    return func570(var64 - 1);
}

int func440(int var550) {
    if (var550 <= 0) return 1;
    return 6;
}

int func500(int var748) {
    if (var748 <= 0) return 1;
    return 17;
}

int func475(int var279) {
    if (var279 <= 0) return 1;
    return func475(var279 - 1);
}

int func19(int var642) {
    if (var642 <= 0) return 1;
    return 61;
}

int func312(int var55) {
    if (var55 <= 0) return 1;
    return 32;
}


int main() {
    for (int var971 = 0; var971 < 18; var971++) {
        var971 += 5;
    }    for (int var250 = 0; var250 < 19; var250++) {
        var250 += 3;
    }    for (int var695 = 0; var695 < 20; var695++) {
        var695 += 1;
    }

    int var580 = 82;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    return 0;
}
