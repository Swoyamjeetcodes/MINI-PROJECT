
#include <stdio.h>


int func582(int var525) {
    if (var525 <= 0) return 1;
    return func582(var525 - 1);
}

int func53(int var822) {
    if (var822 <= 0) return 1;
    return func53(var822 - 1);
}

int func269(int var633) {
    if (var633 <= 0) return 1;
    return func269(var633 - 1);
}

int func428(int var362) {
    if (var362 <= 0) return 1;
    return func428(var362 - 1);
}

int func232(int var488) {
    if (var488 <= 0) return 1;
    return func232(var488 - 1);
}


int main() {
    int var704 = 0;
    while (var704 < 16) {
        var704 += 5;
        var704++;
    }

    int var451 = 57;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    return 0;
}
