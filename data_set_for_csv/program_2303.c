
#include <stdio.h>


int func2(int var782) {
    if (var782 <= 0) return 1;
    return func2(var782 - 1);
}

int func253(int var612) {
    if (var612 <= 0) return 1;
    return 83;
}


int main() {
    for (int var75 = 0; var75 < 7; var75++) {
        var75 += 5;
    }

    int var5 = 77;
    if (var5 % 2 == 0) {
        printf("var5 is even\n");
    } else {
        printf("var5 is odd\n");
    }

    int var881 = 9;
    if (var881 % 2 == 0) {
        printf("var881 is even\n");
    } else {
        printf("var881 is odd\n");
    }

    int var396 = 8;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    return 0;
}
