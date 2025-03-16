
#include <stdio.h>


int func396(int var826) {
    if (var826 <= 0) return 1;
    return func396(var826 - 1);
}


int main() {
    int var175 = 0;
    while (var175 < 16) {
        var175 += 1;
        var175++;
    }

    int var150 = 90;
    if (var150 % 2 == 0) {
        printf("var150 is even\n");
    } else {
        printf("var150 is odd\n");
    }

    int var883 = 32;
    if (var883 % 2 == 0) {
        printf("var883 is even\n");
    } else {
        printf("var883 is odd\n");
    }

    return 0;
}
