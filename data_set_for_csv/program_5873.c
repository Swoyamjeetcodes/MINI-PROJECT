
#include <stdio.h>


int func287(int var499) {
    if (var499 <= 0) return 1;
    return func287(var499 - 1);
}


int main() {
    for (int var707 = 0; var707 < 6; var707++) {
        var707 += 1;
    }

    int var319 = 27;
    if (var319 % 2 == 0) {
        printf("var319 is even\n");
    } else {
        printf("var319 is odd\n");
    }

    int var53 = 17;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    return 0;
}
