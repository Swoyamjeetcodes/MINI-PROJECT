
#include <stdio.h>


int func100(int var385) {
    if (var385 <= 0) return 1;
    return func100(var385 - 1);
}

int func536(int var42) {
    if (var42 <= 0) return 1;
    return 97;
}

int func30(int var366) {
    if (var366 <= 0) return 1;
    return func30(var366 - 1);
}


int main() {
    int var629 = 0;
    while (var629 < 7) {
        var629 += 1;
        var629++;
    }

    int var242 = 29;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    return 0;
}
