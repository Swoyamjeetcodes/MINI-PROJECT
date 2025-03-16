
#include <stdio.h>


int func37(int var930) {
    if (var930 <= 0) return 1;
    return func37(var930 - 1);
}


int main() {
    for (int var456 = 0; var456 < 14; var456++) {
        var456 += 3;
    }

    int var776 = 57;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    return 0;
}
