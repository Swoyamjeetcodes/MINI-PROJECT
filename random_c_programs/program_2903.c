
#include <stdio.h>


int func41(int var99) {
    if (var99 <= 0) return 1;
    return func41(var99 - 1);
}


int main() {
    int var863 = 0;
    while (var863 < 11) {
        var863 += 5;
        var863++;
    }

    int var35 = 71;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
