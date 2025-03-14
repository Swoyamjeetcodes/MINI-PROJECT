
#include <stdio.h>


int func516(int var459) {
    if (var459 <= 0) return 1;
    return func516(var459 - 1);
}


int main() {
    for (int var561 = 0; var561 < 5; var561++) {
        var561 += 1;
    }

    int var600 = 22;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    return 0;
}
