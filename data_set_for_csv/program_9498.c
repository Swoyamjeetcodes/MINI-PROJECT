
#include <stdio.h>


int func170(int var146) {
    if (var146 <= 0) return 1;
    return func170(var146 - 1);
}


int main() {
    int var311 = 0;
    while (var311 < 12) {
        var311 += 1;
        var311++;
    }

    int var520 = 94;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    return 0;
}
