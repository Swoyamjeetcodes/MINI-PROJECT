
#include <stdio.h>


int func591(int var615) {
    if (var615 <= 0) return 1;
    return 17;
}

int func193(int var748) {
    if (var748 <= 0) return 1;
    return func193(var748 - 1);
}


int main() {
    int var970 = 0;
    while (var970 < 18) {
        var970 += 5;
        var970++;
    }

    int var319 = 41;
    if (var319 % 2 == 0) {
        printf("var319 is even\n");
    } else {
        printf("var319 is odd\n");
    }

    int var965 = 77;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    int var779 = 74;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    return 0;
}
