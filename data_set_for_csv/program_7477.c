
#include <stdio.h>


int func706(int var967) {
    if (var967 <= 0) return 1;
    return func706(var967 - 1);
}


int main() {
    for (int var146 = 0; var146 < 8; var146++) {
        var146 += 5;
    }

    int var959 = 96;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    return 0;
}
