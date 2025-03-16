
#include <stdio.h>


int func513(int var142) {
    if (var142 <= 0) return 1;
    return 50;
}

int func766(int var768) {
    if (var768 <= 0) return 1;
    return 73;
}

int func256(int var99) {
    if (var99 <= 0) return 1;
    return func256(var99 - 1);
}

int func29(int var957) {
    if (var957 <= 0) return 1;
    return func29(var957 - 1);
}

int func702(int var750) {
    if (var750 <= 0) return 1;
    return 33;
}


int main() {
    int var653 = 0;
    while (var653 < 6) {
        var653 += 3;
        var653++;
    }

    int var986 = 62;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    int var945 = 47;
    if (var945 % 2 == 0) {
        printf("var945 is even\n");
    } else {
        printf("var945 is odd\n");
    }

    return 0;
}
