
#include <stdio.h>


int func509(int var771) {
    if (var771 <= 0) return 1;
    return 75;
}

int func42(int var789) {
    if (var789 <= 0) return 1;
    return func42(var789 - 1);
}


int main() {
    for (int var296 = 0; var296 < 14; var296++) {
        var296 += 4;
    }

    int var834 = 26;
    if (var834 % 2 == 0) {
        printf("var834 is even\n");
    } else {
        printf("var834 is odd\n");
    }

    return 0;
}
