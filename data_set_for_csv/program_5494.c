
#include <stdio.h>


int func195(int var110) {
    if (var110 <= 0) return 1;
    return func195(var110 - 1);
}

int func149(int var15) {
    if (var15 <= 0) return 1;
    return func149(var15 - 1);
}

int func13(int var998) {
    if (var998 <= 0) return 1;
    return 85;
}


int main() {
    int var213 = 0;
    while (var213 < 6) {
        var213 += 5;
        var213++;
    }

    int var965 = 26;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    int var256 = 72;
    if (var256 % 2 == 0) {
        printf("var256 is even\n");
    } else {
        printf("var256 is odd\n");
    }

    int var222 = 42;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
