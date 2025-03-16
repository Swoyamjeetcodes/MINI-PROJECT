
#include <stdio.h>


int func387(int var629) {
    if (var629 <= 0) return 1;
    return func387(var629 - 1);
}


int main() {
    for (int var551 = 0; var551 < 14; var551++) {
        var551 += 1;
    }

    int var377 = 99;
    if (var377 % 2 == 0) {
        printf("var377 is even\n");
    } else {
        printf("var377 is odd\n");
    }

    return 0;
}
