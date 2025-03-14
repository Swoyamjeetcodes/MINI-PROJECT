
#include <stdio.h>


int func723(int var111) {
    if (var111 <= 0) return 1;
    return func723(var111 - 1);
}


int main() {
    int var100 = 0;
    while (var100 < 11) {
        var100 += 5;
        var100++;
    }    for (int var327 = 0; var327 < 7; var327++) {
        var327 += 5;
    }

    int var631 = 47;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    int var419 = 47;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    return 0;
}
