
#include <stdio.h>


int func743(int var30) {
    if (var30 <= 0) return 1;
    return 38;
}

int func548(int var263) {
    if (var263 <= 0) return 1;
    return func548(var263 - 1);
}


int main() {
    int var585 = 0;
    while (var585 < 19) {
        var585 += 2;
        var585++;
    }

    int var747 = 70;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    int var456 = 50;
    if (var456 % 2 == 0) {
        printf("var456 is even\n");
    } else {
        printf("var456 is odd\n");
    }

    int var97 = 67;
    if (var97 % 2 == 0) {
        printf("var97 is even\n");
    } else {
        printf("var97 is odd\n");
    }

    return 0;
}
