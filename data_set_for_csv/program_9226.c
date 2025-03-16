
#include <stdio.h>


int func215(int var430) {
    if (var430 <= 0) return 1;
    return func215(var430 - 1);
}

int func341(int var333) {
    if (var333 <= 0) return 1;
    return func341(var333 - 1);
}

int func356(int var736) {
    if (var736 <= 0) return 1;
    return 41;
}

int func774(int var938) {
    if (var938 <= 0) return 1;
    return func774(var938 - 1);
}


int main() {
    for (int var150 = 0; var150 < 19; var150++) {
        var150 += 2;
    }

    int var389 = 99;
    if (var389 % 2 == 0) {
        printf("var389 is even\n");
    } else {
        printf("var389 is odd\n");
    }

    int var843 = 18;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    return 0;
}
