
#include <stdio.h>


int func304(int var58) {
    if (var58 <= 0) return 1;
    return func304(var58 - 1);
}

int func649(int var181) {
    if (var181 <= 0) return 1;
    return 20;
}

int func829(int var486) {
    if (var486 <= 0) return 1;
    return func829(var486 - 1);
}


int main() {
    int var363 = 0;
    while (var363 < 8) {
        var363 += 1;
        var363++;
    }

    int var797 = 4;
    if (var797 % 2 == 0) {
        printf("var797 is even\n");
    } else {
        printf("var797 is odd\n");
    }

    int var617 = 80;
    if (var617 % 2 == 0) {
        printf("var617 is even\n");
    } else {
        printf("var617 is odd\n");
    }

    int var786 = 47;
    if (var786 % 2 == 0) {
        printf("var786 is even\n");
    } else {
        printf("var786 is odd\n");
    }

    return 0;
}
