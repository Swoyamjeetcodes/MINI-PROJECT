
#include <stdio.h>


int func38(int var714) {
    if (var714 <= 0) return 1;
    return 65;
}

int func892(int var653) {
    if (var653 <= 0) return 1;
    return func892(var653 - 1);
}

int func701(int var437) {
    if (var437 <= 0) return 1;
    return func701(var437 - 1);
}

int func209(int var994) {
    if (var994 <= 0) return 1;
    return func209(var994 - 1);
}


int main() {
    for (int var280 = 0; var280 < 6; var280++) {
        var280 += 2;
    }

    int var185 = 84;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    int var207 = 78;
    if (var207 % 2 == 0) {
        printf("var207 is even\n");
    } else {
        printf("var207 is odd\n");
    }

    int var858 = 77;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    return 0;
}
