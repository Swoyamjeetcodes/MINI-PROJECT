
#include <stdio.h>


int func253(int var878) {
    if (var878 <= 0) return 1;
    return func253(var878 - 1);
}


int main() {
    int var111 = 0;
    while (var111 < 20) {
        var111 += 2;
        var111++;
    }

    int var566 = 9;
    if (var566 % 2 == 0) {
        printf("var566 is even\n");
    } else {
        printf("var566 is odd\n");
    }

    return 0;
}
