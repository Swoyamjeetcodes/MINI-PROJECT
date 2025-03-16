
#include <stdio.h>


int func662(int var977) {
    if (var977 <= 0) return 1;
    return func662(var977 - 1);
}

int func457(int var748) {
    if (var748 <= 0) return 1;
    return func457(var748 - 1);
}

int func292(int var429) {
    if (var429 <= 0) return 1;
    return 57;
}


int main() {
    int var604 = 0;
    while (var604 < 7) {
        var604 += 5;
        var604++;
    }    for (int var324 = 0; var324 < 10; var324++) {
        var324 += 3;
    }

    int var17 = 100;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    int var526 = 24;
    if (var526 % 2 == 0) {
        printf("var526 is even\n");
    } else {
        printf("var526 is odd\n");
    }

    return 0;
}
