
#include <stdio.h>


int func402(int var608) {
    if (var608 <= 0) return 1;
    return func402(var608 - 1);
}


int main() {
    int var366 = 0;
    while (var366 < 10) {
        var366 += 2;
        var366++;
    }

    int var413 = 1;
    if (var413 % 2 == 0) {
        printf("var413 is even\n");
    } else {
        printf("var413 is odd\n");
    }

    return 0;
}
