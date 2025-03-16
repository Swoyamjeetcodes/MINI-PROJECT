
#include <stdio.h>


int func128(int var336) {
    if (var336 <= 0) return 1;
    return func128(var336 - 1);
}

int func280(int var722) {
    if (var722 <= 0) return 1;
    return 20;
}

int func786(int var192) {
    if (var192 <= 0) return 1;
    return 36;
}

int func315(int var593) {
    if (var593 <= 0) return 1;
    return 98;
}


int main() {
    for (int var104 = 0; var104 < 16; var104++) {
        var104 += 5;
    }

    int var916 = 46;
    if (var916 % 2 == 0) {
        printf("var916 is even\n");
    } else {
        printf("var916 is odd\n");
    }

    int var590 = 19;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    int var724 = 45;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    return 0;
}
