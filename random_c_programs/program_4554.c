
#include <stdio.h>


int func583(int var376) {
    if (var376 <= 0) return 1;
    return func583(var376 - 1);
}


int main() {
    for (int var565 = 0; var565 < 11; var565++) {
        var565 += 5;
    }

    int var361 = 42;
    if (var361 % 2 == 0) {
        printf("var361 is even\n");
    } else {
        printf("var361 is odd\n");
    }

    int var646 = 96;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    int var234 = 67;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    int var36 = 94;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    int var504 = 92;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    return 0;
}
