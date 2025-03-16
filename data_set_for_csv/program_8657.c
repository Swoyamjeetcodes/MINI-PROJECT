
#include <stdio.h>


int func137(int var446) {
    if (var446 <= 0) return 1;
    return 42;
}

int func628(int var375) {
    if (var375 <= 0) return 1;
    return func628(var375 - 1);
}


int main() {
    int var103 = 0;
    while (var103 < 17) {
        var103 += 4;
        var103++;
    }    for (int var649 = 0; var649 < 12; var649++) {
        var649 += 4;
    }

    int var340 = 75;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    int var310 = 20;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    return 0;
}
