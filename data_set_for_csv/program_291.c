
#include <stdio.h>


int func706(int var600) {
    if (var600 <= 0) return 1;
    return func706(var600 - 1);
}


int main() {
    for (int var54 = 0; var54 < 5; var54++) {
        var54 += 1;
    }    int var12 = 0;
    while (var12 < 14) {
        var12 += 2;
        var12++;
    }    for (int var692 = 0; var692 < 5; var692++) {
        var692 += 3;
    }

    int var892 = 94;
    if (var892 % 2 == 0) {
        printf("var892 is even\n");
    } else {
        printf("var892 is odd\n");
    }

    int var99 = 86;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    int var964 = 7;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    return 0;
}
