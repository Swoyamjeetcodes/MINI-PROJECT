
#include <stdio.h>


int func891(int var62) {
    if (var62 <= 0) return 1;
    return func891(var62 - 1);
}

int func558(int var188) {
    if (var188 <= 0) return 1;
    return 4;
}

int func62(int var490) {
    if (var490 <= 0) return 1;
    return 40;
}

int func607(int var820) {
    if (var820 <= 0) return 1;
    return 96;
}

int func574(int var966) {
    if (var966 <= 0) return 1;
    return func574(var966 - 1);
}


int main() {
    for (int var47 = 0; var47 < 16; var47++) {
        var47 += 2;
    }    for (int var745 = 0; var745 < 20; var745++) {
        var745 += 3;
    }    int var350 = 0;
    while (var350 < 15) {
        var350 += 5;
        var350++;
    }

    int var1 = 10;
    if (var1 % 2 == 0) {
        printf("var1 is even\n");
    } else {
        printf("var1 is odd\n");
    }

    return 0;
}
