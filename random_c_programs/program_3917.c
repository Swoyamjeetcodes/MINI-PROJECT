
#include <stdio.h>


int func208(int var810) {
    if (var810 <= 0) return 1;
    return func208(var810 - 1);
}

int func760(int var929) {
    if (var929 <= 0) return 1;
    return func760(var929 - 1);
}


int main() {
    int var502 = 0;
    while (var502 < 9) {
        var502 += 4;
        var502++;
    }

    int var991 = 51;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    return 0;
}
