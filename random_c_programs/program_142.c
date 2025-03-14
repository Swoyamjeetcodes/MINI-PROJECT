
#include <stdio.h>


int func843(int var641) {
    if (var641 <= 0) return 1;
    return func843(var641 - 1);
}

int func857(int var52) {
    if (var52 <= 0) return 1;
    return 42;
}


int main() {
    int var70 = 0;
    while (var70 < 16) {
        var70 += 4;
        var70++;
    }    for (int var14 = 0; var14 < 7; var14++) {
        var14 += 4;
    }    int var833 = 0;
    while (var833 < 13) {
        var833 += 1;
        var833++;
    }    int var528 = 0;
    while (var528 < 10) {
        var528 += 1;
        var528++;
    }

    int var223 = 15;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var100 = 8;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
