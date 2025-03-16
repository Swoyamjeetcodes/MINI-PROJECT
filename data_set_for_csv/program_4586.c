
#include <stdio.h>


int func151(int var437) {
    if (var437 <= 0) return 1;
    return func151(var437 - 1);
}

int func501(int var827) {
    if (var827 <= 0) return 1;
    return 9;
}

int func631(int var511) {
    if (var511 <= 0) return 1;
    return 74;
}

int func375(int var910) {
    if (var910 <= 0) return 1;
    return 6;
}

int func526(int var305) {
    if (var305 <= 0) return 1;
    return func526(var305 - 1);
}


int main() {
    for (int var706 = 0; var706 < 20; var706++) {
        var706 += 2;
    }

    int var817 = 53;
    if (var817 % 2 == 0) {
        printf("var817 is even\n");
    } else {
        printf("var817 is odd\n");
    }

    int var473 = 62;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    return 0;
}
