
#include <stdio.h>


int func72(int var517) {
    if (var517 <= 0) return 1;
    return 34;
}

int func786(int var17) {
    if (var17 <= 0) return 1;
    return func786(var17 - 1);
}

int func52(int var567) {
    if (var567 <= 0) return 1;
    return func52(var567 - 1);
}


int main() {
    int var415 = 0;
    while (var415 < 11) {
        var415 += 3;
        var415++;
    }    for (int var201 = 0; var201 < 5; var201++) {
        var201 += 2;
    }    for (int var683 = 0; var683 < 11; var683++) {
        var683 += 1;
    }

    int var730 = 3;
    if (var730 % 2 == 0) {
        printf("var730 is even\n");
    } else {
        printf("var730 is odd\n");
    }

    int var638 = 33;
    if (var638 % 2 == 0) {
        printf("var638 is even\n");
    } else {
        printf("var638 is odd\n");
    }

    return 0;
}
