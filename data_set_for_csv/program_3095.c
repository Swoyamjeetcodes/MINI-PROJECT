
#include <stdio.h>


int func41(int var971) {
    if (var971 <= 0) return 1;
    return func41(var971 - 1);
}


int main() {
    for (int var766 = 0; var766 < 15; var766++) {
        var766 += 5;
    }

    int var713 = 21;
    if (var713 % 2 == 0) {
        printf("var713 is even\n");
    } else {
        printf("var713 is odd\n");
    }

    return 0;
}
