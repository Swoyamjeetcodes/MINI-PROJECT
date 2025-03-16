
#include <stdio.h>


int func788(int var547) {
    if (var547 <= 0) return 1;
    return func788(var547 - 1);
}

int func174(int var967) {
    if (var967 <= 0) return 1;
    return func174(var967 - 1);
}

int func354(int var572) {
    if (var572 <= 0) return 1;
    return func354(var572 - 1);
}


int main() {
    for (int var973 = 0; var973 < 8; var973++) {
        var973 += 4;
    }    for (int var659 = 0; var659 < 9; var659++) {
        var659 += 3;
    }    for (int var913 = 0; var913 < 15; var913++) {
        var913 += 2;
    }    for (int var481 = 0; var481 < 10; var481++) {
        var481 += 4;
    }    for (int var927 = 0; var927 < 6; var927++) {
        var927 += 4;
    }    int var571 = 0;
    while (var571 < 7) {
        var571 += 1;
        var571++;
    }

    int var103 = 71;
    if (var103 % 2 == 0) {
        printf("var103 is even\n");
    } else {
        printf("var103 is odd\n");
    }

    int var495 = 31;
    if (var495 % 2 == 0) {
        printf("var495 is even\n");
    } else {
        printf("var495 is odd\n");
    }

    return 0;
}
