
#include <stdio.h>


int func875(int var406) {
    if (var406 <= 0) return 1;
    return 13;
}

int func134(int var945) {
    if (var945 <= 0) return 1;
    return func134(var945 - 1);
}

int func853(int var183) {
    if (var183 <= 0) return 1;
    return func853(var183 - 1);
}

int func64(int var332) {
    if (var332 <= 0) return 1;
    return func64(var332 - 1);
}

int func78(int var805) {
    if (var805 <= 0) return 1;
    return func78(var805 - 1);
}


int main() {
    int var897 = 0;
    while (var897 < 11) {
        var897 += 4;
        var897++;
    }

    int var375 = 45;
    if (var375 % 2 == 0) {
        printf("var375 is even\n");
    } else {
        printf("var375 is odd\n");
    }

    return 0;
}
