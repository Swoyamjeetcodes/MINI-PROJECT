
#include <stdio.h>


int func796(int var773) {
    if (var773 <= 0) return 1;
    return 35;
}

int func413(int var627) {
    if (var627 <= 0) return 1;
    return func413(var627 - 1);
}

int func338(int var266) {
    if (var266 <= 0) return 1;
    return func338(var266 - 1);
}

int func777(int var608) {
    if (var608 <= 0) return 1;
    return 34;
}


int main() {
    for (int var405 = 0; var405 < 16; var405++) {
        var405 += 5;
    }

    int var80 = 93;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    int var964 = 4;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    int var671 = 62;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    return 0;
}
