
#include <stdio.h>


int func458(int var281) {
    if (var281 <= 0) return 1;
    return func458(var281 - 1);
}


int main() {
    int var126 = 0;
    while (var126 < 10) {
        var126 += 3;
        var126++;
    }

    int var656 = 9;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var463 = 13;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var917 = 22;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
