
#include <stdio.h>


int func711(int var420) {
    if (var420 <= 0) return 1;
    return 27;
}

int func484(int var855) {
    if (var855 <= 0) return 1;
    return 22;
}

int func321(int var26) {
    if (var26 <= 0) return 1;
    return func321(var26 - 1);
}

int func873(int var949) {
    if (var949 <= 0) return 1;
    return func873(var949 - 1);
}


int main() {
    int var58 = 0;
    while (var58 < 13) {
        var58 += 2;
        var58++;
    }    for (int var459 = 0; var459 < 19; var459++) {
        var459 += 2;
    }    for (int var14 = 0; var14 < 7; var14++) {
        var14 += 3;
    }    int var38 = 0;
    while (var38 < 20) {
        var38 += 2;
        var38++;
    }    for (int var468 = 0; var468 < 20; var468++) {
        var468 += 3;
    }    for (int var977 = 0; var977 < 18; var977++) {
        var977 += 4;
    }

    int var525 = 100;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    return 0;
}
