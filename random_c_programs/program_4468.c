
#include <stdio.h>


int func431(int var404) {
    if (var404 <= 0) return 1;
    return func431(var404 - 1);
}

int func140(int var906) {
    if (var906 <= 0) return 1;
    return func140(var906 - 1);
}


int main() {
    for (int var551 = 0; var551 < 15; var551++) {
        var551 += 4;
    }

    int var967 = 39;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    int var468 = 16;
    if (var468 % 2 == 0) {
        printf("var468 is even\n");
    } else {
        printf("var468 is odd\n");
    }

    return 0;
}
