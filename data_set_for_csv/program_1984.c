
#include <stdio.h>


int func549(int var602) {
    if (var602 <= 0) return 1;
    return 72;
}

int func265(int var336) {
    if (var336 <= 0) return 1;
    return 100;
}

int func62(int var635) {
    if (var635 <= 0) return 1;
    return 93;
}

int func751(int var923) {
    if (var923 <= 0) return 1;
    return func751(var923 - 1);
}

int func411(int var170) {
    if (var170 <= 0) return 1;
    return func411(var170 - 1);
}


int main() {
    for (int var17 = 0; var17 < 9; var17++) {
        var17 += 3;
    }

    int var527 = 61;
    if (var527 % 2 == 0) {
        printf("var527 is even\n");
    } else {
        printf("var527 is odd\n");
    }

    return 0;
}
