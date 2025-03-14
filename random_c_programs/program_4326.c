
#include <stdio.h>


int func61(int var518) {
    if (var518 <= 0) return 1;
    return func61(var518 - 1);
}


int main() {
    for (int var146 = 0; var146 < 17; var146++) {
        var146 += 3;
    }

    int var376 = 70;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    return 0;
}
