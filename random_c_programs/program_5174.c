
#include <stdio.h>


int func569(int var973) {
    if (var973 <= 0) return 1;
    return func569(var973 - 1);
}

int func810(int var402) {
    if (var402 <= 0) return 1;
    return func810(var402 - 1);
}


int main() {
    int var279 = 0;
    while (var279 < 13) {
        var279 += 4;
        var279++;
    }

    int var70 = 33;
    if (var70 % 2 == 0) {
        printf("var70 is even\n");
    } else {
        printf("var70 is odd\n");
    }

    int var277 = 85;
    if (var277 % 2 == 0) {
        printf("var277 is even\n");
    } else {
        printf("var277 is odd\n");
    }

    int var822 = 71;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    return 0;
}
