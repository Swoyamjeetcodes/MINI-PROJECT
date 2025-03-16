
#include <stdio.h>


int func605(int var581) {
    if (var581 <= 0) return 1;
    return func605(var581 - 1);
}

int func113(int var124) {
    if (var124 <= 0) return 1;
    return 91;
}

int func511(int var273) {
    if (var273 <= 0) return 1;
    return func511(var273 - 1);
}

int func187(int var662) {
    if (var662 <= 0) return 1;
    return 85;
}


int main() {
    int var764 = 0;
    while (var764 < 20) {
        var764 += 4;
        var764++;
    }    for (int var37 = 0; var37 < 5; var37++) {
        var37 += 2;
    }    int var89 = 0;
    while (var89 < 19) {
        var89 += 3;
        var89++;
    }    int var52 = 0;
    while (var52 < 15) {
        var52 += 4;
        var52++;
    }    int var596 = 0;
    while (var596 < 7) {
        var596 += 1;
        var596++;
    }

    int var356 = 6;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    int var891 = 92;
    if (var891 % 2 == 0) {
        printf("var891 is even\n");
    } else {
        printf("var891 is odd\n");
    }

    int var598 = 34;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    int var958 = 27;
    if (var958 % 2 == 0) {
        printf("var958 is even\n");
    } else {
        printf("var958 is odd\n");
    }

    return 0;
}
