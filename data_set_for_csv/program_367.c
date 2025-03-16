
#include <stdio.h>


int func463(int var60) {
    if (var60 <= 0) return 1;
    return func463(var60 - 1);
}


int main() {
    int var280 = 0;
    while (var280 < 13) {
        var280 += 1;
        var280++;
    }

    int var534 = 78;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
