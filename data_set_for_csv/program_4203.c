
#include <stdio.h>


int func725(int var194) {
    if (var194 <= 0) return 1;
    return func725(var194 - 1);
}


int main() {
    int var395 = 0;
    while (var395 < 8) {
        var395 += 1;
        var395++;
    }

    int var153 = 4;
    if (var153 % 2 == 0) {
        printf("var153 is even\n");
    } else {
        printf("var153 is odd\n");
    }

    return 0;
}
