
#include <stdio.h>


int func125(int var649) {
    if (var649 <= 0) return 1;
    return 72;
}

int func301(int var311) {
    if (var311 <= 0) return 1;
    return func301(var311 - 1);
}

int func73(int var372) {
    if (var372 <= 0) return 1;
    return 90;
}

int func933(int var680) {
    if (var680 <= 0) return 1;
    return func933(var680 - 1);
}


int main() {
    for (int var112 = 0; var112 < 9; var112++) {
        var112 += 4;
    }

    int var684 = 10;
    if (var684 % 2 == 0) {
        printf("var684 is even\n");
    } else {
        printf("var684 is odd\n");
    }

    int var609 = 37;
    if (var609 % 2 == 0) {
        printf("var609 is even\n");
    } else {
        printf("var609 is odd\n");
    }

    int var499 = 19;
    if (var499 % 2 == 0) {
        printf("var499 is even\n");
    } else {
        printf("var499 is odd\n");
    }

    return 0;
}
