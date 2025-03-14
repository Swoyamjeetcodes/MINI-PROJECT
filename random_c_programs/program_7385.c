
#include <stdio.h>


int func65(int var500) {
    if (var500 <= 0) return 1;
    return func65(var500 - 1);
}


int main() {
    int var629 = 0;
    while (var629 < 16) {
        var629 += 2;
        var629++;
    }

    int var359 = 75;
    if (var359 % 2 == 0) {
        printf("var359 is even\n");
    } else {
        printf("var359 is odd\n");
    }

    return 0;
}
