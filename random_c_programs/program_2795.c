
#include <stdio.h>


int func647(int var51) {
    if (var51 <= 0) return 1;
    return func647(var51 - 1);
}


int main() {
    int var427 = 0;
    while (var427 < 6) {
        var427 += 4;
        var427++;
    }    for (int var561 = 0; var561 < 9; var561++) {
        var561 += 5;
    }

    int var732 = 94;
    if (var732 % 2 == 0) {
        printf("var732 is even\n");
    } else {
        printf("var732 is odd\n");
    }

    int var651 = 96;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    return 0;
}
