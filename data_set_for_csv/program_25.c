
#include <stdio.h>


int func512(int var316) {
    if (var316 <= 0) return 1;
    return func512(var316 - 1);
}

int func82(int var550) {
    if (var550 <= 0) return 1;
    return func82(var550 - 1);
}

int func275(int var443) {
    if (var443 <= 0) return 1;
    return func275(var443 - 1);
}

int func924(int var366) {
    if (var366 <= 0) return 1;
    return 25;
}

int func611(int var495) {
    if (var495 <= 0) return 1;
    return func611(var495 - 1);
}


int main() {
    int var933 = 0;
    while (var933 < 20) {
        var933 += 3;
        var933++;
    }

    int var762 = 10;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    int var715 = 79;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    return 0;
}
