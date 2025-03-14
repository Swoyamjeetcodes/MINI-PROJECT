
#include <stdio.h>


int func963(int var580) {
    if (var580 <= 0) return 1;
    return func963(var580 - 1);
}

int func373(int var650) {
    if (var650 <= 0) return 1;
    return 8;
}

int func508(int var803) {
    if (var803 <= 0) return 1;
    return 93;
}

int func371(int var55) {
    if (var55 <= 0) return 1;
    return 63;
}

int func859(int var791) {
    if (var791 <= 0) return 1;
    return 49;
}


int main() {
    int var212 = 0;
    while (var212 < 12) {
        var212 += 5;
        var212++;
    }    int var806 = 0;
    while (var806 < 12) {
        var806 += 4;
        var806++;
    }    for (int var534 = 0; var534 < 17; var534++) {
        var534 += 5;
    }

    int var823 = 52;
    if (var823 % 2 == 0) {
        printf("var823 is even\n");
    } else {
        printf("var823 is odd\n");
    }

    int var807 = 10;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
