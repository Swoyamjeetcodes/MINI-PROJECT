
#include <stdio.h>


int func197(int var376) {
    if (var376 <= 0) return 1;
    return func197(var376 - 1);
}

int func497(int var154) {
    if (var154 <= 0) return 1;
    return func497(var154 - 1);
}

int func584(int var493) {
    if (var493 <= 0) return 1;
    return func584(var493 - 1);
}


int main() {
    for (int var230 = 0; var230 < 7; var230++) {
        var230 += 1;
    }

    int var271 = 31;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    int var992 = 85;
    if (var992 % 2 == 0) {
        printf("var992 is even\n");
    } else {
        printf("var992 is odd\n");
    }

    int var569 = 34;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    return 0;
}
