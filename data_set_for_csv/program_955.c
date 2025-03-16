
#include <stdio.h>


int func363(int var459) {
    if (var459 <= 0) return 1;
    return func363(var459 - 1);
}

int func995(int var140) {
    if (var140 <= 0) return 1;
    return 73;
}

int func65(int var295) {
    if (var295 <= 0) return 1;
    return 60;
}

int func893(int var153) {
    if (var153 <= 0) return 1;
    return func893(var153 - 1);
}


int main() {
    int var504 = 0;
    while (var504 < 8) {
        var504 += 1;
        var504++;
    }

    int var291 = 4;
    if (var291 % 2 == 0) {
        printf("var291 is even\n");
    } else {
        printf("var291 is odd\n");
    }

    int var302 = 82;
    if (var302 % 2 == 0) {
        printf("var302 is even\n");
    } else {
        printf("var302 is odd\n");
    }

    return 0;
}
