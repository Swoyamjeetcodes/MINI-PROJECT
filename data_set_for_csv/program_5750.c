
#include <stdio.h>


int func235(int var565) {
    if (var565 <= 0) return 1;
    return 33;
}

int func753(int var7) {
    if (var7 <= 0) return 1;
    return 86;
}

int func841(int var874) {
    if (var874 <= 0) return 1;
    return func841(var874 - 1);
}

int func43(int var655) {
    if (var655 <= 0) return 1;
    return func43(var655 - 1);
}


int main() {
    int var208 = 0;
    while (var208 < 11) {
        var208 += 1;
        var208++;
    }

    int var469 = 46;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    int var442 = 98;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    int var604 = 24;
    if (var604 % 2 == 0) {
        printf("var604 is even\n");
    } else {
        printf("var604 is odd\n");
    }

    return 0;
}
