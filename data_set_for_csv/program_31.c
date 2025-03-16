
#include <stdio.h>


int func141(int var939) {
    if (var939 <= 0) return 1;
    return func141(var939 - 1);
}


int main() {
    int var528 = 0;
    while (var528 < 9) {
        var528 += 2;
        var528++;
    }    int var561 = 0;
    while (var561 < 16) {
        var561 += 3;
        var561++;
    }

    int var462 = 93;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    return 0;
}
