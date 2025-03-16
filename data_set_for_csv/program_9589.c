
#include <stdio.h>


int func985(int var444) {
    if (var444 <= 0) return 1;
    return func985(var444 - 1);
}


int main() {
    for (int var382 = 0; var382 < 16; var382++) {
        var382 += 2;
    }

    int var999 = 36;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    return 0;
}
