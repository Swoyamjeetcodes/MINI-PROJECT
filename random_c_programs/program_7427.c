
#include <stdio.h>


int func137(int var262) {
    if (var262 <= 0) return 1;
    return func137(var262 - 1);
}

int func293(int var68) {
    if (var68 <= 0) return 1;
    return func293(var68 - 1);
}


int main() {
    for (int var363 = 0; var363 < 19; var363++) {
        var363 += 4;
    }    int var256 = 0;
    while (var256 < 15) {
        var256 += 4;
        var256++;
    }    int var85 = 0;
    while (var85 < 12) {
        var85 += 4;
        var85++;
    }    int var527 = 0;
    while (var527 < 5) {
        var527 += 3;
        var527++;
    }    for (int var415 = 0; var415 < 15; var415++) {
        var415 += 1;
    }    int var788 = 0;
    while (var788 < 9) {
        var788 += 3;
        var788++;
    }

    int var224 = 61;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    int var492 = 93;
    if (var492 % 2 == 0) {
        printf("var492 is even\n");
    } else {
        printf("var492 is odd\n");
    }

    int var736 = 30;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    return 0;
}
