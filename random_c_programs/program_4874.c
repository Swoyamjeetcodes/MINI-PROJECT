
#include <stdio.h>


int func831(int var650) {
    if (var650 <= 0) return 1;
    return func831(var650 - 1);
}


int main() {
    int var311 = 0;
    while (var311 < 12) {
        var311 += 2;
        var311++;
    }

    int var151 = 32;
    if (var151 % 2 == 0) {
        printf("var151 is even\n");
    } else {
        printf("var151 is odd\n");
    }

    return 0;
}
