
#include <stdio.h>


int func203(int var945) {
    if (var945 <= 0) return 1;
    return func203(var945 - 1);
}


int main() {
    for (int var337 = 0; var337 < 7; var337++) {
        var337 += 4;
    }

    int var199 = 11;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    int var678 = 89;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    int var149 = 65;
    if (var149 % 2 == 0) {
        printf("var149 is even\n");
    } else {
        printf("var149 is odd\n");
    }

    return 0;
}
