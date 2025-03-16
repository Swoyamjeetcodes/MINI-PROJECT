
#include <stdio.h>


int func15(int var220) {
    if (var220 <= 0) return 1;
    return 56;
}

int func757(int var139) {
    if (var139 <= 0) return 1;
    return func757(var139 - 1);
}


int main() {
    int var376 = 0;
    while (var376 < 6) {
        var376 += 2;
        var376++;
    }

    int var356 = 2;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    int var390 = 2;
    if (var390 % 2 == 0) {
        printf("var390 is even\n");
    } else {
        printf("var390 is odd\n");
    }

    int var960 = 15;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
