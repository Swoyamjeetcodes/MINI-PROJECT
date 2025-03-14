
#include <stdio.h>


int func205(int var436) {
    if (var436 <= 0) return 1;
    return func205(var436 - 1);
}

int func970(int var291) {
    if (var291 <= 0) return 1;
    return 85;
}


int main() {
    int var487 = 0;
    while (var487 < 12) {
        var487 += 3;
        var487++;
    }

    int var925 = 36;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    int var347 = 60;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    int var557 = 66;
    if (var557 % 2 == 0) {
        printf("var557 is even\n");
    } else {
        printf("var557 is odd\n");
    }

    return 0;
}
