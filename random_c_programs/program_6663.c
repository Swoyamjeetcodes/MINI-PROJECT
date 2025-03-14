
#include <stdio.h>


int func371(int var949) {
    if (var949 <= 0) return 1;
    return 13;
}

int func310(int var451) {
    if (var451 <= 0) return 1;
    return func310(var451 - 1);
}

int func434(int var149) {
    if (var149 <= 0) return 1;
    return 69;
}

int func557(int var301) {
    if (var301 <= 0) return 1;
    return func557(var301 - 1);
}

int func114(int var152) {
    if (var152 <= 0) return 1;
    return func114(var152 - 1);
}


int main() {
    int var996 = 0;
    while (var996 < 7) {
        var996 += 3;
        var996++;
    }    int var24 = 0;
    while (var24 < 9) {
        var24 += 1;
        var24++;
    }    int var169 = 0;
    while (var169 < 12) {
        var169 += 5;
        var169++;
    }

    int var312 = 62;
    if (var312 % 2 == 0) {
        printf("var312 is even\n");
    } else {
        printf("var312 is odd\n");
    }

    int var674 = 40;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
