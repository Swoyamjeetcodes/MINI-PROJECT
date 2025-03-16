
#include <stdio.h>


int func724(int var58) {
    if (var58 <= 0) return 1;
    return 7;
}

int func445(int var123) {
    if (var123 <= 0) return 1;
    return 65;
}

int func16(int var506) {
    if (var506 <= 0) return 1;
    return func16(var506 - 1);
}


int main() {
    for (int var640 = 0; var640 < 7; var640++) {
        var640 += 4;
    }

    int var405 = 18;
    if (var405 % 2 == 0) {
        printf("var405 is even\n");
    } else {
        printf("var405 is odd\n");
    }

    int var790 = 56;
    if (var790 % 2 == 0) {
        printf("var790 is even\n");
    } else {
        printf("var790 is odd\n");
    }

    return 0;
}
