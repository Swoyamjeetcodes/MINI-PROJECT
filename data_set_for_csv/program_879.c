
#include <stdio.h>


int func136(int var932) {
    if (var932 <= 0) return 1;
    return 59;
}

int func649(int var79) {
    if (var79 <= 0) return 1;
    return func649(var79 - 1);
}


int main() {
    int var337 = 0;
    while (var337 < 14) {
        var337 += 1;
        var337++;
    }

    int var502 = 33;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    int var96 = 58;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    return 0;
}
