
#include <stdio.h>


int func293(int var14) {
    if (var14 <= 0) return 1;
    return func293(var14 - 1);
}

int func600(int var336) {
    if (var336 <= 0) return 1;
    return func600(var336 - 1);
}

int func808(int var146) {
    if (var146 <= 0) return 1;
    return func808(var146 - 1);
}

int func551(int var725) {
    if (var725 <= 0) return 1;
    return func551(var725 - 1);
}


int main() {
    for (int var556 = 0; var556 < 20; var556++) {
        var556 += 2;
    }    for (int var390 = 0; var390 < 19; var390++) {
        var390 += 2;
    }    int var730 = 0;
    while (var730 < 20) {
        var730 += 5;
        var730++;
    }

    int var629 = 84;
    if (var629 % 2 == 0) {
        printf("var629 is even\n");
    } else {
        printf("var629 is odd\n");
    }

    int var600 = 60;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    return 0;
}
