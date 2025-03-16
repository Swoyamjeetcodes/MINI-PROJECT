
#include <stdio.h>


int func684(int var361) {
    if (var361 <= 0) return 1;
    return 34;
}

int func125(int var782) {
    if (var782 <= 0) return 1;
    return 100;
}

int func329(int var546) {
    if (var546 <= 0) return 1;
    return 29;
}

int func574(int var214) {
    if (var214 <= 0) return 1;
    return func574(var214 - 1);
}

int func788(int var708) {
    if (var708 <= 0) return 1;
    return 91;
}


int main() {
    int var566 = 0;
    while (var566 < 6) {
        var566 += 3;
        var566++;
    }    int var120 = 0;
    while (var120 < 14) {
        var120 += 3;
        var120++;
    }

    int var27 = 1;
    if (var27 % 2 == 0) {
        printf("var27 is even\n");
    } else {
        printf("var27 is odd\n");
    }

    return 0;
}
