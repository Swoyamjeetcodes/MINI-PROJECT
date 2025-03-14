
#include <stdio.h>


int func320(int var146) {
    if (var146 <= 0) return 1;
    return func320(var146 - 1);
}


int main() {
    for (int var727 = 0; var727 < 17; var727++) {
        var727 += 5;
    }    for (int var84 = 0; var84 < 15; var84++) {
        var84 += 2;
    }

    int var223 = 17;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var68 = 99;
    if (var68 % 2 == 0) {
        printf("var68 is even\n");
    } else {
        printf("var68 is odd\n");
    }

    return 0;
}
