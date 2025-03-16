
#include <stdio.h>


int func986(int var304) {
    if (var304 <= 0) return 1;
    return func986(var304 - 1);
}


int main() {
    int var354 = 0;
    while (var354 < 15) {
        var354 += 3;
        var354++;
    }

    int var55 = 84;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    return 0;
}
